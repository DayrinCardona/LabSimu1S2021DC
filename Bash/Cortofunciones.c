/*
Autor: Dayrin Cardona 
Compilador: 
Compilado: gcc  Cortofunciones.c -o Cortofunciones
Fecha:  Tue Apr 6 20:58:30 CST 2021
Librerías: stdio (u otras)
Resumen
Entradas
Salidas
*/
//introducimos las Librerías
#include <stdio.h>
#include <math.h>

//Se declaran las variables globales del programa, n guarda la variable del programa
int n;
//Se declaran las variables de las operaciones
float v1,v2,op;
//Se declaran las funciones para cada operación 
void calculadora(),suma(),resta(),mul(),divi();
//Se ejecuta el código principal    
int main(){
    //Se ejecuta la función calculadora
    calculadora();
    //Mientras el usuario no presione el número 0, el programa se continúa ejecutando
    while(n!=0){
        switch(n){
            //En el primer caso se ejecuta la función suma
            case 1: suma();
                    break;
            //En el segundo caso se ejecuta la función resta
            case 2: resta();
                    break;
            //En el tercer caso se ejecuta la función multiplicación
            case 3: mul();
                    break;
            //En el cuarto caso se ejecuta la función división
            case 4: divi();
                    break;
            //En cualquier otro caso el programa vuelve a pedir el número de nuevo
            default: break;
        }
    calculadora();
    }
    return 0;
}
//Se muestran las opciones de operaciones y de salida al usuario
void calculadora(){
    printf("Ingrese número de la operación que quiere realizar \n ");
    printf("0. Salir \n");
    printf("1. Suma \n");
    printf("2. Resta \n");
    printf("3. Multiplicación \n");
    printf("4. División \n");
    scanf("%d",&n);
}
//Se ejecuta la función suma, pregunta dos valores al usuaruio, los suma y los muestra en pantalla
void suma(){
    printf("Ingrese un primer valor \n");
    scanf("%f",&v1);
    printf("Ingrese un segundo valor \n");
    scanf("%f",&v2);
    op=v1+v2;
    printf("La suma de los dos valores es %.2f \n",op);
}
//Se ejecuta la función resta, pregunta dos valores al usuario, los resta y los muestra en pantalla
void resta(){
    printf("Ingrese un primer valor \n");
    scanf("%f",&v1);
    printf("Ingrese un segundo valor \n");
    scanf("%f",&v2);
    printf("La resta de los dos valores es %.2f \n",op);
    op=v1-v2;
}
//Se ejecuta la función multiplicación, pregunta dos valores al usuario, los multiplica y los muestra en pantalla
void mul(){
    printf("Ingrese un primer valor \n");
    scanf("%f",&v1);
    printf("Ingrese un segundo valor \n");
    scanf("%f",&v2);
    op=v1*v2;
    printf("La multiplicación de los dos valores es %.2f \n",op);
}
//Se ejecuta la función división, pregunta dos valores al usuario, los divide y los muestra en pantalla
void divi(){
    printf("Ingrese un primer valor \n");
    scanf("%f",&v1);
    printf("Ingrese un segundo valor \n");
    scanf("%f",&v2);
    op= (float)v1/v2;
    printf("La división de los dos valores es %.2f \n",op);
}
   
