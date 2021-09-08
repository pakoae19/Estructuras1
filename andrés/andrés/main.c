//ASIGNATURA: INGENIERIA DE SOFTWARE
//TAREA:PROGRAMACIÓN ESTRUCTURADA
//Integrantes:
//Andrade Espinosa Francisco Javier
//Diaz Leon Joshua Humberto
//Moreno Lara Isai Vicente
#include <stdio.h>
#include <locale.h>
//#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

#define N 15
#define PI 3.141592654

void printbanner();
void MenuPrincipal();
int Menu();
int aritop();
void suma();
void resta();
void multiplicacion();
void division();
int opgrados();
void Seno(float grados);
void Coseno(float grados);
void Tangente(float grados);
int perfig();
float pertriangulo(float ladt, float per1);
float percuadrado(float ladc, float per2);
float percirculo(float diam, float per3);
int areafig();
float areatriangulo(float base, float alt, float ar1);
float areacuadrado(float lad, float ar2);
float areacirculo(float rad,float ar3);
int volfig();
float volCono(float radc, float altc, float volCO);
float volCubo(float ladcb, float volC);
float volEsfera(float radef,float volE);
int estopc();
void llenaarreglo(int calificaciones[]);
void imprime(int calificaciones[]);
void media(int calificaciones[]);
void ordenaburbuja(int calificaciones[]);
void mediana(int calificaciones[]);
void moda(int frecuencia[],int calificaciones[]);
int factorial2(int numero,int resultado);
int factorial(int numero);
float calvelocidad(float distancia,float tiempo,float velocidad);
float calacelaracion(float vf,float vi, float ti, float ac);
float calfuerza(float masa, float aceleracion, float fuerza);

int main()
{
    system("color 0B");
    srand(time(NULL));
    setlocale(LC_ALL, "spanish");
    printbanner();
    system("cls") ;
    MenuPrincipal();
}

void printbanner()
{
    printf("\n\t\t\t  //////////////////////////////////////////////////////////////////////");
    printf("\n\t\t\t  //////                                                          //////");
    printf("\n\t\t\t  //////           Universidad Autónoma de San Luis Potosí        //////");
    printf("\n\t\t\t  //////                   Facultad de Ingeniería                 //////");
    printf("\n\t\t\t  //////              Ingeniería en Sistemas Inteligentes         //////");
    printf("\n\t\t\t  //////                                                          //////");
    printf("\n\t\t\t  //////                         Integrantes:                     //////");
    printf("\n\t\t\t  //////                                                          //////");
    printf("\n\t\t\t  //////              Andrade Espinosa Francisco Javier           //////");
    printf("\n\t\t\t  //////                  Diaz Leon Joshua Humberto               //////");
    printf("\n\t\t\t  //////                   Moreno Lara Isai Vicente               //////");
    printf("\n\t\t\t  //////                                                          //////");
    printf("\n\t\t\t  //////////////////////////////////////////////////////////////////////");
    printf("\n\n\t\t\t                     ");
    system("pause");
}

