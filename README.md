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
