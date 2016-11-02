# audiohack
Ein kollaboratives Projekt als Übung für das 5. Semester.

### mögliche Funktionen:
* Effekte
  * Delay
  * Reverb
  * Pitchshift
  * ...
* FadeIn, FadeOut
* Volume change, Normalize
* Cut
* Reverse
* Bitcrusher
* Gate
* ...

### Programmaufruf:
```
$ audiohack --input inputFile.wav --output outputfile.wav --action cut
$ audiohack -i inputFile.wav -o outputFile.wav -a cut
$ audiohack if.wav of.wav cut
```

### Funktionen
#### Gate
##### Aufruf:
```
$ audiohack if.wav of.wav --action gate <threshold> [<attack> <release>]
```

##### Parameter:
* threshold: Wert, ab dem das Gate greift. [0.0-1.0]
* [attack]: Anstiegszeit
* [release]: Abklingzeit

#### Bitcrusher

##### Aufruf:
```
$ audiohack if.wav of.wav --action bitcrusher <bitRate> <bitDepth>
```
#### Parameter:

* bitRate: 
* bitDepth:

#### Delay
##### Aufruf:
```
$ audiohack if.wav of.wav -d [<delaytime> <inputvolume> <outputvolume> <cutofffrequency>]
```

##### Parameter:
* [delaytime]: Wert, nach welchem das verzögerte Signal eintrifft. (in ms)
* [inputvolume]: Wie viel vom Originalsignal verarbeitet werden soll. [0.0 - 1.0]
* [release]: Wie laut das Delay sein soll. [0.0 - 1.0]
* [cutofffrequency]: Ob und wie viel Bass im Delay abgeschnitten werden soll. [0 - 2500hz]


#### Reverb
##### Aufruf:

```
$ audiohack if.wav of.wav --action reverb ...
```

##### Parameter:
tbd


#### Pitchshift
##### Anmerkung:
Eine Subfunktion für das Timestretching ist von Nöten. Sollte ein Effekt implementiert werden sollen, der die Zeit verändert, sollte dieser die gleiche Pitch- und Timestretchingfunktion verwenden, wie die die hier implementiert wird.

##### Aufruf:
```
$ audiohack if.wav of.wav -action pitchShift <pitchCent> [<timestretch>]
```

##### Parameter:
* pitch: Wert, um den die Tonhöhe verändert werden soll in Cent.
* [timestretch]: Faktor, mit dem die Zeit gestreckt wird, ausgehend von der Länge im Ausgangsmaterial.