int Menu()
{
    int op;

    printf("\n\t\t\t  //////////////////////////////////////////////////////////////////////");
    printf("\n\t\t\t  //////                                                          //////");
    printf("\n\t\t\t  //////           Universidad Autónoma de San Luis Potosí        //////");
    printf("\n\t\t\t  //////                   Facultad de Ingeniería                 //////");
    printf("\n\t\t\t  //////              Ingeniería en Sistemas Inteligentes         //////");
    printf("\n\t\t\t  //////                                                          //////");
    printf("\n\t\t\t  //////    Selecciona el tipo de operación que deseas realizar   //////");
    printf("\n\t\t\t  //////                                                          //////");
    printf("\n\t\t\t  //////                       1) Aritmética                      //////");
    printf("\n\t\t\t  //////                       2) Trigonometría                   //////");
    printf("\n\t\t\t  //////                       3) Geometría 2D (Perímetro)        //////");
    printf("\n\t\t\t  //////                       4) Geometría 2D (Área)             //////");
    printf("\n\t\t\t  //////                       5) Geometría 3D                    //////");
    printf("\n\t\t\t  //////                       6) Estadística                     //////");
    printf("\n\t\t\t  //////                       7) Factorial                       //////");
    printf("\n\t\t\t  //////                       8) Velocidad                       //////");
    printf("\n\t\t\t  //////                       9) Aceleración                     //////");
    printf("\n\t\t\t  //////                      10) Fuerza                          //////");
    printf("\n\t\t\t  //////                      11) Salir                           //////");
    printf("\n\t\t\t  //////                                                          //////");
    printf("\n\t\t\t  //////////////////////////////////////////////////////////////////////");

    printf("\n\n\t\t\t                     Escriba su opción (1-11): ");
    scanf("%d",&op);
    return(op);
}

