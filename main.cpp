/*
	audiohack



	TODO:
	- datei einlesen    (argv[2])
	- action ausführen  (argv[6...])
	- datei ausgeben    (argv[4])
*/

#include <iostream>
#include <sndfile.h>
#include "AudioProcessor.h"
#include "AudioProcessorHelperLib.h"

using namespace std;

int main(int argc, const char * argv[]) {

	SNDFILE *inputFile, *outputFile;
	SF_INFO sfInfo;
	double  **soundArray;

	// müssen noch überprüft werden
	string inputFilePath = "InputFile.wav"; //argv[2];
	string outputFilePath = "OutputFile.wav"; //argv[4];

	inputFile = sf_open(inputFilePath.c_str(), SFM_READ, &sfInfo);

	if(!inputFile)
		{
			cout << "Not able to open " << inputFilePath << endl;
			sf_perror(NULL);
			return 0;
		}


	outputFile = sf_open(outputFilePath.c_str(), SFM_WRITE, &sfInfo);
	 
	double buffer[500];	// Puffer für Soundsamples, Größe ist variabel
	int    itemsRead;
	double amplitude = 0.5;
	
	while ((itemsRead = sf_read_double(inputFile, buffer, 500))) {
		
		for (int item = 0; item < itemsRead; item++) {
			buffer[item] *= amplitude;
		}
		
		sf_write_double(outputFile, buffer, itemsRead);
	}
	
	sf_close(outputFile);	
	sf_close(inputFile);	


	/*
		params:
		argv[1]: --inputFile
		argv[2]: <inputFile.wav>
		argv[3]: --outputFile
		argv[4]: <outputFile.wav>
		argv[5]: --action
		argv[6]: <action>
		(argv[7...]: params for action)
	 */


	
	return 0;
}
