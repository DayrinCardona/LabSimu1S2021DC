/*
Autor: Dayrin Cardona 
Compilador:  gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
Compilado: gcc  Programa4.c -o Programa4
Fecha:  Fri Apr 16 15:09:09 CST 2021
Librerías: stdio (u otras)
Resumen: Programa que realiza operaciones con matrices. 
Entradas: Dos matrices ingresadas por el usuario.
Salidas: Suma, resta y multiplicación de matrices, determinante, transpuesta, inversa y reducción por Gauss y Gauss Jordan. 
*/
//Librerías

#include <stdio.h>
#include <math.h>
//Declaración de variables globales, las dos matrices que ingresará el usuario, matrices de operaciones y una constante c, todo de tipo double. 
double matA[3][3],matB[3][3],matC[3][3],a[3][3],c;
//Prototipos de funciones. 
void pedirmatrices(),constante(),suma(),resta(),multiplicacion(),inversa(),gauss(),gaussjordan();
double determinante();
void transpuesta(double a[3][3]), imprimirmatrices(double a[3][3]);

void main()
{
    //El programa ejecuta las funciones y presenta en pantalla los resultados de las operaciones hechas con las matrices ingresadas por el usuario.
    pedirmatrices();
    puts("La primera matriz que usted ingresó fue \n");
    imprimirmatrices(matA);
    puts("La segunda matriz que usted ingresó fue \n");
    imprimirmatrices(matB);
    constante();
    suma();
    resta();
    multiplicacion();
    determinante();
    transpuesta(matB);
    inversa();
    gauss();
    gaussjordan();
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
//Esta función 
void imprimirmatrices(double a[3][3]){
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            printf("%.2lf ",a[i][j]);
        }
    puts("\n");
    }
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
//El programa resta las dos matrices matA y matB componente a componente utilizando un for y muestra la resta en pantalla.
void resta(){
    puts("\n c) Resta de las dos matrices");
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            matC[i][j]=matB[i][j]-matA[i][j];
            printf("%.2lf ",matC[i][j]);
        }
        puts("\n");
    }
}
//Función para multiplicar dos matrices utilizando tres for para barrer todos los índices 
void multiplicacion(){
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
//Cálculo del determinante de una matriz utilizando la operación módulo para calcular los componentes de la matriz que se multiplicarán. 
double determinante(){
    //Declaración de variable de almacenamiento que guarda el valor del determinante. 
    double det=0;
    printf("\n e) Determinante de la matriz matA ");
    for(int i=0;i<=2;i++){
        det += (double) matA[0][i]*(matA[1][(i+1)%3]*matA[2][(i+2)%3] - matA[1][(i+2)%3]*matA[2][(i+1)%3]);
    }
    printf("%.2lf",det);
    return det;
}
//Cálculo de la transpuesta de una matriz invirtiendo las filas por las columnas y las columnas por las filas.
void transpuesta(double a[3][3]){
    puts("\n f) Transpuesta de la matriz matB");
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            matC[i][j]=a[j][i];
            printf("%.2lf ",matC[i][j]);
        }
      puts("\n");
    }
}
//Inicialización de la función para hallar la matriz inversa de matA.
void inversa(){
    //Se halla el determinante de la matriz matA.
    double det=0;
    for(int i=0;i<=2;i++){
        det += (double) matA[0][i]*(matA[1][(i+1)%3]*matA[2][(i+2)%3] - matA[1][(i+2)%3]*matA[2][(i+1)%3]);
    }
    //Se halla la matriz transpuesta de A.
    double matD[3][3],matE[3][3];
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            matD[i][j]= matA[j][i];
        }
    }
    
    //Se calcula la matriz adjunta de la transpuesta de A de manera manual. 
    matE[0][0]= matD[1][1]*matD[2][2]-matD[1][2]*matD[2][1];
    matE[0][1]= -matD[1][0]*matD[2][2]+matD[1][2]*matD[2][0];
    matE[0][2]= matD[1][0]*matD[2][1]-matD[1][1]*matD[2][0];
    matE[1][0]= -matD[0][1]*matD[2][2]+matD[0][2]*matD[2][1];
    matE[1][1]= matD[0][0]*matD[2][2]-matD[0][2]*matD[2][0];
    matE[1][2]= -matD[0][0]*matD[2][1]+matD[0][1]*matD[2][0];
    matE[2][0]= matD[0][1]*matD[1][2]-matD[0][2]*matD[1][1];
    matE[2][1]= -matD[0][0]*matD[1][2]+matD[0][2]*matD[1][0];
    matE[2][2]= matD[0][0]*matD[1][1]-matD[0][1]*matD[1][0];
    //Se halla la inversa de la matriz matA.
    puts("g) La matriz inversa de matA es ");
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            matE[i][j] = matE[i][j]/det;
            printf("%.2lf ",matE[i][j]);
        }
        puts("\n");
    }
}
void gauss(){
    //Se repite todo este proceso tres veces.
    for(int i=0;i<=2;i++){
        //Divide cada fila por el número de esa fila que pertenezca a la diagonal de la matriz. Realiza este proceso tres veces. 
        for(int j=3;j>=0;j--){
            matA[i][j] = matA[i][j]/matA[i][i];
        }
        //Recorre el resto de filas 
        for(int k=i+1;k<=2;k++){
            for(int j=3;j>=0;j--){
                //Resta el cálculo realizado anteriormente restando las filas hasta obtener una matriz triangular superior. 
                matA[k][j] = matA[k][j] - matA[k][i]*matA[i][j];
            }
        }
    }
    //Se muestra la matriz reducida por Gauss en pantalla. 
    puts("h) La matriz matA reducida por Gauss  es \n: ");
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++)
        {
            printf("%.2lf ",matA[i][j]);
        }
        puts("\n");
    }
}
void gaussjordan(){
    for(int i=0;i<=2;i++){
        //Divide cada fila por el número de esa fila que pertenezca a la diagonal de la matriz. Realiza este proceso tres veces. 
        for(int j=3;j>=0;j--){
            matB[i][j] = matB[i][j]/matB[i][i];
        }
        //Recorre el resto de filas
        for(int k=i+1;k<=2;k++){
            for(int j=3;j>=0;j--){
                //Resta el cálculo realizado anteriormente restando las filas hasta obtener una matriz triangular superior. 
                matB[k][j] = matB[k][j] - matB[k][i]*matB[i][j];
            }
        }
        for (int k=0; k<=i-1;k++){
            for(int j=3;j>=0;j--){
                //Vuelve a realizar el cálculo anterior hasta obtener una matriz escalonada reducida, es decir la matriz identidad. 
                matB[k][j] = matB[k][j] - matB[k][i]*matB[i][j];
            }
        }
    }
    //Se muestra la matriz reducida por Gauss Jordan en pantalla. 
    puts("i) La matriz matB reducida por Gauss Jordan es \n: ");
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++)
        {
            printf("%.2lf ",matB[i][j]);
        }
        puts("\n");
    }
}