#include "mp3tf16p.h"

MP3Player mp3(10,11);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  mp3.initialize();
  mp3.playTrackNumber(1,30);

}

void loop() {
  // put your main code here, to run repeatedly:
  mp3.serialPrintStatus(MP3_ALL_MESSAGE);
}
