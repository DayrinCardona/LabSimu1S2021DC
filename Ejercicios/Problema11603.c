/*
Autor: Dayrin Cardona 
Compilador:  gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
Compilado: gcc  Problema11603.c -o Problema11603
Fecha:  Sun Mar 21 01:14:00 UTC 2021
Librerías: stdio (u otras)
Resumen: Programa para leer alturas de manera indeterminada hasta que se ingrese una negativa, 
calcula la media, el máximo y el mínimo
Entradas: x
Salidas: med, max, min
*/
//Librerías
#include <stdio.h>
//Se declaran las variables globales del programa
int main (){
int n;
float x, med, max, min, med1;
//Se inicializan las variables principales del problema
n=0, med=0, med1=0; 
//pedimos al usuario que ingrese la altura y la guarda en la variable x
printf("Ingrese altura \n");
scanf("%f",&x);
//Se asigna valores a las variables de máximo y mínimo
max=x;
min=x;
//Se utiliza el bucle while para que mientras la altura sea positiva, el programa siga leyendo un número indeterminado de alturas
while (x>=0){
//Se modifica el valor de nuestras variables, aumentamos el contador n en una unidad
n++;
//Se asigna el valor de la media como la media más la altura ingresada
med=med+x;
//Si la variable de altura es mayor al máximo inicial, entonces el nuevo máximo es el último valor x
if (x>max){
max=x;
}
//Si la variable de altura es menor al mínimo  inicial, entonces el nuevo mínimo es el último valor x
if (x<min)
{
min=x;
}
//El programa vuelve a pedir la altura al usuario y la guarda en la variable x
printf("Ingrese altura \n");
scanf("%f",&x);
//Se encuentra la variable media1 dividiendo la media por el número de veces que hemos agregado la altura, es decir, se divide por el contador n. 
med1=med/n;
}

//Finalmente, si el bucle se acaba, es decir, n tiene un valor 0, se imprime al usuario que el número que ingresó no es positivo
if (n=0){
printf("No positivos");
} 
//De lo contrario, se imprimen los valores de media, máximo y mínimo en la consola
else{
printf("La media, el máximo y el mínimo son: ");
printf("%.2f, %.2f, %.2f \n",med1,max,min);
}
//El programa finaliza
return 0;
}
