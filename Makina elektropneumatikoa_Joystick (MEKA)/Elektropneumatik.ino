/*              KONTROL  MONOEGONKORRA
 
Praktika honetan joysticak-aren sakatzaileak erabiliaz 4 errele kontrolatuko ditugu era monoegonkorrean.
Modu monoegonkorrean sakatzailea sakatzean soilik piztuko da errelea. Errele hauekin edozein elektrobalbula
kontrola dezakegu.


By Axpi 2020
   CC. Creatives Commons.
*/

// Aldagaien deklarazioa      

int botoiaA= 2;
int botoiaB= 3;
int botoiaC= 4;
int botoiaD= 5;

int relay01= 9;
int relay02= 10;
int relay03= 11;
int relay04= 12;

int balioaA = 0;
int balioaB = 0;
int balioaC = 0;
int balioaD = 0;

// Sarrera-Irteeren Inizializazioa

void setup() 
  {
 Serial.begin (9600);
 pinMode (botoiaA, INPUT);
 pinMode (botoiaB, INPUT);
 pinMode (botoiaC, INPUT);
 pinMode (botoiaD, INPUT);
 
 pinMode (relay01, OUTPUT);
 pinMode (relay02, OUTPUT);
 pinMode (relay03, OUTPUT);
 pinMode (relay04, OUTPUT);
 
 digitalWrite(relay01,HIGH); //Errelea itzali
 digitalWrite(relay02,HIGH); //Errelea itzali
 digitalWrite(relay03,HIGH); //Errelea itzali
 digitalWrite(relay04,HIGH); //Errelea itzali
  }

// Programa nagusia

void loop() 
  {
 balioaA = digitalRead(botoiaA); //Pultsadorea irakurri
 balioaB = digitalRead(botoiaB); //Pultsadorea irakurri
 balioaC = digitalRead(botoiaC); //Pultsadorea irakurri
 balioaD = digitalRead(botoiaD); //Pultsadorea irakurri
 
 
 digitalWrite(relay01,balioaA); //Errelea kontrolatu
 digitalWrite(relay02,balioaB); //Errelea kontrolatu
 digitalWrite(relay03,balioaC); //Errelea kontrolatu
 digitalWrite(relay04,balioaD); //Errelea kontrolatu
 
 Serial.print ("Pultsagailuaren balioaA=  ");
 Serial.println (balioaA);
  Serial.print ("Pultsagailuaren balioaB=  ");
 Serial.println (balioaB);
  Serial.print ("Pultsagailuaren balioaC=  ");
 Serial.println (balioaC);
  Serial.print ("Pultsagailuaren balioaD=  ");
 Serial.println (balioaD);
 
 delay (150); 
}
