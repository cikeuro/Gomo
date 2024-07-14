#include <Gomo.h>

Gomo Gomo(27, 14, 12, 25, 33, 32, 26);

void setup()
{
  // put your setup code here, to run once:
  Gomo.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  Gomo.Depan();
  delay(1000);
  Gomo.Belakang();
  delay(1000);
}
