#include "func.h"

float calcularDobro(float valorDobro)
{
    float dobro = valorDobro * 2;
    return dobro;
}

bool ehPar(int valorPar)
{
    bool par = valorPar % 2;
    return par;
}

float calculadoraMagica(float valor1, float valor2, int operacao)
{
    switch(operacao)
    {
      case 1:
        return valor1 + valor2;
      case 2:
        return valor1 - valor2;
      case 3:
        return valor1 * valor2;
      default:
        return 0;
    }
}