void MenuPrincipal()
{
    int ari;
    float grados,sen,cose,tang;
    int gr=0;
    float ladt,per1=0,ladc,per2=0,diam,per3=0;
    float base,alt,ar1=0,lad,ar2=0,rad,ar3=0;
    int fig=0;
    float radc,altc,volCO=0,ladcb,volC=0,radef,volE=0;
    int frecuencia[10]={0};
    int calificaciones[N],es,bandera=0;
    int numero=0,man,resultado=0;
    float distancia=0,tiempo=0,velocidad=0;
    float vf=0,vi=0,ti=0,ac=0;
    float f=0,m=0,a=0;
    int op;

    do
    {
        fflush(stdin);
        op=Menu();
        switch(op)
        {
            case 1:system("cls") ;

                fflush(stdin);
                ari=aritop();
                if(ari == 1)
                {
                    suma();
                }
                else if(ari == 2)
                {
                    resta();
                }
                else if(ari == 3)
                {
                    multiplicacion();
                }
                else if(ari == 4)
                {
                    division();
                }
                else
                {
                    printf("\n\n\t\t\t                         ¡Opción invalida!\n\n");
                }

                break;
            case 2:system("cls") ;

                fflush(stdin);
                gr=opgrados();
                if(gr == 1)
                {
                    printf("\n\n\t\t\t                       Ingresa la medida del ángulo: ");
                    scanf("%f",&grados);
                    Seno(grados);
                }
                else if(gr == 2)
                {
                    printf("\n\n\t\t\t                       Ingresa la medida del ángulo: ");
                    scanf("%f",&grados);
                    Coseno(grados);
                }
                else if(gr == 3)
                {
                    printf("\n\n\t\t\t                       Ingresa la medida del ángulo: ");
                    scanf("%f",&grados);
                    Tangente(grados);
                }
                else
                {
                    printf("\n\n\t\t\t                         ¡Opción invalida!\n\n");
                }

                break;
            case 3:system("cls") ;

                fflush(stdin);
                fig=perfig();
                if(fig == 1)
                {
                    printf("\n\n\t\t\t                       Ingresa la medida del lado (cm): ");
                    scanf("%f",&ladt);
                    per1=pertriangulo(ladt,per1);
                    printf("\n\n\t\t\t                    El perímetro del triangulo es de %0.2f cm\n\n",per1);
                }
                else if(fig == 2)
                {
                    printf("\n\n\t\t\t                       Ingresa la medida del lado (cm): ");
                    scanf("%f",&ladc);
                    per2=percuadrado(ladc,per2);
                    printf("\n\n\t\t\t                    El perímetro del cuadrado es de %0.2f cm\n\n",per2);
                }
                else if(fig == 3)
                {
                    printf("\n\n\t\t\t                       Ingresa la medida del diametro (cm): ");
                    scanf("%f",&diam);
                    per3=percirculo(diam,per3);
                    printf("\n\n\t\t\t                    El perímetro del círculo es de %0.2f cm\n\n",per3);
                }
                else
                {
                    printf("\n\n\t\t\t                         ¡Opción invalida!\n\n");
                }

                break;
            case 4:system("cls") ;

                fflush(stdin);
                fig=areafig();
                if(fig == 1)
                {
                    printf("\n\n\t\t\t                       Ingresa la medida de la base (cm): ");
                    scanf("%f",&base);
                    printf("\n\n\t\t\t                      Ingresa la medida de la altura (cm): ");
                    scanf("%f",&alt);
                    ar1=areatriangulo(base,alt,ar1);
                    printf("\n\n\t\t\t                     El área del triangulo es de %0.2f cm^2\n\n",ar1);
                }
                else if(fig == 2)
                {
                    printf("\n\n\t\t\t                        Ingresa la medida del lado (cm): ");
                    scanf("%f",&lad);
                    ar2=areacuadrado(lad,ar2);
                    printf("\n\n\t\t\t                     El área del cuadrado es de %0.2f cm^2\n\n",ar2);
                }
                else if(fig == 3)
                {
                    printf("\n\n\t\t\t                       Ingresa la medida del radio (cm): ");
                    scanf("%f",&rad);
                    ar3=areacirculo(rad,ar3);
                    printf("\n\n\t\t\t                     El área del círculo es de %0.3f cm^2\n\n",ar3);
                }
                else
                {
                    printf("\n\n\t\t\t                         ¡Opción invalida!\n\n");
                }

                break;
            case 5:system("cls") ;

                fflush(stdin);
                fig=volfig();
                if(fig == 1)
                {
                    printf("\n\n\t\t\t                       Ingresa la medida del radio (cm): ");
                    scanf("%f",&radc);
                    printf("\n\n\t\t\t                      Ingresa la medida de la altura (cm): ");
                    scanf("%f",&altc);
                    volCO=volCono(radc,altc,volCO);
                    printf("\n\n\t\t\t                      El vólumen del cono es de %0.2f cm^3\n\n",volCO);
                }
                else if(fig == 2)
                {
                    printf("\n\n\t\t\t                       Ingresa la medida del lado (cm): ");
                    scanf("%f",&ladcb);
                    volC=volCubo(ladcb,volC);
                    printf("\n\n\t\t\t                    El vólumen del cubo es de %0.2f cm^3\n\n",volC);
                }
                else if(fig == 3)
                {
                    printf("\n\n\t\t\t                       Ingresa la medida del radio (cm): ");
                    scanf("%f",&radef);
                    volE=volEsfera(radef,volE);
                    printf("\n\n\t\t\t                  El vólumen de la esfera es de %0.2f cm^3\n\n",volE);
                }
                else
                {
                    printf("\n\n\t\t\t                         ¡Opción invalida!\n\n");
                }

                break;
            case 6:system("cls") ;

                fflush(stdin);
                es=estopc();

                if(es == 1)
                {
                    llenaarreglo(calificaciones);
                    printf("\n\n\t\t\t                           Arreglo de calificaciones de %d alumnos entre 5 y 10\n",N);
                    imprime(calificaciones);
                    media(calificaciones);
                }
                else if(es == 2)
                {
                    llenaarreglo(calificaciones);
                    mediana(calificaciones);
                }
                else if(es == 3)
                {
                    llenaarreglo(calificaciones);
                    printf("\n\n\t\t\t                           Arreglo de calificaciones de %d alumnos entre 5 y 10\n",N);
                    imprime(calificaciones);
                    moda(frecuencia,calificaciones);
                }
                else
                {
                    printf("\n\n\t\t\t                         ¡Opción invalida!\n\n");
                }

                break;
            case 7:system("cls") ;

                printf("\n\n\t\t\t                     Ingresa un numero: ");
                scanf("%d",&numero);
                printf("\n\t\t\t       ¿De que manera deseas calcular el factorial del número? ");
                printf("\n\n\t\t\t                        1) Iterativa ");
                printf("\n\n\t\t\t                        2) Recursiva ");
                printf("\n\n\t\t\t                  Escriba su opción (1-2): ");
                scanf("%d",&man);

                if(man == 1)
                {
                    resultado=factorial2(numero,resultado);
                    printf("\n\n\t\t\t                   El factorial de %d es %d\n\n",numero,resultado);
                }else if(man == 2)
                {
                    resultado=factorial(numero);
                    printf("\n\n\t\t\t                   El factorial de %d es %d\n\n",numero,resultado);
                }
                else
                {
                    printf("\n\n\t\t\t                     ¡Opción invalida!\n\n");
                }

                break;
            case 8:system("cls") ;

                printf("\n\n\t\t\t                     Ingresa la distancia (m): ");
                scanf("%f",&distancia);
                printf("\n\n\t\t\t                       Ingresa el tiempo (s): ");
                scanf("%f",&tiempo);
                velocidad=calvelocidad(distancia,tiempo,velocidad);
                printf("\n\n\t\t\t                    La velocidad es igual a %0.2f m/s\n\n",velocidad);

                break;
            case 9:system("cls") ;

                printf("\n\n\t\t\t                     Ingresa la velocidad final (m/s): ");
                scanf("%f",&vf);
                printf("\n\n\t\t\t                    Ingresa la velocidad inicial (m/s): ");
                scanf("%f",&vi);
                printf("\n\n\t\t\t                          Ingresa el tiempo (s): ");
                scanf("%f",&ti);
                ac=calacelaracion(vf,vi,ti,ac);
                printf("\n\n\t\t\t                     La aceleración es igual a %0.2f m/s^2\n\n",ac);

                break;
            case 10:system("cls") ;

                printf("\n\n\t\t\t                     Ingresa la masa (Kg): ");
                scanf("%f",&m);
                printf("\n\n\t\t\t                  Ingresa la aceleración (m/s^2): ");
                scanf("%f",&a);
                f=calfuerza(m,a,f);
                printf("\n\n\t\t\t                   La fuerza es igual a %0.2f N\n\n",f);

                break;
            case 11:system("cls") ;

                break;
        }
    }while(op!=11);
}

