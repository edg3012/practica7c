/*Edgar Eduardo Lorenzo Cuz
ejercicio 4 calculadora con funciones
practica 7*/

#include <stdio.h>
#include <math.h>

int resp;

int suma(int a, int b)
{
  resp = a + b;
  return(resp);
}
int resta(int a, int b)
{
  resp = a - b;
  return (resp);
}
int mult(int a, int b)
{
  resp = a * b;
  return (resp);
}
int div(int a, int b)
{
  resp = a / b;
  return(resp);
}
int exp(int a, int b)
{
  resp = pow(a,b);
  return(resp);
}

int main()
{
  int a = 0, b = 0;
  int respuesta, opcion;

  printf("Dime que operacion deseas realizar: \n");
  printf("1 .- Suma\n");
  printf("2 .- Resta\n");
  printf("3 .- Multiplicacion\n");
  printf("4 .- Division\n");
  printf("5 .- Exponente\n");
  scanf("%d", &option);

  }
  switch(opcion)
  {
    default:
      respuesta = 0;
      break;
    case 1:
      respuesta = suma(a,b);
      break;
    case 2:
      respuesta = resta(a,b);
      break;
    case 3:
      respuesta = mult(a,b);
      break;
    case 4:
      respuesta = div(a,b);
      break;
    case 5:
      respuesta = exp(a,b);
      break;
  }

  printf("El resultado de la operacion es: %d\n", respuesta);
  return 0;
}
int exp(int a, int b)
{
resp = pow(a,b);
return(resp);
}

int main()
{
  int a = 0, b =0;
  int respuestas;

  printf("Dime que operacion deseas realizar: \n");
  printf("1 .- Suma\n");
  printf("2 .- Resta\n");
  printf("3 .- Multiplicacion\n");
  printf("4 .- Division\n");
  printf("5 .- Exponente\n");
  scanf("%d", &option);
  switch(opcion)
  {
    default:
      respuesta = 0;
      break;
    case 1:
      respuesta = suma(a,b);
      break;
    case 2:
      respuesta = resta(a,b);
      break;
    case 3:
      respuesta = mult(a,b);
      break;
    case 4:
      respuesta = div(a,b);
      break;
    case 5:
      respuesta = exp(a,b);
      break;
  }
  printf("El resultado de la operacion es: %d\n", respuesta);
  return 0;
}
