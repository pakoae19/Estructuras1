#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void TasaMortalidad(float numeroFallecimientos, float numeroHabitantes, float tasaMort);

float main ()
{
    float numeroFallecimientos, numeroHabitantes;
    float tasaMort;
    
    TasaMortalidad(numeroFallecimientos,numeroHabitantes,tasaMort);
    
    return (0);
}

void TasaMortalidad(float numeroFallecimientos, float numeroHabitantes, float tasaMort)
{

    printf("¿Cuál es el número total de habitantes? ");
    scanf("%f", &numeroHabitantes);
    printf("¿Cuál es el número total de fallecimientos? ");
    scanf("%f", &numeroFallecimientos);

    tasaMort=(numeroFallecimientos/numeroHabitantes)*100;
    printf("%f",tasaMort);

    printf("La tasa de mortalidad es de %.2f por ciento\n",tasaMort);
    
}
