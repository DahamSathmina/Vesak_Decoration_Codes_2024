//----------Vesak Sarasili / 5w Bulb / Arduino Code 2024----------//

#define on LOW           // Define "on" as LOW, likely for controlling active-low devices
#define off HIGH        // Define "off" as HIGH, likely for controlling active-low devices
#define first 8              // First pin for controlling the lights
#define last 11              // Last pin for controlling the lights
#define loops 10             // Number of loops for certain patterns

int time = 20;               // Base delay time in milliseconds

void setup() {
  // Initialize pins from "first" to "last" as OUTPUT
  for (int i = first; i <= last; i++) {
    pinMode(i, OUTPUT);     // Set each pin mode to OUTPUT
  }
}

/*  Created By        Daham Sathmina
    Decoration Time   2024 Vesak Sarasili
*/

void loop() {
  P1(1);                   // Execute pattern P1 with one repetition
  P2(0);                   // Execute pattern P2 with no delay changes
  P1(1);                   // Repeat P1 with one repetition
  P2(2);                   // Execute P2 with two repetitions
  P1(0);                   // Execute P1 without repetitions
  P1();                    // Execute P1 with a default pattern
  P2();                    // Execute P2 with a default pattern
  All_blink1(200, 8);      // Blink all LEDs with a delay of 200ms, repeated 8 times
  P1in(3);                 // Execute inward pattern P1 three times
  P2in(3);                 // Execute inward pattern P2 three times
  P1in(3);                 // Repeat inward pattern P1
  P2in(3);                 // Repeat inward pattern P2
  color(4, 150, 6);        // Blink LED on pin 4, 150ms delay, 6 repetitions
  color(5, 150, 6);        // Blink LED on pin 5, 150ms delay, 6 repetitions
  color(6, 150, 6);        // Blink LED on pin 6, 150ms delay, 6 repetitions
  color(7, 150, 6);        // Blink LED on pin 7, 150ms delay, 6 repetitions
  P11(5);                  // Execute pattern P11 with 5 repetitions
  for (int i = 0; i < 8; i++) {
    P1(0);                 // Execute P1 without repetitions
    P2(0);                 // Execute P2 without repetitions
  }
  All_blink1(500, 22, 20); // Blink all LEDs with 500ms delay, 22 times, decreasing delay by 20ms
  All_blink2(80, 21, 20);  // Blink all LEDs with 80ms delay, 21 times, increasing delay by 20ms
  color(4, 150, 3);        // Blink LED on pin 4, 150ms delay, 3 repetitions
  color(6, 150, 3);        // Blink LED on pin 6, 150ms delay, 3 repetitions
  color(5, 150, 3);        // Blink LED on pin 5, 150ms delay, 3 repetitions
  color(7, 150, 3);        // Blink LED on pin 7, 150ms delay, 3 repetitions
}

//////////////  Patterns  /////////////////////

void P1(int count) {
  time = 200;              // Set delay to 200ms
  for (int j = 0; j <= count; j++) {
    for (int i = first; i <= last; i++) {
      digitalWrite(i, on); // Turn LED on
      delay(time);         // Wait for specified time
      digitalWrite(i, off);// Turn LED off
    }
  }
}

void P1() {
  time = 50;               // Set initial delay to 50ms
  for (int j = 0; j <= 40; j++) {
    for (int i = first; i <= last; i++) {
      digitalWrite(i, on); // Turn LED on
      delay(time);         // Wait for specified time
      digitalWrite(i, off);// Turn LED off
      time += 1;           // Increase delay by 1ms
    }
  }
}

void P11(int count) {
  time = 200;              // Set delay to 200ms
  for (int j = 0; j <= count - 1; j++) {
    for (int i = first; i <= last; i++) {
      digitalWrite(i, on);       // Turn current LED on
      digitalWrite(i + 1, on);   // Turn next LED on
      digitalWrite(i - 3, on);   // Turn previous LED (3 steps back) on
      delay(time * 2);           // Wait for double the delay time
      digitalWrite(i, off);      // Turn current LED off
      digitalWrite(i + 1, off);  // Turn next LED off
      digitalWrite(i - 3, off);  // Turn previous LED off
      // time += 1;
    }
  }
}

void P2() {
  time = 210;              // Set initial delay to 210ms
  for (int j = 0; j <= 35; j++) {
    for (int i = last; i >= first; i--) {
      digitalWrite(i, on); // Turn LED on
      delay(time);         // Wait for specified time
      digitalWrite(i, off);// Turn LED off
      time -= 1;           // Decrease delay by 1ms
    }
  }
}

void P2(int count) {
  time = 200;              // Set delay to 200ms
  for (int j = 0; j <= count; j++) {
    for (int i = last; i >= first; i--) {
      digitalWrite(i, on); // Turn LED on
      delay(time);         // Wait for specified time
      digitalWrite(i, off);// Turn LED off
      time--;              // Decrease delay by 1ms
    }
  }
}

void All_blink1(int time, int count) {
  for (int j = 0; j <= count; j++) {
    for (int i = first; i <= last; i++) {
      digitalWrite(i, on); // Turn all LEDs on
    }
    delay(time);           // Wait for specified time
    for (int i = first; i <= last; i++) {
      digitalWrite(i, off);// Turn all LEDs off
    }
    delay(time);           // Wait for specified time
  }
}

void All_blink1(int time, int count, int inc) {
  for (int j = 0; j <= count; j++) {
    for (int i = first; i <= last; i++) {
      digitalWrite(i, on); // Turn all LEDs on
    }
    delay(time);           // Wait for specified time
    for (int i = first; i <= last; i++) {
      digitalWrite(i, off);// Turn all LEDs off
    }
    delay(time);           // Wait for specified time
    time -= inc;           // Decrease delay by "inc" ms
  }
}

void All_blink2(int time, int count, int dec) {
  for (int j = 0; j <= count; j++) {
    for (int i = first; i <= last; i++) {
      digitalWrite(i, on); // Turn all LEDs on
    }
    delay(time);           // Wait for specified time
    for (int i = first; i <= last; i++) {
      digitalWrite(i, off);// Turn all LEDs off
    }
    delay(time);           // Wait for specified time
    time += dec;           // Increase delay by "dec" ms
  }
}

void color(int pin, int time, int count) {
  for (int j = 0; j <= count; j++) {
    digitalWrite(pin, on); // Turn LED on
    delay(time);           // Wait for specified time
    digitalWrite(pin, off);// Turn LED off
    delay(time);           // Wait for specified time
  }
}

void P1in(int count) {
  time = 200;              // Set delay to 200ms
  for (int j = 0; j <= count; j++) {
    for (int i = first; i <= last; i++) {
      digitalWrite(i, off);// Turn LED off
      delay(time);         // Wait for specified time
      digitalWrite(i, on); // Turn LED on
    }
  }
}

void P2in(int count) {
  time = 200;              // Set delay to 200ms
  for (int j = 0; j <= count; j++) {
    for (int i = last; i >= first; i--) {
      digitalWrite(i, off);// Turn LED off
      delay(time);         // Wait for specified time
      digitalWrite(i, on); // Turn LED on
    }
  }
}
