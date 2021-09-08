#include <stdio.h>

int main()
{
    int num=10;
    
    do
    {
        printf("Ingresa un número del 0 al 9: ");
        scanf("%d",&num);
        if (num<0 || num>9)
        {
            if (num<0)
            {
                printf("Incorrecto, número menor que 0\n");
            }
            else
            {
                printf("Incorrecto, número mayor que 9\n");
            }
        }
        
    }while (num<0 || num>9);
    
    switch(num)
    {
        case 0:
            printf("Cero\n");
            break;
        case 1:
            printf("Uno\n");
            break;
        case 2:
            printf("Dos\n");
            break;
        case 3:
            printf("Tres\n");
            break;
        case 4:
            printf("Cuatro\n");
            break;
        case 5:
            printf("Cinco\n");
            break;
        case 6:
            printf("Seis\n");
            break;
        case 7:
            printf("Siete\n");
            break;
        case 8:
            printf("Ocho\n");
            break;
        case 9:
            printf("Nueve\n");
            break;
    }
}
