#include "TutorialBoard.h"

void setup()
{
  TutorialBoard::SetUp();
}

void loop()
{
  TutorialBoard::On(2, 3);
  delay(500);
  TutorialBoard::Off(2, 3);
  delay(500);
  TutorialBoard::AllOn();
  delay(500);
  TutorialBoard::AllOff();
  delay(500);

  for(int i = 0; i < 100; i++)
  {
    TutorialBoard::On(5, 4, i);
    delay(20);
  }
  TutorialBoard::AllOff();
  delay(500);
}