/*
Autor: Dayrin Cardona 
Compilador:  gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
Compilado: gcc  ExamenFinal.c -o ExamenFinal
Fecha:  Thu May 13 10:13:53 CST 2021
Librerías: stdio (u otras)
Resumen: Examen final que modela tres cohetes
Entradas: 
Salidas: 
*/
//Librerías
#include <stdio.h>
#include <math.h>
//Definiendo constantes del problema
#define G 6.693E-11
#define RT 6.378E6
#define MT 5.9736E24 
#define R 287.06 
#define L 6.5E-3
#define g0 9.81 
#define T0 288.15
#define P0 101325.0

//Prototipos de funciones
double mc(double m0, double mf0, double TSFC, double E0, double t0);
double g(double v);
double fa(double v, double CD, double A, double a);
double p(double v);
double alturamax(double E0, double m0, double mf0, double TSFC, double t0);
double ddy(double m0, double mf0, double TSFC, double E0, double t0, double y, double CD, double A, double a);
double dy(double a, double v);
double te(double TSFC, double E0, double mf0);
double a, E, t, v;
double y(double v);
//Se muestran los resultados en pantalla
int main(){
    double y=53, delta=0.1;
    t=0,v=0,a=0;
    //Creando archivo donde se guardará la información
    FILE *pf = fopen("aceleración","");
    //Características del primer cohete
    printf("El nombre del primer cohete es Ah Mun \n");
    printf("Empuje del cohete E0 %f \n",3E7);
    printf("Consumo específico del empuje TSFC %f \n",3.248E-4);
    printf("Coeficiente de forma CD %f \n",61.27);
    printf("Sección transversal del cohete A %f \n",201.06);
    printf("Masa del propulsor m0%f \n",1.1E5);
    printf("Masa inicial del combustible mf0%f \n",1.5E6);
    while ((y>=0)&&(v<0)){
        //Generando bandera para detectar el momento en el que el combustible es nulo.
        if(te(3.248E-4,3E7,1.5E6)){
            //El empuje se hace cero
            E = 0;
    }
    //Ejecutando el método numérico
        a+=ddy(1.1E5, 1.5E6, 3.248E-4, 3E7, t, v, 61.27, 201.06, a);
        v+=dy(a,v);
        t+=delta;
    }
    //Se guarda el último valor en el archivo
    fprintf(pf,"%.2f\t%.2f\n",t,y);
    //Se cierra el archivo
    fclose(pf);

    //Altura máxima que alcanza el primer cohete
    alturamax(2.7E7, 1.1E5, 1.5E6, 2.248E-4, t);

    //Características del segundo cohete
    printf("El nombre del cohete es Ahau Kin \n");
    printf("Empuje del cohete E0 %f \n",2.7E7);
    printf("Consumo específico del empuje TSFC %lf \n",2.248E-4);
    printf("Coeficiente de forma CD %f \n",61.27);
    printf("Sección transversal del cohete A %f \n",201.06);
    printf("Masa del propulsor m0%f \n",1.1E5);
    printf("Masa inicial del combustible mf0%f \n",1.5E6);
    while ((y>=0)&&(v<0)){
        //Generando bandera para detectar el momento en el que el combustible es nulo.
        if(te(2.248E-4,2.7E7,1.5E6)){
            //El empuje se hace cero
            E = 0;
    }
    //Ejecutando el método numérico
        a+=ddy(1.1E5, 1.5E6, 2.248E-4, 2.7E7, t, v, 61.27, 201.06, a);
        v+=dy(a,v);
        t+=delta;
    }
    alturamax(2.7E7, 1.1E5, 1.5E6, 2.248E-4, t);
    //Características del tercer cohete
    printf("El nombre del cohete es Chac \n");
    printf("Empuje del cohete E0 %f \n",2.5E7);
    printf("Consumo específico del empuje TSFC %lf \n",2.248E-4);
    printf("Coeficiente de forma CD %f \n",70.25);
    printf("Sección transversal del cohete A %d \n",215);
    printf("Masa del propulsor m0%f \n",1.8E5);
    printf("Masa inicial del combustible mf0%f \n",2.1E6);
    while ((y>=0)&&(v<0)){
        //Generando bandera para detectar el momento en el que el combustible es nulo.
        if(te(2.248E-4,2.5E7,2.1E6)){
            //El empuje se hace cero
            E = 0;
    }
    //Ejecutando el método numérico
        a+=ddy(1.8E5, 2.1E6, 2.248E-4, 2.5E7, t, v, 70.25, 215.00, a);
        v+=dy(a,v);
        t+=delta;
    }
    alturamax(2.7E7, 1.1E5, 1.5E6, 2.248E-4, t);
    return 0;
}
//Función de la latura
double y(double v){
    double rep;
    rep=53+v*t;
    return rep; 
}
//Función de la primera derivada, es decir, la velocidad. 
double dy(double a, double v){
    double rep;
    rep=a*t;
    return rep; 
}
//Función de la segunda derivada, es decir, la aceleración.
double ddy(double m0, double mf0, double TSFC, double E0, double t0, double v, double CD, double A, double a){
    double rep;
    rep = (1/mc(m0,mf0,TSFC,E0,t0))*(E0 - fa(y(v),CD,A,a)-mc(m0,mf0,TSFC,E0,t0)*g(v));
    return rep;
}
//La altura máxima se alcanza cuando la velocidad es cero. Y por la ecuación v= v0+at, donde v0=0, también es el punto donde la aceleración es 0. 
//Despejando para la altura. 
double alturamax(double E0, double m0, double mf0, double TSFC, double t0){
    double altura;
    altura = sqrt(G*MT*E0/mc(m0,mf0,TSFC,E0,t0)) - RT;
    printf("La altura máxima es %f",altura);
}
//Función para la variación de la masa del cohete.
//Se encuentra la solución de la ecuación diferencial para la variación del consumo del combustible por el método analítico. 
double mc(double m0, double mf0, double TSFC, double E0, double t0){
    double rep;
    rep = m0+mf0-TSFC*E0*t0;
    return rep;
}
//Función para la gravedad en función de la altura
double g(double v){
    double rep;
    double d = (RT+y(v))*(RT+y(v));
    rep = G*MT/d;
    return rep;
}
//Función para la fricción de la atmósfera.
double fa(double v, double CD, double A, double a){
    double rep;
    double alt = T0/L;
    if (y>=alt){
        p(v)==0;
    }
    //Se verifica el valor absoluto de la primera derivada.
    rep = (1/2)*p(v)*CD*A*v;
    (v<0)?v=-v:v;
    rep = rep*v;
    return rep;
}
//Función para modelar la densidad del aire.
double p(double v){
    double exp;
    exp = g0/R*L;
    double rep;
    rep = P0/R*T0*pow(1-L*y(v)/T0, exp);
    return rep;
}
//Función bandera
double te(double TSFC, double E0, double mf0){
    double rep;
    rep = TSFC*E0/mf0;
    return rep;
}

