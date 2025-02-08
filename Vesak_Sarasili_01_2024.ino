//----------Vesak Sarasili / 5w Bulb / Arduino Code 2024----------//
#define on LOW
#define off HIGH
#define first 8
#define last 11
#define loops 10
int time = 20;
void setup() {
  for (int i = first ; i <= last; i++) {
    pinMode(i, OUTPUT);
  }
}
/*  Created By        Daham Sathmina
    Decoration Time   2024 Vesak Sarasili
*/
void loop() {
  P1(1);
  P2(0);
  P1(1);
  P2(2);
  P1(0);
  P1();
  P2();
  All_blink1(200, 8);
  P1in(3);
  P2in(3);
  P1in(3);
  P2in(3);
  color(4, 150, 6);
  color(5, 150, 6);
  color(6, 150, 6);
  color(7, 150, 6);
  P11(5);
  for (int i = 0; i < 8; i++) {
    P1(0);
    P2(0);
  }
  All_blink1(500, 22, 20);
  All_blink2(80, 21, 20);
  color(4, 150, 3);
  color(6, 150, 3);
  color(5, 150, 3);
  color(7, 150, 3);
}
//////////////  Patterns  /////////////////////
void P1(int count) {
  time  = 200;
  for (int j = 0; j <= count; j++) {
    for (int i = first; i <= last; i++) {
      digitalWrite(i, on);
      delay(time);
      digitalWrite(i, off);
    }
  }
}
void P1() {
  time  = 50;
  for (int j = 0; j <= 40; j++) {
    for (int i = first; i <= last; i++) {
      digitalWrite(i, on);
      delay(time);
      digitalWrite(i, off);
      time += 1;
    }
  }
}
void P11(int count) {
  time  = 200;
  for (int j = 0; j <= count - 1; j++) {
    for (int i = first; i <= last; i++) {
      digitalWrite(i, on);
      digitalWrite(i + 1, on);
      digitalWrite(i - 3, on);
      delay(time * 2);
      digitalWrite(i, off);
      digitalWrite(i + 1, off);
      digitalWrite(i - 3, off);
      // time += 1;
    }
  }
}
void P2() {
  time  = 210;
  for (int j = 0; j <= 35; j++) {
    for (int i = last; i >= first; i--) {
      digitalWrite(i, on);
      delay(time);
      digitalWrite(i, off);
      time -= 1;
    }
  }
}
void P2(int count) {
  time  = 200;
  for (int j = 0; j <= count; j++) {
    for (int i = last; i >= first; i--) {
      digitalWrite(i, on);
      delay(time);
      digitalWrite(i, off);
      time--;
    }
  }
}
void All_blink1(int time, int count) {
  for (int j = 0; j <= count; j++) {
    for (int i = first; i <= last; i++) {
      digitalWrite(i, on);
    }
    delay(time);
    for (int i = first; i <= last; i++) {
      digitalWrite(i, off);
    }
    delay(time);
  }
}
void All_blink1(int time, int count, int inc) {
  for (int j = 0; j <= count; j++) {
    for (int i = first; i <= last; i++) {
      digitalWrite(i, on);
    }
    delay(time);
    for (int i = first; i <= last; i++) {
      digitalWrite(i, off);
    }
    delay(time);
    time -= inc;
  }
}
void All_blink2(int time, int count, int dec) {
  for (int j = 0; j <= count; j++) {
    for (int i = first; i <= last; i++) {
      digitalWrite(i, on);
    }
    delay(time);
    for (int i = first; i <= last; i++) {
      digitalWrite(i, off);
    }
    delay(time);
    time += dec;
  }
}
void color(int pin, int time, int count) {
  for (int j = 0; j <= count; j++) {
    digitalWrite(pin, on);
    delay(time);
    digitalWrite(pin, off);
    delay(time);
  }
}
void P1in(int count) {
  time  = 200;
  for (int j = 0; j <= count; j++) {
    for (int i = first; i <= last; i++) {
      digitalWrite(i, off);
      delay(time);
      digitalWrite(i, on);
    }
  }
}
void P2in(int count) {
  time  = 200;
  for (int j = 0; j <= count; j++) {
    for (int i = last; i >= first; i--) {
      digitalWrite(i, off);
      delay(time);
      digitalWrite(i, on);
    }
  }
}
