/*
	Metaklasse:
 
	Soll folgende Funktionen beinhalten:
	- loadFile: die Datei (komplett) laden und die Rohdaten als Float-Werte für die Funktionen zur Verfügung stellen
	- loadBlocks: lädt aus der Liste die loadFile zur Verfügung stellt Datenblöcke verschiedener Größe mit einstellbarer Blockgröße und einstellbarer Überschneidung
	- mergeBlocks: rechnet die Blöcke, die mit loadBlocks erstellt wurden und im Anschluss vermutlich verändert wurden wieder mit einem Crossfade von einstellbarer Länge übereinander gerechnet (um die Überschneidung auszugleichen)


*/

#include "Options.h"

class AudioProcessor {
 public:
	AudioProcessor();
	void process();
	static void getOptions();
	struct Options;
	
 protected:
	void load(int blockSize=0, int overlap=0);    // blockSize = 0: ganze Datei wird geladen
	void mergeBlocks();

	int blockSize;
	int overlap;
	
};
