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
- Slide the potentiometer all the way to each side and write down the min and max values (35 and 850 in my case)
### 2. Use an if statement to use the analog input as a digital input
- Comment out the previous serial print line
- New Code lines:
  - `if (analogRead(A4)>100){Serial.println("Above 100");}`
  - `else{Serial.println("Below 100");}`
- (Upload, watch serial monitor and move potentiometer)
### 3. Use the map function to change the input range
- Comment out the previous print statements and uncomment the first print statement
- Slide the potentiometer all the way to each side and write down the min and max values (35 and 850 in my case)
- After you've written down the values, comment out the previous serial print line
- New code lines:
- `int mapPotentiometer = 0;`
- `mapPotentiometer = map(analogRead(A4), 35, 850, 0, 7);`
- `Serial.println(mapPotentiometer);`
- (Upload, watch serial monitor and move potentiometer)
- Notice how still the analog signal is nonlinear. It's 0 for most of the time then changes really fast near the end
### 4.
- ``


  