void llenaarreglo(int calificaciones[])
{
    int i=0;

    for(i=0;i<N;i++)
    {
        calificaciones[i]=5+rand()%(10-5+1);
    }
}

void imprime(int calificaciones[])
{
    int i;

    printf("\n");
    for(i=0;i<N;i++)
    {
        printf("     %d ",calificaciones[i]);
    }
    printf("\n");
}

void media(int calificaciones[])
{
    int i;
    int total=0;

    for(i=0;i<N;i++)
    {
        total+=calificaciones[i];
    }
    printf("\n\t\t\t                           La media es el valor promedio de los datos.");
    printf("\n\t\t\t                                La media es %d / %d = %.4f\n\n",total,N,(double)total/N);
}

void ordenaburbuja(int calificaciones[])
{
    int i,j,var;

    for(i=1;i<N;i++)
    {
        for(j=0;j<N-1;j++)
        {
            if(calificaciones[j]>calificaciones[j+1])
            {
                var=calificaciones[j];
                calificaciones[j]=calificaciones[j+1];
                calificaciones[j+1]=var;
            }
        }
    }
}

void mediana(int calificaciones[])
{
    printf("\n\n\t\t\t                           Arreglo de calificaciones de %d alumnos entre 5 y 10\n",N);
    imprime(calificaciones);
    printf("\n");
    printf("\n\n\t\t\t                      Arreglo Ordenado de calificaciones de %d alumnos entre 5 y 10\n",N);
    ordenaburbuja(calificaciones);
    printf("\n");
    imprime(calificaciones);
    printf("\n\t\t\t                     La mediana es el elemento %d del arreglo ordenado de %d elementos.",N/2,N);
    printf("\n\t\t\t                                La mediana es de %d\n\n",calificaciones[N/2]);
}

