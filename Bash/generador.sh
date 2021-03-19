#!/bin/bash

:<<'Header'
#Autor: Dayrin Cardona
#Tipo: Script de Bash
#Ejecutar: ./generador.sh
#Resumen: Generador automático de comentarios para scripts de C
Header

#bienvenida
echo "**** Generador de archivos de C ****"
#obtener y validar el nombre de archivo
read -p "Ingrese el nombre del archivo sin el .c: " nombre 
fnombre=$nombre".c"
if [ -z $nombre ]; then
    echo "No ingresó un nombre válido"
    exit 2
fi
if [ -f $fnombre ]; then
    echo "El archivo ya existe"
    exit 2
fi

#obtener información del sistema
version=$(gcc --version | head -n 1)
fecha=$(date)
#crear nuestro contenido dentro del archivo .c
echo "/*" >> $fnombre
echo "Autor: Dayrin Cardona " >> $fnombre
echo "Compilador: " $version >> $fnombre
echo "Compilado: gcc " $fnombre "-o" $nombre >> $fnombre
echo "Fecha: " $fecha >> $fnombre
echo "Librerías: stdio (u otras)" >> $fnombre
echo "Resumen" >> $fnombre
echo "Entradas" >> $fnombre
echo "Salidas" >> $fnombre
echo "*/" >> $fnombre
echo "//Librerías" >> $fnombre
echo "#include <stdio.h>" >> $fnombre
echo "//Pasos del pseudocódigo" >> $fnombre
echo "1. Definición del problema" >> $fnombre
echo "2. Análisis del problema: datos de entrada" >> $fnombre
echo "3. Análisis del problema: datos de salida" >> $fnombre
echo "4. Operaciones para resolver el problema" >> $fnombre
echo "5. Escribir resultados" >> $fnombre
