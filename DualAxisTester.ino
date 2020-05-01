*/
ECEN307Lab
Daniel Andrews

Directions defined with output pins toward you.
Left is 0, Down is 0
Center is 515x, 514Y
Call X <500 Left, Call X>550 Right
Call Y<500 Down, Call Y>550 Up

*/
#define SW 4

void setup() {
  Serial.begin(9600);
  pinMode(SW,INPUT);
  digitalWrite(SW,HIGH);
}

void loop() {
  Serial.print("VRX_value=");
  int X_value=analogRead(A3);
  Serial.print(X_value);
  Serial.print("\t");

  Serial.print("VRY_value=");
  int Y_value=analogRead(A4);
  Serial.print(Y_value);
  Serial.print("\t");

  Serial.print("Switch_value=");
  int switch_value=digitalRead(SW);
  Serial.print(switch_value);
  Serial.println("\t");

  delay(1000);  //Change this delay when it actually matters to something reasonable
  
}
