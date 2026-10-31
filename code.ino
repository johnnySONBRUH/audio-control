#include <HID-Project.h>
const int button2 = 16;
const int button3 = 3;
const int button4 = 5;
const int button5 = 10;
bool lastState2 = HIGH;
bool lastState3 = HIGH;
bool lastState4 = HIGH; 
bool lastState5 = HIGH;
void setup() {
  pinMode(button2, INPUT_PULLUP);
  pinMode(button3, INPUT_PULLUP);
  pinMode(button4, INPUT_PULLUP);
  pinMode(button5, INPUT_PULLUP);
  Consumer.begin();
  Keyboard.begin();
}
void loop() {
  bool currentState2 = digitalRead(button2);
  if (currentState2 == LOW && lastState2 == HIGH) {
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press('`');
    delay(50);
    Keyboard.releaseAll();
    delay(200);
  }
  lastState2 = currentState2;
  bool currentState3 = digitalRead(button3);
  if (currentState3 == LOW && lastState3 == HIGH) {
    Consumer.write(MEDIA_VOL_MUTE); 
    delay(200);
  }
  lastState3 = currentState3;
  bool currentState4 = digitalRead(button4);
  if (currentState4 == LOW && lastState4 == HIGH) {
    Keyboard.press(KEY_LEFT_GUI); 
    Keyboard.press('d');
    delay(50);
    Keyboard.releaseAll();
    delay(200);
  }
  lastState4 = currentState4;
  bool currentState5 = digitalRead(button5);
  if (currentState5 == LOW && lastState5 == HIGH) {
    Keyboard.println("git add .");
    delay(100);
    Keyboard.println("git commit -m 'TEMPORARY COMMIT'");
    delay(100);
    Keyboard.print("git push"); 
    delay(200); 
  }
  lastState5 = currentState5;
}