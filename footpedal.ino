/*
  https://www.arduino.cc/en/Tutorial/BuiltInExamples/KeyboardSerial
*/

#include <Keyboard.h>

void setup() {
  pinMode(3, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  // initialize control over the keyboard:
  Keyboard.begin();
}

void loop() {
  if (digitalRead(3) == LOW) {
    Keyboard.press(KEY_END); // Usable keys: KEY_LEFT_CTRL KEY_LEFT_SHIFT 'm' KEY_END
  } else {
    Keyboard.release(KEY_END);
  }
  if (digitalRead(5) == LOW) {
    Keyboard.press('w');
  } else {
    Keyboard.release('w');
  }
  
}
