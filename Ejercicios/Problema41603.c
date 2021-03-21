/*
Autor: Dayrin Cardona 
Compilador:  gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
Compilado: gcc  Problema41603.c -o Problema41603
Fecha:  Sun Mar 21 03:35:15 UTC 2021
Librerías: stdio (u otras)
Resumen: Programa para mostrar los números primos dentro de un rango proporcionado por el usuario
Entradas: N1, N2
Salidas: i
*/
//Librerías
#include <stdio.h>
//Se declaran las variables globales del programa
int i, j, primo, N1, N2;
void Es_primo();
int main(){
//Se pide al usuario que ingrese un primer número para crear un rango
printf("Ingrese un primer número \n");
scanf("%d",&N1);
//Se pide al usuario que ingrese un segundo número para crear un rango
printf("Ingrese un segundo número \n");
scanf("%d",&N2);
//Se iguala la variable i al primer número
i=N1;
//Con la sentencia while, mientras i sea menor o igual al segundo número, 
//el programa encuentra todos los  números primos que están dentro de este rango. 
printf("Los números primos entre este rango son ");
while(i<=N2){
    //Dentro del bucle, el programa ejecuta la función Es_primo
    Es_primo();
    //Si el número es primo, el programa escribe el número primo
    if(primo==1){
        printf("%d, ",i);
    }  
    //De lo contrario, el contador se aumenta en una unidad, y el bucle se repite de nuevo
    else(primo=0);{
        i++;
    }
}
//El programa finaliza
return 0;
}

void Es_primo(){
//Se inicializa el valor de la variable j y el valor de la variable primo 
j=2, primo=1;
//Se utiliza la sentencia while para verificar que el número sea primo, dividiéndolo por cada número desde 2 hasta el valor actual de la variable i
//controlada por el bucle while del programa principal. El bucle termina cuando se haya terminado de dividir el número ingresado por todos los números antes de él y se haya establecido si es 
//primo o no, o si dentro del bucle se encontró que el número no era primo. 
while((j<i) && (primo==1))
{
//Si el residuo de la división entre el número indicado por el rango del usuario y la variable j es cero, 
//entonces la variable primo es cero y el número no es primo.
if(i%j==0){
  primo=0;
}
//De lo contrario, si este residuo no es cero, se aumenta el contador en una unidad, y el bucle para verificar si el número es primo o no se repite.
else
{
  j++;
}
}
}




