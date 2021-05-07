/*
Autor: Dayrin Cardona 
Compilador:  gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
Compilado: gcc  Programa2.c -o Programa2
Fecha:  Fri Apr 16 15:08:56 CST 2021
Librerías: stdio (u otras)
Resumen: Programa para ordenar los elementos de un vector de manera ascendente 
utilizando el método de ordenación por selección. 
Entradas: Un vector de cinco números enteros
Salidas: Un vector de cinco números enteros en orden
*/
//Librerías
#include <stdio.h>
//Declaración de variables globales.
int vector[5];
int imenor, aux;
//Prototipos de funciones.
int orden();
//Función principal.
int main()
{
    //El programa pide al usuario que ingrese cinco números enteros y los guarda en un vector.
    printf("Ingrese cinco números enteros \n");
    for(int i=0;i<5;i++){
        scanf("%d",&vector[i]);
    }
    //El programa llama a la función orden. 
    orden();
    return 0; 
}
//Inicialización de la función que representa el método de ordenación por selección. 
int orden()
{
    //Se recorren todas las componentes de la lista comparando con el número más pequeño hasta que el vector queda completamente ordenado. 
    for(int i=0;i<5;i++)
    {
        //Momentáneamente, el primer elemento de la lista es el número más pequeño. 
        imenor=i;
        //Se recorre el resto de la lista desordenada.
        for(int j=i+1;j<5;j++)
        {
            //Si el número en la componente j actual del vector es menor al número más pequeño, el índice del número más pequeño de la lista pasa a ser el índice de la componente j actual del vector.
            if(vector[j]<vector[imenor])
            {
                imenor=j;
            }
        }
        //Utilizando una variable auxiliar, se intercambian las posiciones de los vectores.
        aux = vector[i];
        vector[i]=vector[imenor];
        vector[imenor]=aux;
    }
    //Se imprime en pantalla el nuevo vector ordenado ascendentemente. 
    printf("El nuevo vector ordenado ascendentemente es \n");	
    for(int i=0;i<5;i++){
        printf("%d \n",vector[i]);
    }
}