void moda(int frecuencia[],int calificaciones[])
{
    int rango,i,j;
    int masgrande=0;
    int valmoda=0;

    for(rango=1;rango<=10;rango++)
    {
        frecuencia[rango]=0;
    }

    for(i=0;i<N;i++)
    {
        ++frecuencia[calificaciones[i]];
    }
    printf("\n\t\t\t                          Respuesta  |   Frecuencia  |  Histograma\n");
    for(rango=5;rango<=10;rango++)
    {
        printf("\n\t\t\t                              %d      |      %d        |   ",rango,frecuencia[rango]);
        if(frecuencia[rango]>masgrande)
        {
            masgrande=frecuencia[rango];
            valmoda=rango;
        }
        for(j=1;j<=frecuencia[rango];j++)
        {
            printf("%c",'*');
        }
        printf("\n");
    }
    printf("\n\t\t\t                          La moda es el valor mas frecuente.");
    printf("\n\t\t\t                                La moda es de %d\n\n",valmoda);
}

int estopc()
{
    int es;

    printf("\n\t\t\t                                1) Calcula la media");
    printf("\n\t\t\t                                2) Calcula la mediana");
    printf("\n\t\t\t                                3) Calcula la moda");

    printf("\n\n\t\t\t                               Escriba su opción (1-3): ");
    scanf("%d",&es);
    return(es);
}

void division()
{
    float pnm,snm,div;

    printf("\n\n\t\t\t                         Ingresa el primer numero: ");
    scanf("%f",&pnm);
    printf("\n\n\t\t\t                         Ingresa el segundo numero: ");
    scanf("%f",&snm);
    div=pnm/snm;
    printf("\n\n\t\t\t                   El resultado de la división de %0.2f / %0.2f es %0.2f\n\n",pnm,snm,div);
}

void multiplicacion()
{
    float pnm,snm,mul;

    printf("\n\n\t\t\t                         Ingresa el primer numero: ");
    scanf("%f",&pnm);
    printf("\n\n\t\t\t                         Ingresa el segundo numero: ");
    scanf("%f",&snm);
    mul=pnm*snm;
    printf("\n\n\t\t\t               El resultado de la multiplicación de %0.2f x %0.2f es %0.2f\n\n",pnm,snm,mul);
}

void resta()
{
    float pnm,snm,res;

    printf("\n\n\t\t\t                         Ingresa el primer numero: ");
    scanf("%f",&pnm);
    printf("\n\n\t\t\t                         Ingresa el segundo numero: ");
    scanf("%f",&snm);
    res=pnm-snm;
    printf("\n\n\t\t\t                   El resultado de la resta de %0.2f - %0.2f es %0.2f\n\n",pnm,snm,res);
}

void suma()
{
    float pnm,snm,sum;

    printf("\n\n\t\t\t                         Ingresa el primer numero: ");
    scanf("%f",&pnm);
    printf("\n\n\t\t\t                         Ingresa el segundo numero: ");
    scanf("%f",&snm);
    sum=pnm+snm;
    printf("\n\n\t\t\t                   El resultado de la suma de %0.2f + %0.2f es %0.2f\n\n",pnm,snm,sum);
}

int aritop()
{
    int ari;
    printf("\n\t\t\t                                1) Suma");
    printf("\n\t\t\t                                2) Resta");
    printf("\n\t\t\t                                3) Multiplicación");
    printf("\n\t\t\t                                4) División");
    printf("\n\n\t\t\t                       ¿Qué operación deseas realizar? (1-4): ");
    scanf("%d",&ari);
    return(ari);
}

void Tangente(float grados)
{
    float rg,tang;
    rg=(grados*PI)/180;
    tang=tan(rg);

    printf("\n\n\t\t\t                          El tangente de %0.2f es %0.4f\n\n",grados,tang);
}

