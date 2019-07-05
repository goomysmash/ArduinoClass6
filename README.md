## Class 6: Using analog inputs from a potentiometer
### 1. Attach Serial, set the pinMode for each of the analog pins and set some pins to always HIGH/LOW
- New code lines:
  - `Serial.begin(9600);`
  - `pinMode(A3, OUTPUT);`
  - `pinMode(A4, OUTPUT);`
  - `pinMode(A5, INPUT);`
  - `digitalWrite(A3, HIGH);`
  - `digitalWrite(A4, LOW);`
  - `Serial.println(analogRead(A5));`
- (Upload, watch serial monitor and move potentiometer)
- Slide the potentiometer all the way to each side and write down the min and max values (20 and 1010 in my case)
### 2. Use the map function to change the input range
- Comment out the previous print statement
- New code lines:
- `int mapPotentiometer = 0;`
- `mapPotentiometer = map(analogRead(A5), 20, 1010, 0, 7);`
- `Serial.println(mapPotentiometer);`
- (Upload, watch serial monitor and move potentiometer)
- Notice how the serial monitor prints out a number between 0 and 7
### 3. What happens if our range changes?
- Sometimes potentiometers can shift over time
- If we change our range from 20-1010 to 100-800 what will happen with the map function if it goes outside it?
- Line to change:
  - `mapPotentiometer = map(analogRead(A5), 20, 1010, 0, 7);`
- To:
  - `mapPotentiometer = map(analogRead(A5), 100, 800, 0, 7);`
- (Upload, watch serial monitor and move potentiometer)
- Notice how below 0 it stays 0, but above 7 it gets converted to 8 and 9.
- We should find a way to constrain this cause we want just values from 0-7
### 4. Constrain function and create variable for analogRead(A5)
- New code lines:
- `int potInput = 0;`
- `potInput = constrain(potInput, 100, 800);`
- Modified line:
  - `mapPotentiometer = map(analogRead(A5), 100, 800, 0, 7);`
- To:
  - `mapPotentiometer = map(potInput, 100, 800, 0, 7);`
- (Upload, watch serial monitor and move potentiometer)
- Notice how it only goes from 0 to 7 now, with a little leeway inbetween
  
