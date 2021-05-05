/*
Autor: Dayrin Cardona 
Compilador:  gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
Compilado: gcc  Programa3.c -o Programa3
Fecha:  Fri Apr 16 15:09:03 CST 2021
Librerías: stdio (u otras)
Resumen: Programa para solicitar cordenadas y mostrar la magnitud de los vectores, 
la suma de los vectores, el producto escalar y el producto vectorial
Entradas: Dos vectores de tres coordenadas
Salidas: Magnitud de los dos vectores, un vector suma, el producto
escalar de los dos vectores y un vector producto vectorial 
*/
//Librerías
#include <stdio.h>
#include <math.h>

//Se declaran las variables globales, los vectores que ingresará el usuario.
double a1[3],a2[3];
//Prototipos de funciones.
double magnitud(), suma(), escalar(), vectorial();
int main()
{
    //El programa pide al usuario que llene el primer vector de tres coordenadas utilizando un for. 
    printf("Ingrese las coordenadas del primer vector \n");
    for(int i=0;i<=2;i++){
        scanf("%lf",&a1[i]);
    }
    //El programa pide al usuario que llene el segundo vector de tres coordenadas utilizando un for.
    printf("Ingrese las coordenadas del segundo vector \n");
    for(int i=0;i<=2;i++){
        scanf("%lf",&a2[i]);
    }
    //El programa ejecuta las funciones magnitud, suma, escalar y vectorial y las muestra en pantalla.
    magnitud();
    suma();
    escalar();
    vectorial();
    return 0;
}
//Se especifica la función magnitud de tipo double
double magnitud(){
    //Declaración de cuatro variables locales, dos de las magnitudes de los vectores y dos de almacenamiento.
    double m1=0,m2=0;
    double a,b;
    printf("La magnitud es: ");
    //Mientras recorre cada coordenada con un ciclo for, el programa ejecuta una serie de instrucciones para calcular el módulo.
    for(int i=0;i<=2;i++){
        //Cada coordenada del vector 1 se eleva al cuadrado y se suman los cuadrados en cada ciclo.
        a=a1[i]*a1[i];
        m1+=(double)a;
        //Cada coordenada del vector 2 se eleva al cuadrado y se suman los cuadrados en cada ciclo.
        b=a2[i]*a2[i];
        m2+=(double)b;
    }
    //Se calcula la raíz cuadrada de la suma de los cuadrados para obtener cada módulo y se guarda en las mismas variables.
    m1=pow((double)m1, (double)1/2);
    m2=pow((double)m2,(double)1/2);
    //Se imprime en pantalla el módulo de cada vector.
    printf("\n para el primer vector %.2lf",m1);
    printf("\n para el segundo vector %.2lf",m2);
    return m1,m2;
}
//Se especifica la función suma de tipo double.
double suma(){
    //Se declara la variable local de esta función, el vector suma a.
    double a[3];
    printf("\n La suma de los dos vectores es \n");
    for(int i=0;i<=2;i++){
        //Se suman los dos vectores coordenada a coordenada utilizando un ciclo for y se imprime en pantalla.
        a[i]= a1[i]+a2[i];
        printf("%.2lf \n",a[i]);
    }
}
//Se especifica la función escalar de tipo double. 
double escalar(){
    printf("El producto escalar de los dos vectores es ");
    double esc=0;
    for(int i=0;i<=2;i++){
        esc+=(double)a1[i]*a2[i];
    }
    printf("%.2lf \n",esc);
    return esc;
}
double vectorial(){
    printf("El producto vectorial de los dos vectores es \n");
    double vec[3];
    for(int i=0;i<=2;i++){
        vec[i] = (double) a1[(i+1)%3]*a2[(i+2)%3] - a1[(i+2)%3]*a2[(i+1)%3];
        printf("%.2lf \n",vec[i]);
    }
}



