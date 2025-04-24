#include <Stepper.h>
int nombreDePas = 48*64;
Stepper monMoteur (nombreDePas,9,11,10,6);
void setup()
{
  monMoteur.setSpeed(9);
}

void loop()
{
  monMoteur.step(100);

  monMoteur.step(-300);
}
