/*
Autor: Dayrin Cardona 
Compilador:  gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
Compilado: gcc  Problema21603.c -o Problema21603
Fecha:  Sat Mar 20 21:00:30 UTC 2021
Librerías: stdio (u otras)
Resumen: Programa para calcular la raíz cuadrada de un número entero positivo
Entradas: Número x
Salidas: Raíz cuadrada, i-1
*/
//Librerías
#include <stdio.h>
int x=0;
int i=0;
//Se declaran las variables del programa, un número N positivo dado y un número i que servirá de contador.
int main(){
//El programa lee el número ingresado por el usuario y lo guarda en la variable x.
printf("Ingrese un número entero positivo \n");
scanf("%d",&x);
//Se inicializa el valor de i con 1
i=1;
//Se utiliza un while para verificar que, mientras el cuadrado de i sea menor al número entero positivo ingresado por el usuario, i aumenta su valor. 
while(i*i<=x)
{
 i++;
}
//El bucle acaba cuando haya evaluado el cuadrado de todos los números menores al número ingresado por el usuario. 
//El programa escribe el resultado de la raíz cuadrada entera.
printf("La raíz cuadrada entera del número es ");
printf("%d \n",i-1);
//El programa finaliza.
return 0;
}
