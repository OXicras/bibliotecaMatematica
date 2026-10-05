#include <Arduino.h>
#include "func.h"

void setup() 
{
  Serial.begin(9600);
  
  Serial.println();
  Serial.println(calcularDobro(2.5));
  Serial.println(ehPar(5)? "O número é ímpar" : "O número é par");
  Serial.println(ehPar(6)? "O número é ímpar" : "O número é par");

  for (int i = 1; i <= 4; i++)
  {
    Serial.println(calculadoraMagica(4, 2, i));
  }

  Serial.println(calcularFatorial(3));
}

void loop() 
{
  
}