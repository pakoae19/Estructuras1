#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int menu ();
void captura (int *a, int *b);
int continuar();

int main()
{
    int operacion=0;
    int a,b;
    
    while (operacion != 8)
    {
        fflush(stdin);
        captura (&a,&b);
        operacion=menu ();

        switch(operacion)
        {
            case 1:
                
                printf("\nLa suma de %d mas %d da como resultado: %d\n\n",a,b,a+b);
                break;
            case 2:
                
                printf("\nLa resta de %d menos %d da como resultado: %d\n\n",a,b,a-b);
                break;
            case 3:
                
                printf("\nLa multiplicación de %d por %d da como resultado: %d\n\n",a,b,a*b);
                break;
            case 4:
                
                printf("\nLa división de %d entre %d da como resultado: %d\n\n",a,b,a/b);
                break;
            case 5:
                
                printf("\nEl resultado de %d elevado a %d da como resultado: %.0f\n\n",a,b,pow(a,b));
                break;
                
            case 6:
                
                printf("\nEl módulo de %d entre %d da como resultado: %d\n\n",a,b,a%b);
                break;
            case 7:
                
                printf("\nLa raíz cuadrada de %d da como resultado: %.2f\n",a,sqrt(a));
                printf("La raíz cuadrada de %d da como resultado: %.2f\n\n",b,sqrt(b));
                break;
        }
        operacion=continuar();
    }
    
    return 0;
}

void captura (int *a, int *b)
{
    printf("Ingrese el primer número (entero): ");
    scanf("%d",&*a);
    printf("Ingrese el segundo número (entero): ");
    scanf("%d",&*b);
}

int menu ()
{
    int operacion;
    
    fflush(stdin);
    printf("\n¿Qué operación desea realizar?\n");
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3. Multiplicación\n");
    printf("4. División\n");
    printf("5. Potencia\n");
    printf("6. Modulo\n");
    printf("7. Raíz cuadrada\n");
    printf("Ingrese su opción (1-7): ");
    
    while(operacion < 1 || operacion > 7)
    {
        scanf("%d",&operacion);
        
        if (operacion < 1 || operacion > 7)
        {
            fflush(stdin);
            printf("\nOpción inválida\n");
            printf("Ingrese una opción que sea válida (1-7): ");
        }
    }
    
    return (operacion);
}

int continuar()
{
    int operacion;
    
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
    
    return (operacion);
}
