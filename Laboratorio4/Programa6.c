/*
Autor: Dayrin Cardona 
Compilador:  gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
Compilado: gcc  Programa6.c -o Programa6
Fecha:  Fri Apr 16 15:09:25 CST 2021
Librerías: stdio (u otras)
Resumen: Programa que realiza sumatorias
Entradas: El número n que ingresa el usuario, límite de la sumatoria
Salidas: Cuatro sumatorias de cuatro diferentes funciones
*/
//Librerías
#include <stdio.h>
#include <math.h>
//Declaración de variables
int n;
//Prototipos de funciones
void funciona(), funcionb(), funcionc(), funciond();

//Función principal
int main(){
    //El programa muestra en pantalla los resultados de las sumatorias.
    printf("Ingrese un número n para realizar las sumatorias ");
    scanf("%d",&n);
    puts("La sumatoria de la función a) es ");
    funciona();
    puts("La sumatoria de la función b) es ");
    funcionb();
    puts("La sumatoria de la función c) es ");
    funcionc();
    puts("La sumatoria de la función d) es ");
    funciond();
}
void funciona(){
    //Declaración de variable que almacena la sumatoria. 
    int a=0;
    for(int k=1;k<=n;k++)
    {
        //Función de la primera sumatoria.
        a+=k*k*(k-3);
    }
    printf("%d \n",a);
}
void funcionb(){
    //Declaración de variable que almacena la sumatoria. 
    double b=0;
    for(int k=2;k<=n;k++)
    {
        //Función de la segunda sumatoria.
        b+=(double)3/(k-1);
    }
    printf("%.2lf \n",b);
}
void funcionc(){
    //Declaración de variable que almacena la sumatoria. 
    double c=0;
    for(int k=1;k<=n;k++)
    { 
       double exp,exp1,exp2,exp3;
       exp1=(double)sqrt(5);
       exp2=(double)(1+exp1)/2;
       exp3=(double)(1-exp1)/2;
       //Función de la tercera sumatoria.
       c+=(double) (1/exp1)*((pow((double)exp2,(double)k)) - pow((double)exp3,(double)k));
    }
    printf("%.2lf \n",c);
}
void funciond(){
    //Declaración de variable que almacena la sumatoria. 
    double d=0;
    for(int k=2;k<=n;k++)
    { 
       //Función de la cuartasumatoria.
       int exp;
       exp= pow((double)2,(double)k-2);
       d += 3*exp+4;
    }
    d=(double)d*0.1;
    printf("%.2lf \n",d);
}