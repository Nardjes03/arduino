/*
 * Improvements compared to the basic exercise:
 *   1. Serial input: the message is typed in the Serial Monitor (9600 baud)
 *      instead of being fixed in the code. Lowercase letters are accepted.
 *   2. Light + sound: each dot and dash turns on the LED and plays the buzzer
 *      at the same time, so the message can be both seen and heard.
 */

const int LED_PIN = 8;
const int BUZZER_PIN = 12;
const unsigned int TONE_FREQUENCY = 440;   
const unsigned long UNIT_DURATION = 250;   

void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    String message = Serial.readString();
    message.toUpperCase();
    playMessage(message);
  }
}

void playMessage(String message) {
  for (int index = 0; index < message.length(); index++) {
    switch (message[index]) {
      case 'A': letterA(); break;
      case 'B': letterB(); break;
      case 'C': letterC(); break;
      case 'D': letterD(); break;
      case 'E': letterE(); break;
      case 'F': letterF(); break;
      case 'G': letterG(); break;
      case 'H': letterH(); break;
      case 'I': letterI(); break;
      case 'J': letterJ(); break;
      case 'K': letterK(); break;
      case 'L': letterL(); break;
      case 'M': letterM(); break;
      case 'N': letterN(); break;
      case 'O': letterO(); break;
      case 'P': letterP(); break;
      case 'Q': letterQ(); break;
      case 'R': letterR(); break;
      case 'S': letterS(); break;
      case 'T': letterT(); break;
      case 'U': letterU(); break;
      case 'V': letterV(); break;
      case 'W': letterW(); break;
      case 'X': letterX(); break;
      case 'Y': letterY(); break;
      case 'Z': letterZ(); break;
      case ' ': delay(UNIT_DURATION * 7); continue;   
    }
    if (index + 1 < message.length() && message[index + 1] != ' ') {
      delay(UNIT_DURATION * 3);
    }
  }
}


void letterA() {   
  dot();
  delay(UNIT_DURATION);
  dash();
}

void letterB() {   
  dash();
  delay(UNIT_DURATION);
  dot();
  delay(UNIT_DURATION);
  dot();
  delay(UNIT_DURATION);
  dot();
}

void letterC() {   
  dash();
  delay(UNIT_DURATION);
  dot();
  delay(UNIT_DURATION);
  dash();
  delay(UNIT_DURATION);
  dot();
}

void letterD() {   
  dash();
  delay(UNIT_DURATION);
  dot();
  delay(UNIT_DURATION);
  dot();
}

void letterE() {   
  dot();
}

void letterF() {   
  dot();
  delay(UNIT_DURATION);
  dot();
  delay(UNIT_DURATION);
  dash();
  delay(UNIT_DURATION);
  dot();
}

void letterG() {   
  dash();
  delay(UNIT_DURATION);
  dash();
  delay(UNIT_DURATION);
  dot();
}

void letterH() {   
  dot();
  delay(UNIT_DURATION);
  dot();
  delay(UNIT_DURATION);
  dot();
  delay(UNIT_DURATION);
  dot();
}

void letterI() {   
  dot();
  delay(UNIT_DURATION);
  dot();
}

void letterJ() {   
  dot();
  delay(UNIT_DURATION);
  dash();
  delay(UNIT_DURATION);
  dash();
  delay(UNIT_DURATION);
  dash();
}

void letterK() {   
  dash();
  delay(UNIT_DURATION);
  dot();
  delay(UNIT_DURATION);
  dash();
}

void letterL() {   
  dot();
  delay(UNIT_DURATION);
  dash();
  delay(UNIT_DURATION);
  dot();
  delay(UNIT_DURATION);
  dot();
}

void letterM() {   
  dash();
  delay(UNIT_DURATION);
  dash();
}

void letterN() {   
  dash();
  delay(UNIT_DURATION);
  dot();
}

void letterO() {   
  dash();
  delay(UNIT_DURATION);
  dash();
  delay(UNIT_DURATION);
  dash();
}

void letterP() {   
  dot();
  delay(UNIT_DURATION);
  dash();
  delay(UNIT_DURATION);
  dash();
  delay(UNIT_DURATION);
  dot();
}

void letterQ() {  
  dash();
  delay(UNIT_DURATION);
  dash();
  delay(UNIT_DURATION);
  dot();
  delay(UNIT_DURATION);
  dash();
}

void letterR() {   
  dot();
  delay(UNIT_DURATION);
  dash();
  delay(UNIT_DURATION);
  dot();
}

void letterS() {   
  dot();
  delay(UNIT_DURATION);
  dot();
  delay(UNIT_DURATION);
  dot();
}

void letterT() {   
  dash();
}

void letterU() {   
  dot();
  delay(UNIT_DURATION);
  dot();
  delay(UNIT_DURATION);
  dash();
}

void letterV() {  
  dot();
  delay(UNIT_DURATION);
  dot();
  delay(UNIT_DURATION);
  dot();
  delay(UNIT_DURATION);
  dash();
}

void letterW() {  
  dot();
  delay(UNIT_DURATION);
  dash();
  delay(UNIT_DURATION);
  dash();
}

void letterX() {  
  dash();
  delay(UNIT_DURATION);
  dot();
  delay(UNIT_DURATION);
  dot();
  delay(UNIT_DURATION);
  dash();
}

void letterY() {   
  dash();
  delay(UNIT_DURATION);
  dot();
  delay(UNIT_DURATION);
  dash();
  delay(UNIT_DURATION);
  dash();
}

void letterZ() {   
  dash();
  delay(UNIT_DURATION);
  dash();
  delay(UNIT_DURATION);
  dot();
  delay(UNIT_DURATION);
  dot();
}


void dash() {
  tone(BUZZER_PIN, TONE_FREQUENCY, UNIT_DURATION * 3);
  digitalWrite(LED_PIN, HIGH);
  delay(UNIT_DURATION * 3);
  digitalWrite(LED_PIN, LOW);
}

void dot() {
  tone(BUZZER_PIN, TONE_FREQUENCY, UNIT_DURATION);
  digitalWrite(LED_PIN, HIGH);
  delay(UNIT_DURATION);
  digitalWrite(LED_PIN, LOW);
}
