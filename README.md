## Arduinoa Industrian MEKA

Ingurune industrialeko aplikazioetan Arduinoa erabiltzeko sortu den kurtsoa praktikoaren errepositoria da hurrengoa. (https://industry-automation.moodlecloud.com/) 

![Eskema](https://github.com/axpirina/Arduinoa-Industrian/tree/master/Irudiak/Elektropneumatikoa (MEKA)_bb.png.png)

## Plangintza

Arduinoaren erabilera esplikatzeko teoria lehenengo 5 praktiketan ematen da, Classroom eta Moodle erremintak erabiliaz eta bideo bitartez lagunduta. Klaseak flipped classroom moduan ematen dira ordu presentzialak praktikak egiteko aprobetxatuaz eta teoria online eginaz EDPUZZLE plataforma bitartez.

(https://classroom.google.com/u/0/w/NDM3NDM5NDg1ODha/t/all?hl=es) 

## Installation

Enter the following command in the terminal and the service will be automatically installed: 

```bash
wget https://raw.githubusercontent.com/Tknika/iom2040-shutdown-controller/master/install.sh -O - | sudo sh
```

## Configuration

Remember to configure ***/boot/config.txt*** file in your SD and ADD this line right after flashing the last Rasbian in your SD. 
 
1. Open your ***/boot/config.txt*** file while reading the SD in any operation system.  :computer: 
2. ADD the following line and SAVE.  :page_facing_up:

     ```enable_uart=1 ```
    
3. This will enable GPIO serial port which is disabled in newer versions of Raspbian Jessie (May 2016 and later).

## Electronics

Place and connect the following circuit on raspberry GPIOs.

![What is this](RaspiProtoboard.png)
![What is this](RaspiScheme.png)
