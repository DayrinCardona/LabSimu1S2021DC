/*
Autor: Dayrin Cardona 
Compilador:  gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
Compilado: gcc  Programa5.c -o Programa5
Fecha:  Fri Apr 16 15:09:17 CST 2021
Librerías: stdio (u otras)
Resumen: Programa que calcula el factorial de un número
Entradas: Número n ingresado por el usuario
Salidas: Factorial del número n ingresado por el usuario
*/
//Librerías
#include <stdio.h>
//Prototipos de funciones
int factorial(int n);
int main()
{
    //Declaración de variables locales.
    int n;
    //El programa solicita al usuario que ingrese un número para calcular su factorial. 
    printf("Ingrese un número ");
    scanf("%d",&n);
    //El programa muestra en pantalla los factoriales de todos los números previos hasta llegar al número ingresado por el usuario. 
    printf("El factorial del número es ");
    for(int i=0;i<=n;i++){
    //El programa ejecuta la función factorial en la posición i del for, hasta el número n ingresado por el usuario. 
     printf("*%d",factorial(i));   
    }
    return 0;
}
//Se especifica lo que hace la función factorial. 
int factorial(int n){
    if(n<=1)
    {
        //Caso base de la función recursiva.
        return 1;
    }else{
        //Caso anterior. Esto se repite hasta haber calculado desde el número ingresado por el usuario hasta el caso base de la función. 
        return(n*factorial(n-1));
    }
}
