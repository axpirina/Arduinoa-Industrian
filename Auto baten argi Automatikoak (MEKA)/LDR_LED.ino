/*
  Praktika honetan LDR (Light dependant resistor) baten bitartez argiaren aldaketa
  tentsio elektriko aldakor batean bihurtu eta Arduino baten bitartez neurtuko dugu.
  Ondoren argi asko baldin badago 2 lanpara LED itzaliko ditugu eta argi gutxi baldin
  badago berriz piztu beti ere proportzioak mantenduaz.
  by Axpi 2020
  Creatives Commons
*/

int argiValue = 0; // Aldagaien deklarazioa
int E1 = 10; // 1 Argiaren intentsitatea. PWM 0-100
int E2 = 11; // 2 Argiaren intentsitatea. PWM 0-100
int M1 = 12; // 1 Argiaren polaritatea. HIGH Forward LOW Reverse
int M2 = 13; // 2 Argiaren polaritatea. HIGH Forward LOW Reverse

void setup() {

  // Serie komunikazioa martxan jarri
  Serial.begin(9600);
}

void loop() {

  argiValue = analogRead(A0);           // 0 pin analogikoa irakurri eta aldagaiean gorde
  //argiValue = map (argiValue, ARGI MINIMOA,ARGI MAXIMOA,0,255);   // Sentsorea kalibratzeko ondorengoak bistaratu
  //argiValue = constrain(argiValue,0,255);
  Serial.print("Gelako argiaren balioa 1-255 artean: ");    // Irakurririko balioa inprimatu
  Serial.println(argiValue);

  if (argiValue > 200  && argiValue < 255) {
    Serial.println("ARGIAK ITZALITA"); Serial.println("");
    digitalWrite(M1, HIGH);
    analogWrite(E1, 0);
    digitalWrite(M2, HIGH);
    analogWrite(E2, 0);
  }
  else if (argiValue > 150  && argiValue < 200) {
    Serial.println("ARGI MOTZAK"); Serial.println("");
    digitalWrite(M1, HIGH);
    analogWrite(E1, 20);
    digitalWrite(M2, HIGH);
    analogWrite(E2, 20);
  }
  else if (argiValue > 0  && argiValue < 150) {
    Serial.println("ARGI LUZEAK"); Serial.println("");
    digitalWrite(M1, HIGH);
    analogWrite(E1, 100);
    digitalWrite(M2, HIGH);
    analogWrite(E2, 100);
  }
  delay(0);
}
