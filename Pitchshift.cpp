//
//  Pitchshift.cpp
//  
//
//  Created by Simon Dörner on 07.11.16.
//
//

/*
 Die Pitchshiftklasse bekommt zwei Argumente:
 - Pitchcent um den Grad der Tonhöhenveränderung anzugeben
 - Timestrech (unter Umständen wird dieses Argument auch noch gestrichen, um Konflikte mit anderen Funktionen zu umgehen)
 
 Ablauf des Vorgangs:
 - sich überlappende Abschnitte werden über einen einfach Oszilator in der Tonhöhe verschoben (sodass sie ihre Länge mit verändern) und anschließend wieder mit so viel Überlappung verrechnet, dass sich keine zeitliche Verschiebung ergibt.

 */
