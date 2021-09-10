//
//  main.c
//  Ciclos
//
//  Created by Francisco Javier Andrade Espinosa on 10/09/21.
//

#include <stdio.h>

int capturaX();
int capturaY();
void intercambia(int *x,int *y);
void imprime(int x, int y);
void cicloFor(int x, int y);
void cicloWhile(int x, int y);
void cicloDoWhile(int x, int y);

int main()
{
    int x,y;
    
    x=capturaX();
    y=capturaY();
    if (x>y)
    {
        intercambia(&x,&y);
    }
    cicloFor(x,y);
    cicloWhile(x,y);
    cicloDoWhile(x,y);
}

int capturaX()
{
    int x;
    
    printf("Ingrese el primer número: ");
    scanf("%d",&x);
    
    return x;
}

int capturaY()
{
    int y;
    
    printf("Ingrese el segundo número: ");
    scanf("%d",&y);
    
    return y;
}

void intercambia(int *x,int *y)
{
    int aux;
    
    aux=*x;
    *x=*y;
    *y=aux;
}

void cicloFor(int x, int y)
{
    int i;
    
    printf("\n(For:)\n");
    printf("Los números intermedios entre %d y %d son:\n",x,y);
    for (i = x+1;i < y; i++)
    {
        printf("%d, ",i);
    }
    printf ("\n\n");
}

void cicloWhile(int x, int y)
{
    int i=x+1;
    
    printf("(While:)\n");
    printf("Los números intermedios entre %d y %d son:\n",x,y);
    while (i < y)
    {
        printf("%d, ",i);
        i++;
    }
    printf ("\n\n");
}

void cicloDoWhile(int x, int y)
{
    int i=x+1;
    
    printf("(Do While:)\n");
    printf("Los números intermedios entre %d y %d son:\n",x,y);
    do
    {
        printf("%d, ",i);
        i++;
    }while (i < y);
        
    printf ("\n\n");
    
}
