#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int menu ();
void captura (float *a, float *b);
char continuar();

int main()
{
    char operacion=0;
    float a,b;
    
    while (operacion != 8)
    {
        fflush(stdin);
        captura (&a,&b);
        operacion=menu ();

        switch(operacion)
        {
            case '+':
                
                printf("\nLa suma de %.2f mas %.2f da como resultado: %.2f\n\n",a,b,a+b);
                break;
            case '-':
                
                printf("\nLa resta de %.2f menos %.2f da como resultado: %.2f\n\n",a,b,a-b);
                break;
            case '*':
                
                printf("\nLa multiplicación de %.2f por %.2f da como resultado: %.2f\n\n",a,b,a*b);
                break;
            case '/':
                
                printf("\nLa división de %.2f entre %.2f da como resultado: %.2f\n\n",a,b,a/b);
                break;
            case '^':
                
                printf("\nEl resultado de %.2f elevado a %.2f da como resultado: %.2f\n\n",a,b,pow(a,b));
                break;
                
            case '%':
                
                printf("\nEl módulo de %.2f entre %.2f da como resultado: %.2f\n\n",a,b,fmod(a,b));
                break;
            case 'R':
                
                printf("\nLa raíz cuadrada de %.2f da como resultado: %.2f\n",a,sqrt(a));
                printf("La raíz cuadrada de %.2f da como resultado: %.2f\n\n",b,sqrt(b));
                break;
        }
        operacion=continuar();
    }
    
    return 0;
}
void captura (float *a, float *b)
{
    printf("Ingrese el primer número: ");
    scanf("%f",&*a);
    printf("Ingrese el segundo número: ");
    scanf("%f",&*b);
}

int menu ()
{
    char operacion=0;
    
    fflush(stdin);
    printf("\n¿Qué operación desea realizar?\n");
    printf("+. Suma\n");
    printf("-. Resta\n");
    printf("*. Multiplicación\n");
    printf("/. División\n");
    printf("^. Potencia\n");
    printf("%c. Modulo\n",'%');
    printf("R. Raíz cuadrada\n");
    printf("Ingrese su opción (+,-,*,...,R): ");
    while(operacion != '+' && operacion != '-' && operacion != '*' && operacion != '/' && operacion != '^' && operacion != '%' && operacion != 'R' && operacion != 'r')
    {
        scanf("%c",&operacion);
        
        if (operacion != '+' && operacion != '-' && operacion != '*' && operacion != '/' && operacion != '^' && operacion != '%' && operacion != 'R' && operacion != 'r')
        {
            fflush(stdin);
            printf("\nOpción inválida\n");
            printf("Ingrese una opción que sea válida (1-7)\n");
        }
    }
    
    return (operacion);
}

char continuar()
{
    int operacion;
    char op;
    
    fflush(stdin);
    while (operacion != 1 && operacion != 2)
    {
        printf("¿Desea realizar otra operación?\n");
        printf("1. Continuar\n");
        printf("2. Salir\n");
        printf("Ingrese su opción (1 ó 2): ");
        fflush(stdin);
        scanf("%d",&operacion);
        if (operacion != 1 && operacion != 2)
        {
            printf("\nOpción inválida\n\n");
            printf("Ingrese una opción que sea válida (1 ó 2)\n");
        }
        else if (operacion == 2)
        {
            exit(-1);
        }
    }
    printf("\n");
    op=operacion;
    
    return (op);
}
