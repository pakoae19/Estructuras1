#include <stdio.h>

void resta(int op1, int op2, int *res);
int main ()
{
    int operando1=15;
    int operando2=6;
    int resultado;

    /*printf("Operando1: ");
    scanf("%d", &operando1);
    printf("Operando2: ");
    scanf("%d", &operando2);*/

    resultado = suma(operando1, operando2);

    printf("El resultado de la suma es: %d\n", resultado);

    resta(operando1, operando2,&resultado);

    printf("El resultado de la resta es %d\n", resultado);

    return 0;
}

int suma(int op1, int op2)
{
    return op1 + op2;
}

void resta(int op1, int op2, int *res)
{
    res = op1 - op2;
}