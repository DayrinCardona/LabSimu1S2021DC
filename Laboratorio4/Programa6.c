/*
Autor: Dayrin Cardona 
Compilador:  gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
Compilado: gcc  Programa6.c -o Programa6
Fecha:  Fri Apr 16 15:09:25 CST 2021
Librerías: stdio (u otras)
Resumen
Entradas
Salidas
*/
//Librerías
#include <stdio.h>
#include <math.h>
//Pasos del pseudocódigo
int n;
int funciona(int a); 
double funcionb(double b), funcionc(double c), funciond(double d);
#define raiz(base,exponente) pow(base,exponente)
int main(){
    printf("Ingrese un número n para realizar las sumatorias");
    scanf("%d",&n);
    printf("La sumatoria de la función a) es ");
    funciona(a);
    printf("La sumatoria de la función b) es ");
    funcion(b);
}
int funciona(int a){
    int a; 
    for(int k=1;k<=n;k++)
    {
        a+=k*k*(k-3);
    }
    return a; 
}
double funcionb(double b){
    int b; 
    for(int k=1;k<=n;k++)
    {
        b+=k-1;
    }
    b=(double)3/b;
    return b; 
}
double funcionc(double c){
    int c; 
    for(int k=1;k<=n;k++)
    { 
       double exp,exp1,exp2,exp3;
       exp1= pow((double)5,(double)1/2);
       exp2 = (double) (1+exp1)/2
       exp3 = (double) (1-exp1)/2
       exp += exp1*(pow((double)exp2,(double)k)) - pow((double)exp2,(double)k)))

    }
    d=(double)d*0.1;
    return c;
}
double funciond(double d){
    int d; 
    for(int k=2;k<=n;k++)
    { 
       int exp;
       exp= pow((double)2,(double)k-2);
       d += 3*exp+4;

    }
    d=(double)d*0.1;
    return d; 
}