/*
Autor: Dayrin Cardona 
Compilador:  gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
Compilado: gcc  Programa4.c -o Programa4
Fecha:  Fri Apr 16 15:09:09 CST 2021
Librerías: stdio (u otras)
Resumen
Entradas
Salidas
*/
//Librerías

#include <stdio.h>
#include <math.h>
//Declaración de variables globales, las dos matrices que ingresará el usuario, matrices de operaciones y una constante c, todo de tipo double. 
double matA[3][3],matB[3][3],matC[3][3],a[3][3],c;
//Prototipos de funciones. 
void pedirmatrices(),constante(),suma(),resta(),multiplicacion(),determinante(),inversa();
void transpuesta(double a[3][3]);

int main()
{
    //El programa ejecuta las funciones.
    pedirmatrices();
    constante();
    suma();
    resta();
    multiplicacion();
    determinante();
    puts("\n f) Transpuesta de la matriz matB");
    transpuesta(matB);
    return 0;
}
//Esta función pide que el usuario ingrese las matrices.
void pedirmatrices(){
    puts("Ingrese los elementos de la primera matriz ");
    //El usuario ingresa los valores de la matriz matA, con el primer for se recorren las filas y con el segundo las columnas.
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            printf("Ingrese los elementos de la fila %d columna %d ",i,j);
            scanf("%lf",&matA[i][j]);
        }
    }
    puts("Ingrese los elementos de la segunda matriz ");
    //El usuario ingresa los valores de la matriz matB, con el primer for se recorren las filas y con el segundo las columnas.
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            printf("Ingrese los elementos de la fila %d columna %d ",i,j);
            scanf("%lf",&matB[i][j]);
        }
    }
    puts("Ingrese una constante");
    //El usuario ingresa el valor de una constante. 
    scanf("%lf",&c);
}
//El programa multiplica la matriz matA por una constante que el usuario ingresó en la primera parte.
void constante(){
    puts("\n a) matA por una constante");
    //Se mutliplica la matriz matA por la constante c coordenada a coordenada e imprime la matriz reescalada en pantalla.
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            matC[i][j]=c*matA[i][j];
            printf("%.2lf ",matC[i][j]);
        }
    puts("\n");
    }
}
//El programa suma las dos matrices matA y matB y muestra la suma en pantalla.
void suma(){
    //b) Suma de las dos matrices
    puts("\n b) Suma de las dos matrices");
    //Se suma la matriz matA y la matriz matB componente a componente.
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            matC[i][j]=matA[i][j]+matB[i][j];
            printf("%.2lf ",matC[i][j]);
        }
        puts("\n");
    }
    
}
//El programa resta las dos matrices matA y matB y muestra la suma en pantalla.
void resta(){
    //b) Resta de las dos matrices
    puts("\n c) Resta de las dos matrices");
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            matC[i][j]=matB[i][j]-matA[i][j];
            printf("%.2lf ",matC[i][j]);
        }
        puts("\n");
    }
}
void multiplicacion(){
    //d) Multiplicación de matrices
    puts("\n d) Multiplicación de las dos matrices");
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            matC[i][j]=0;
            for(int k=0;k<=2;k++){
            matC[i][j]+=matA[i][k]*matB[k][j];
            }
            printf("%.2lf ",matC[i][j]);
        }
        puts("\n");
    }
}
void determinante(){
    double det=0;
    printf("\n e) Determinante de la matriz matA ");
    for(int i=0;i<=2;i++){
        det += (double) matA[0][i]*(matA[1][(i+1)%3]*matA[2][(i+2)%3] - matA[1][(i+2)%3]*matA[2][(i+1)%3]);
    }
    printf("%.2lf",det);
}
void transpuesta(double a[3][3]){
    //e) Transpuesta de la matriz matB
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            matC[i][j]=a[j][i];
            printf("%.2lf ",matC[i][j]);
        }
      puts("\n");
    }
}
void inversa(){
    determinante();
    transpuesta(matA);
    double matD[3][3];
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
         matD[i][j]= matC[i][j]*();
        }
    }
}
