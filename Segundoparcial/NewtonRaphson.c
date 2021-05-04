/*
Autor: Dayrin Cardona 
Compilador:  gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
Compilado: gcc  NewtonRaphson.c -o NewtonRaphson
Fecha:  Sun May 2 06:30:14 CST 2021
Librerías: stdio (u otras)
Resumen: Programa para encontrar las raíces de la función arcsin(x)
Entradas: x_inicial, tolerancia, iter
Salidas: Solución de la ecuación
*/
//Librerías
#include <stdio.h>
#include <math.h>
//Se declaran los prototipos de las funciones
double f(double x);
double df(double x);
void NR(double x0, double tol, int maxiter, int *interac, double*respuesta);

//Función principal del programa.
void main(){
	/*El programa solicita que el usuario ingrese el x_inicial que se obtiene visualmente, la tolerancia, es decir el tamaño de los cuadrados 
	y xS que es la respuesta*/

	double x_inicial, tolerancia, xS;

	//Declaración de variables de iteración. 
	int iter, Aiter;
	puts("Ingrese x_inicial");
	scanf("%lf",&x_inicial);
	puts("Ingrese tolerancia");
	scanf("%lf",&tolerancia);
	puts("Ingrese número de iteraciones");
	scanf("%d",&iter);
	//Ejecución del método Newton Raphson
	NR(x_inicial,tolerancia,iter,&Aiter,&xS);
	/*Si el número de iteraciones guardadas es igual al número de iteraciones ingresadas por el usuario, no hay solución. De lo contrario, 
	el programa escribe el número de iteraciones hechas y la raíz de la ecuación.*/
	if (Aiter==iter)
	{
		printf("No hay solución después de %d iteraciones \n",iter);
	} 
	else
	{
		printf("Luego de %d iteraciones, la solución es %lf \n",Aiter,xS);
	}
}
//Se especifica la función cuyas raíces se desean calcular.
double f(double x)
{
	return asin(x);
}

//Se especifica la primera derivada de la función cuyas raíces se desean calcular. 
double df(double x)
{
	return 1/sqrt(1-x*x);
}
//Función Newton-Raphson.
void NR(double x0, double tol, int maxi, int *iterac, double *sol)
{
	//Se declaran las variables locales, la variable inicial, la variable que se va iterando y la diferencia entre ambas variables. 
	double x_i, x, dif;
	//Variable de conteo
	int i=1;
	x_i=x0;
	//Solución de la primera iteración.
	x=x_i-f(x_i)/df(x_i);
	dif=(double)x-x_i;
	//Se verifica el valor absoluto de la diferencia.
	(dif<0)?dif=-dif:dif;
	/*la diferencia del valor no llega a la tolerancia, continúa probando y realiza todas las iteraciones mientras que la diferencia sea mayor
	a la tolerancia y la variable de conteo sea menor a maxi */
	while(dif>tol && i<maxi)
	{   
		x_i=x;
		//calculando x
		x=x_i-f(x_i)/df(x_i);
		dif=x-x_i;
		(dif<0)?dif=-dif:dif;
		i++;
	}
	//Se guardan las respuestas en la memoria utilizando punteros.
	*sol=x;
	*iterac=i;
}
