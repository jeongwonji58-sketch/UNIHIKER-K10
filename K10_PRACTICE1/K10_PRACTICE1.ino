#include "unihiker_k10.h"

UNIHIKER_K10 k10;

void setup() {
  k10.begin();

  k10.initScreen(2);
  k10.creatCanvas();

  k10.canvas->canvasText("HELLO K10", 1, 0x0000FF);
  k10.canvas->updateCanvas();
}

void loop() {

}