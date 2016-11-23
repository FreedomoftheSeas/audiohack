//
//  Metaklasse.cpp
//  
//
//  Created by Simon Dörner on 09.11.16.
//
//


/*
 Metaklasse:
 
 Soll folgende Funktionen beinhalten:
 - loadFile: die Datei (komplett) laden und die Rohdaten als Float-Werte für die Funktionen zur Verfügung stellen
 - loadBlocks: lädt aus der Liste die loadFile zur Verfügung stellt Datenblöcke verschiedener Größe mit einstellbarer Blockgröße und einstellbarer Überschneidung
 - mergeBlocks: rechnet die Blöcke, die mit loadBlocks erstellt wurden und im Anschluss vermutlich verändert wurden wieder mit einem Crossfade von einstellbarer Länge übereinander gerechnet (um die Überschneidung auszugleichen)
 - rms: ermitteln des Quadratischen Mittels einer Liste von Float-Werten (Root Mean Square)
 - fft: ermittelt ein Frequenzspektrum mit Hilfe der FFT (oder einer anderen Fourier Transform)
 - ift: IFT (Inverse Fourier Transform), synthetisiert aus den (veränderten) Ergebnissen der FFT wieder Sampledaten
 */