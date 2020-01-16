## Arduinoa Industrian MEKA

Ingurune industrialeko aplikazioetan Arduinoa erabiltzeko sortu den kurtsoa praktikoaren errepositoria da hurrengoa. 
(https://classroom.google.com/u/0/w/NDM3NDM5NDg1ODha/t/all?hl=es)

<p float="left">
  <img src="https://github.com/axpirina/Arduinoa-Industrian/blob/master/Irudiak/Elektropneumatikoa%20(MEKA)_bb.png" width="400" />
  <img src="https://github.com/axpirina/Arduinoa-Industrian/blob/master/Irudiak/Engranaje%2002.gif" width="400" /> 
</p>

## Plangintza

Arduinoaren erabilera esplikatzeko teoria lehenengo 5 praktiketan ematen da, Classroom eta Moodle erremintak erabiliaz eta bideo bitartez lagunduta. Klaseak flipped classroom moduan ematen dira ordu presentzialak praktikak egiteko aprobetxatuaz eta teoria online eginaz EDPUZZLE plataforma bitartez.
 
(https://industry-automation.moodlecloud.com/) 

<p float="left">
  <img src="https://github.com/axpirina/Arduinoa-Industrian/blob/master/Irudiak/Moodle.png" width="400" />
  <img src="https://github.com/axpirina/Arduinoa-Industrian/blob/master/Irudiak/Eddpuzzle.png" width="400" /> 
</p>

## Aurretiko jakintzak

Ez da bereziki elektronika edo programazio aurrekarririk behar, baina ongi etortzen da C edo antzeko hizkuntzen jakintza pixkat. 

```bash
digitalWrite(13, HIGH); // sets the digital pin 13 on
```

## Konfigurazioa

Kurtsoa Classroom plataformaren bitartez emango da nagusiki.

<p float="centre">
  <img src="https://github.com/axpirina/Arduinoa-Industrian/blob/master/Irudiak/Classroom.png" width="600" />
</p> 

1. Open your ***/boot/config.txt*** file while reading the SD in any operation system.  :computer: 
2. ADD the following line and SAVE.  :page_facing_up:

     ```enable_uart=1 ```
    
3. This will enable GPIO serial port which is disabled in newer versions of Raspbian Jessie (May 2016 and later).

## Electronics

Place and connect the following circuit on raspberry GPIOs.

![What is this](RaspiProtoboard.png)
![What is this](RaspiScheme.png)
