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
#define G 6.693E-11, RT 6.378E6, MT 5.9736E24, 287.06, L 6.5E-3, g0 9.81, T0 288.15, P0 101325

//Prototipos de funciones
float mc(float m0, float TSFC, float E0, float t0)
float g(float y);
float fa(float p(), float CD, float A, float dy);
float p(float y);
//Se muestran los resultados en pantalla
void main(){
    float y=53, delta=0.1, t=0;
    //Características del primer cohete
    printf("El nombre del primer cohete es Ah Mun \n");
    printf("Empuje del cohete E0 %f \n",3E7);
    printf("Consumo específico del empuje TSFC %f \n",3.248E-4);
    printf("Coeficiente de forma CD %f \n",61.27);
    printf("Sección transversal del cohete A %f \n",201.06);
    printf("Masa del propulsor m0%f \n",1.1E5);
    printf("Masa inicial del combustible mf0%f \n",1.5E6);
    while ((y>=0)&&(dy<0)){
        //Generando bandera para detectar el momento en el que el combustible es nulo.
        if()
        
    }
    void alturamax(float E0);

    //Características del segundo cohete
    printf("El nombre del cohete es Ahau Kin \n");
    printf("Empuje del cohete E0 %f \n",2.7E7);
    printf("Consumo específico del empuje TSFC %lf \n",2.248E-4);
    printf("Coeficiente de forma CD %f \n",61.27);
    printf("Sección transversal del cohete A %f \n",201.06);
    printf("Masa del propulsor m0%f \n",1.1E5);
    printf("Masa inicial del combustible mf0%f \n",1.5E6);

    //Características del tercer cohete
    printf("El nombre del cohete es Chac \n");
    printf("Empuje del cohete E0 %f \n",2.5E7);
    printf("Consumo específico del empuje TSFC %lf \n",2.248E-4);
    printf("Coeficiente de forma CD %f \n",70.25);
    printf("Sección transversal del cohete A %f \n",215);
    printf("Masa del propulsor m0%f \n",1.8E5);
    printf("Masa inicial del combustible mf0%f \n",2.1E6);

}

//La altura máxima se alcanza cuando la velocidad es cero. Y por la ecuación v= v0+at, donde v0=0, también es el punto donde la aceleración es 0. 
//Despejando para la altura. 
void alturamax(float E0,mc(m0,TSFC,E0,t0)){
    float altura;
    altura = sqrt(G*MT*E0/mc(m0,TSFC,E0,t0)) - RT;
    printf("La altura máxima es %f",altura);
}
//Función para la variación de la masa del cohete.
//Se encuentra la solución de la ecuación diferencial para la variación del consumo del combustible por el método analítico. 
float mc(float m0, float TSFC, float E0, float t0){
    float rep;
    rep = m0 - TSFC*E0*t0;
    return rep;
}
//Función para la gravedad en función de la altura
float g(float y){
    float rep;
    float d = (RT+y)*(RT+y);
    rep = G*MT/d;
    return rep;
}
//Función para la fricción de la atmósfera
float fa(float p(), float CD, float A){
    float rep;
    if (y >= T0/L){
        p=0
    }
    //Se verifica el valor absoluto de la primera derivada.
    rep = 1/2 p*CD*A*dy;
    (dy<0)?dy=-dy:dy;
    rep *= dy;
    return rep;
}
//Función para modelar la densidad del aire
float p(float y){
    float exp;
    exp = g0/R*L;
    float rep;
    rep = P0/R*T0*pow(1-L*y/T0, exp);
    return rep;
}