void Coseno(float grados)
{
    float rg,cose;
    rg=grados*PI/180;
    cose=cos(rg);

    printf("\n\n\t\t\t                          El coseno de %0.2f es %0.4f\n\n",grados,cose);
}

void Seno(float grados)
{
    float rg,sen;
    rg=grados*PI/180;
    sen=sin(rg);

    printf("\n\n\t\t\t                          El seno de %0.2f es %0.4f\n\n",grados,sen);
}

int opgrados()
{
    int gr;
    printf("\n\t\t\t                                1) Seno");
    printf("\n\t\t\t                                2) Coseno");
    printf("\n\t\t\t                                3) Tangente");
    printf("\n\n\t\t\t                       ¿Qué deseas calcular? (1-3): ");
    scanf("%d",&gr);
    return(gr);
}

int perfig()
{
    int fig;
    printf("\n\t\t\t                                1) Triangulo");
    printf("\n\t\t\t                                2) Cuadrado");
    printf("\n\t\t\t                                3) Circulo");
    printf("\n\n\t\t\t                ¿De que figura deseas calcular el perímetro? (1-3): ");
    scanf("%d",&fig);
    return(fig);
}

float percirculo(float diam, float per3)
{
    per3=PI*diam;
    return(per3);
}

float percuadrado(float ladc, float per2)
{
    per2=4*ladc;
    return(per2);
}

float pertriangulo(float ladt, float per1)
{
    per1=3*ladt;
    return(per1);
}

float areacirculo(float rad,float ar3)
{
    ar3=PI*pow(rad,2);
    return(ar3);
}

float areacuadrado(float lad, float ar2)
{
    ar2=lad*lad;
    return(ar2);
}

float areatriangulo(float base, float alt, float ar1)
{
    ar1=(base*alt)/2;
    return(ar1);
}

int areafig()
{
    int fig;
    printf("\n\t\t\t                                1) Triangulo");
    printf("\n\t\t\t                                2) Cuadrado");
    printf("\n\t\t\t                                3) Circulo");
    printf("\n\n\t\t\t                 ¿De que figura deseas calcular el área? (1-3): ");
    scanf("%d",&fig);
    return(fig);
}

float volEsfera(float radef,float volE)
{
    volE=(4*PI*pow(radef,3))/3;
    //volE=(4/3)*PI*rad*rad*rad;
    return(volE);
}

float volCubo(float ladcb, float volC)
{
    volC=ladcb*ladcb*ladcb;
    return(volC);
}

float volCono(float radc, float altc, float volCO)
{
    volCO=(PI*pow(radc,2)*altc)/3;
    return(volCO);
}

int volfig()
{
    int fig;
    printf("\n\t\t\t                                1) Cono");
    printf("\n\t\t\t                                2) Cubo");
    printf("\n\t\t\t                                3) Esfera");
    printf("\n\n\t\t\t                ¿De que figura deseas calcular el volumen? (1-3): ");
    scanf("%d",&fig);
    return(fig);
}

int factorial2(int numero,int resultado)
{
    int i;

    resultado=1;

    for(i=1;i<=numero;i++)
    {
        resultado=resultado*i;
    }
    return(resultado);
}

int factorial(int numero)
{   if(numero<1)
    {
        return 0;
    }
    else if(numero == 1)
    {
        return 1;
    }
    else
    {
        return numero*factorial(numero-1);
    }
}

float calvelocidad(float distancia,float tiempo,float velocidad)
{
    velocidad=distancia/tiempo;

    return(velocidad);
}

float calacelaracion(float vf,float vi, float ti, float ac)
{
    ac=(vf-vi)/ti;
    return(ac);
}

float calfuerza(float masa, float aceleracion, float fuerza)
{
    fuerza=masa*aceleracion;
    return(fuerza);
}
