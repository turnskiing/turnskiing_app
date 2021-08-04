
int fsrPin0 = 1;     //FRONT SENSOR
int fsrPin1 = 2;     //BACK SENSOR
//int fsrPin2 = 3;
int fsrVoltage0;     
int fsrVoltage1;
//int fsrVoltage2;
int fsrReading0;
int fsrReading1;
//int fsrReading2;
int pressure0;
int pressure1;
//int pressure2;

void setup(void) {
  Serial.begin(9600);  
}
 
void loop(void) {
  fsrReading0 = analogRead(fsrPin0);  
  Serial.print("Analog Read = ");
  Serial.println(fsrReading0);
/*  fsrVoltage0 = map(fsrReading0, 0, 1023, 0, 5000);
  pressure0 = (725,04*log(pressure0) - 2345,9)/1000;
  Serial.print("Voltage1 in mV= ");
  Serial.println(fsrVoltage0);
  Serial.print("Pressure applied in Kg= ");
   Serial.println(pressure0);
*/

  fsrReading1 = analogRead(fsrPin1);  
  Serial.print("Analog Read = ");
  Serial.println(fsrReading1);
 


  Serial.println("--------------------");
  delay(1000);
}
