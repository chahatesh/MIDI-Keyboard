
#include "USB.h"
#include "USBHIDKeyboard.h"
#include <Adafruit_NeoPixel.h>

USBHIDKeyboard kb;
Adafruit_NeoPixel led(1, 6, NEO_GRB + NEO_KHZ800);

int keys[] = {1, 2, 3, 4, 5};
int buttons[] = {44, 43, 12};
int sliders[] = {9, 13};

bool keyOld[5] = {}, buttonOld[3] = {};
uint32_t base[5];
int sliderOld[2], encoderOld;

void flash(int r, int g, int b) {
  led.setPixelColor(0, led.Color(r, g, b));
  led.show();
}

void setup() {
  kb.begin();
  USB.begin();

  led.begin();
  led.setBrightness(40);
  flash(0, 0, 40);

  for (int pin : buttons) pinMode(pin, INPUT_PULLUP);
  pinMode(10, INPUT_PULLUP);
  pinMode(11, INPUT_PULLUP);

  delay(1000);

  for (int i = 0; i < 5; i++)
    base[i] = touchRead(keys[i]);

  for (int i = 0; i < 2; i++)
    sliderOld[i] = analogRead(sliders[i]);

  encoderOld = digitalRead(10);
}

void loop() {
  bool active = false;

  // Capacitive keys
  for (int i = 0; i < 5; i++) {
    bool pressed = touchRead(keys[i]) > base[i] * 1.2;

    if (pressed && !keyOld[i]) {
      kb.printf("Touch Key %d\n", i + 1);
      flash(0, 255, 0);
    }

    keyOld[i] = pressed;
    active |= pressed;
  }

  // Buttons
  for (int i = 0; i < 3; i++) {
    bool pressed = !digitalRead(buttons[i]);

    if (pressed && !buttonOld[i]) {
      kb.printf("Button %d\n", i + 1);
      flash(255, 0, 0);
    }

    buttonOld[i] = pressed;
    active |= pressed;
  }

  // Sliders
  for (int i = 0; i < 2; i++) {
    int value = analogRead(sliders[i]);

    if (abs(value - sliderOld[i]) > 200) {
      kb.printf("Slider %d\n", i + 1);
      flash(255, 150, 0);
      sliderOld[i] = value;
    }
  }
  int a = digitalRead(10);

  if (a != encoderOld && a == LOW) {
    kb.println(digitalRead(11) ? "E Right" : "E Left");
    flash(150, 0, 255);
  }

  encoderOld = a;

  if (!active) {
    delay(100);
    flash(0, 0, 40);
  }

  delay(20);
}
