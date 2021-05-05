/*
Autor: Dayrin Cardona 
Compilador:  gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
Compilado: gcc  Programa1.c -o Programa1
Fecha:  Fri Apr 16 15:08:40 CST 2021
Librerías: stdio (u otras)
Resumen: Programa para observar un arreglo de números pares del 2 al 20 en orden ascendente o descendente según indique el usuario
Entradas: arreglo a, letra que ingresará el usuario letra, variable de conteo n
Salidas: arreglo a en orden ascendente o descendente
*/
//Librerías
#include <stdio.h>
#include <ctype.h>
//Pasos del pseudocódigo
int main(){
    //Se declaran las variables principales del programa, tal como el arreglo de vectores, la letra que ingresará el usuario y la letra de conteo del arreglo.
    int a[10];
    char letra;
    int n=0;
    //Se llena el arreglo con 10 números pares entre 2 y 20 con un ciclo que recorre los números de dos en dos y los guarda en el arreglo. //
    for(int i=2;i<=20;i=i+2){
        //El arreglo en la posición n se iguala al número en i y luego se aumenta la variable de conteo del arreglo. 
        a[n]=i;
        n++;
    }
    //Al iniciar el programa, pregunta al usuario cómo quiere observar el arreglo, el usuario tiene que presionar la letra a o d.
    printf("Escoja la manera en la que quiere observar el arreglo, a para ascendente y d para descendente \n");
    letra = getchar();
    //Si la letra que el usuario presionó es a, el programa muestra el arreglo en orden ascendente, utilizando un for para imprimir cada componente del arreglo. 
    if(letra == 'a'){
        printf("El vector en orden ascendente es \n ");
        for(int i=0;i<10;i++){
            printf("%d \n",a[i]);
        }
    }
    //Si la letra que el usuario presionó es d, el programa muestra el arreglo en orden descendente, utilizando un for para imprimir cada componente del arreglo. 
    if(letra == 'd'){
        printf("El vector en orden descendente es \n ");
        for(int i=9;i>=0;i--){
            printf("%d \n",a[i]);
        }
    }
    
    //El programa finaliza. 
    return 0;
}
