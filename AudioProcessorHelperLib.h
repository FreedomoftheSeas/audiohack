/*
	AudioProcessorHelperLib:
	

	- rms: ermitteln des Quadratischen Mittels einer Liste von Float-Werten (Root Mean Square)
	- fft: ermittelt ein Frequenzspektrum mit Hilfe der FFT (oder einer anderen Fourier Transform)
	- ift: IFT (Inverse Fourier Transform), synthetisiert aus den (veränderten) Ergebnissen der FFT wieder Sampledaten

 */

class AudioProcessorHelperLib {
	static void rms(float *data[]);
	static void fft(float *data[]);
	static void ift(float *data[]);
};
