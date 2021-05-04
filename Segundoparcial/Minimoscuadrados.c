/*
Autor: Dayrin Cardona 
Compilador:  gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
Compilado: gcc  Minimoscuadrados.c -o Minimoscuadrados
Fecha:  Sun Apr 25 20:33:03 CST 2021
Librerías: stdio (u otras)
Resumen: Programa para calcular la recta que mejor aproxima el crecimiento o evolución del jugador. 
Entradas: Kilogramos, semanas. 
Salidas: Recta y, pendiente m, intersecto b. 
*/
//Librerías
#include <stdio.h>
#include <math.h>

//Declaración e inicialización de variables globales, "x" es variable dependiente y "y" es variable independiente
float t[]={1,2,3,4,5,6,7}, x[]={20,26,31,38,45,49,54};
//Variable que indica el tamaño del vector y el final de la sumatoria. 
int n = 7;
//Prototipos de funciones
void imprimirvector(float a[]);
float sumvector(float a[]);
float sumvectormul(float a1[], float a2[]);
void main(){
    /*Se inicializan las variables del problema. "m" es la pendiente, "b" es el intersecto en y, y "r" es el coeficiente de correlación, cuyo
    cuadrado indica qué tanto se aproximan los datos al modelo matemático.*/
    float b, m, r;
    //Se imprimen los datos en pantalla.
    imprimirvector(t);
    imprimirvector(x);
    //Se encuentran las variables del problema según las ecuaciones del método de mínimos cuadrados.
    m = (n*sumvectormul(t,x) - sumvector(t)*sumvector(x))/(n*sumvectormul(t,t)-sumvector(t)*sumvector(t));
    b = (sumvector(x)-m*sumvector(t))/n;
    r = (n*sumvectormul(t,x)-sumvector(t)*sumvector(x))/sqrt((n*sumvectormul(t,t)-sumvector(t)*sumvector(t))*(n*sumvectormul(x,x)-sumvector(x)*sumvector(x)));
    puts("La recta que mejor aproxima es: ");
    printf("x = %f t + %f\n",m,b);
    //El coeficiente de determinación es el cuadrado de r
    printf("El coeficiente de determinación es: %f\n",r*r);
    //Cálculos para el peso que puede levantar el atleta después de cinco meses.
    float x1 = m*20 + b;
    printf("Después de 5 meses, es decir 20 semanas, el jugador ha logrado levantar: %f kg\n",x1);
    
}

//Se realiza una función para imprimir los datos de un vector en pantalla.
void imprimirvector(float a[]){
    puts("Los datos del vector son ");
    for(int i=0;i<n;i++){
        printf("%.2f ",a[i]);
    }
    puts("\n");
}
//Se realiza la sumatoria de la multiplicación de dos vectores ya sea iguales o distintos utilizando una función de tipo float porque devuelve un valor tipo float.
float sumvectormul(float a1[], float a2[]){
    //Se define la variable de almacenamiento de la sumatoria.
    float rep=0;
    for (int i=0;i<n;i++)
    {
        rep += a1[i]*a2[i];
    }
    return rep;
}
//Se realiza la sumatoria de un vector utilizando una función de tipo float porque devuelve un valor tipo float.
float sumvector(float a[]){
    //Se define la variable de almacenamiento de la sumatoria.
    float rep=0;
    for(int i=0;i<n;i++){
        rep+=a[i];
    }
    return rep;
}

