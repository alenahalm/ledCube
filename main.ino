#define pin_1 5
#define pin_2 6
#define pin_3 3
#define pin_4 9
#define pin_5 10
#define pin_6 11

const int delay_ms = 2500;

uint8_t led_clear[6] = {1, 1, 0, 0, 0, 0};

uint8_t led_1[6] = {0, 1, 1, 0, 0, 0};
uint8_t led_6[6] = {1, 0, 0, 0, 1, 0};

void turnOnLedMatrix(uint8_t val[6], bool with_delay = true) {
  digitalWrite(pin_1, val[0]);
  digitalWrite(pin_2, val[1]);
  digitalWrite(pin_3, val[2]);
  digitalWrite(pin_4, val[3]);
  digitalWrite(pin_5, val[4]);
  digitalWrite(pin_6, val[5]);
  if (with_delay) {
    delay(delay_ms);    
  }
}

void turnOnLedMatrixAdv(uint8_t val_1[6], uint8_t val_2[6]) {
  turnOnLedMatrix(val_1, false);
  delay(5);
  turnOnLedMatrix(led_clear, false);
  // delay(5);
  turnOnLedMatrix(val_2, false);
  delay(5);
  turnOnLedMatrix(led_clear, false);
}

void setup() {
  Serial.begin(9600);
  pinMode(pin_1, OUTPUT);
  pinMode(pin_2, OUTPUT);
  pinMode(pin_3, OUTPUT);
  pinMode(pin_4, OUTPUT);
  pinMode(pin_5, OUTPUT);
  pinMode(pin_6, OUTPUT);
}

void loop() {
  // // 1
  // turnOnLedMatrix(new uint8_t[6]{0, 1, 1, 0, 0, 0});

  // // 2
  // turnOnLedMatrix(new uint8_t[6]{1, 0, 1, 0, 0, 0});

  // // 3
  // turnOnLedMatrix(new uint8_t[6]{0, 1, 0, 1, 0, 0});

  // // 4
  // turnOnLedMatrix(new uint8_t[6]{1, 0, 0, 1, 0, 0});

  // // 5
  // turnOnLedMatrix(new uint8_t[6]{0, 1, 0, 0, 1, 0});

  // // 6
  // turnOnLedMatrix(new uint8_t[6]{1, 0, 0, 0, 1, 0});

  // // 7
  // turnOnLedMatrix(new uint8_t[6]{0, 1, 0, 0, 0, 1});

  // // 8
  // turnOnLedMatrix(new uint8_t[6]{1, 0, 0, 0, 0, 1});

  // // 1, 2
  // turnOnLedMatrix(new uint8_t[6]{0, 0, 1, 0, 0, 0});

  // // 1, 3
  // turnOnLedMatrix(new uint8_t[6]{0, 1, 1, 1, 0, 0});

  // // 1, 4
  // turnOnLedMatrixAdv(new uint8_t[6]{0, 1, 1, 0, 0, 0}, new uint8_t[6]{1, 0, 0, 1, 0, 0});

  // // 1, 5
  // turnOnLedMatrix(new uint8_t[6]{0, 1, 1, 0, 1, 0});

  // 1, 6
  turnOnLedMatrixAdv(led_1, led_6);

  // // 1, 7
  // turnOnLedMatrix(new uint8_t[6]{0, 1, 1, 0, 0, 1});

  // // 1, 8
  // turnOnLedMatrixAdv(new uint8_t[6]{0, 1, 1, 0, 0, 0}, new uint8_t[6]{1, 0, 0, 0, 0, 1});

  // // 1, 2, 4, 6, 8
  // turnOnLedMatrixAdv(new uint8_t[6]{0, 1, 1, 0, 0, 0}, new uint8_t[6]{1, 0, 1, 1, 1, 1});

  // // 5, 6
  // turnOnLedMatrix(new uint8_t[6]{0, 0, 0, 0, 1, 0});

  // // 7, 8
  // turnOnLedMatrix(new uint8_t[6]{0, 0, 0, 0, 0, 1});
}
