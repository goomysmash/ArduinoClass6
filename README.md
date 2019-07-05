## Class 6: Using analog inputs from a potentiometer
### 1. Attach Serial, set the pinMode for each of the analog pins and set some pins to always HIGH/LOW
- New Code Lines:
  - `Serial.begin(9600);`
  - `pinMode(A3, OUTPUT);`
  - `pinMode(A4, INPUT);`
  - `pinMode(A5, OUTPUT);`
  - `digitalWrite(A3, HIGH);`
  - `digitalWrite(A5, LOW);`
  - `if (analogRead(A4) > 100){Serial.println("high");}`
  - `else{Serial.println("low");}`
- (Upload, watch serial monitor and move potentiometer)

### 2. 
- ``
- ``
- ``
- ``
- ``
- ``
  
  
