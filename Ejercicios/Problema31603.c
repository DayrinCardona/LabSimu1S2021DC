/*
Autor: Dayrin Cardona 
Compilador:  gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
Compilado: gcc  Problema31603.c -o Problema31603
Fecha:  Sun Mar 21 02:13:30 UTC 2021
Librerías: stdio (u otras)
Resumen: Programa para verificar si un número es primo o no
Entradas: N
Salidas: primo
*/
//Librerías
#include <stdio.h>
//Se declaran las variables globales del programa
int N, i, primo; 
int main(){
//El programa pide un número y el usuario lo ingresa y lo guarda en la variable N
printf("Ingrese cualquier número para verificar si es primo o no \n");
scanf("%d",&N);
//Se inicializan la variable i de conteo y la variable primo de comparación.
i=2;
primo=1;
//Se utiliza un ciclo while para verificar que el número sea primo, dividiéndolo por cada número desde 2 hasta una unidad menos del número ingresado
//El bucle termina cuando se haya terminado de dividir el número ingresado por todos los números antes de él desde 2 hasta una unidad menos,
//o si dentro del bucle se encontró que el número no era primo. 
while((i<N-1) && (primo==1))
{
//Si el residuo de la división entre el número indicado por el usuario y la variable i es cero, 
//entonces la variable primo es cero y el número no es primo.
if(N%i==0){
  primo=0;
}
//De lo contrario, si este residuo no es cero, se aumenta el contador en una unidad, y el bucle se repite.
else
{
  i++;
}
}

//Se utiliza una sentencia if-else para escribir en consola si el número es primo o no.  
//Si la variable primo es cero, entonces escribe que el número no es primo. Si la variable primo es uno, entonces escribe que el número es primo. 
if(primo==0){
    printf("No es primo \n");
}
else if(primo==1)
{
    printf("Es primo \n");
}
return 0;
}
