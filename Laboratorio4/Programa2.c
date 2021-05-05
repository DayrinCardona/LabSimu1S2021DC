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
int vector[5];
int imenor, aux;
int orden();
int main()
{
    printf("Ingrese cinco números enteros \n");
    for(int i=0;i<5;i++){
        scanf("%d",&vector[i]);
    }
    orden();
    return 0; 
}
int orden()
{
    for(int i=0;i<5;i++)
    {
        imenor=i;
        for(int j=i+1;j<5;j++)
        {
            if(vector[j]<vector[imenor])
            {
                imenor=j;
            }
        }
        aux = vector[i];
        vector[i]=vector[imenor];
        vector[imenor]=aux;
    }
    printf("El nuevo vector ordenado ascendentemente es \n");	
    for(int i=0;i<5;i++){
        printf("%d \n",vector[i]);
    }
}