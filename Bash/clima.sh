#!/bin/bash

:<<'Header'
#Autor: Dayrin Cardona
#Tipo: Script de Bash
#Ejecutar: ./clima.sh
#Resumen: Visualizador de clima en la consola
Header

#bienvenida
echo "**** Visualizador del clima ****"
#descargar el clima y colocarlo en un archivo
clima=$(curl -o archivo wttr.in/Guatemala)
#leer las primeras líneas del archivo en la consola
#eliminar archivo 
echo \n $clima
rm archivo


