#include "DigiKeyboard.h"

void setup() {
  // don't need to set anything up to use DigiKeyboard
}


void loop() {
  
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("C:\\Users\\jalal\\AppData\\Local\\Discord\\Update.exe --processStart Discord.exe");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(5000);
  DigiKeyboard.sendKeyStroke(KEY_K, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(3000);

  // Insert id of friend 
  DigiKeyboard.print("insertidhere");
  
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  DigiKeyboard.print("SPAM");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}
