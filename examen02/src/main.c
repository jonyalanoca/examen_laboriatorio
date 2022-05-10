/*
 ============================================================================
 Name        : examen.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "validaciones.h"
#define TAM_HCODE 5
typedef struct{
	int dia;
	int mes;
	int anio;
}eFecha;
typedef struct{
	int id;
	char descripcion[20];
}eMarca;
typedef struct{
	int id;
	char nombreColor[20];
}eColor;
typedef struct{
	int id;
	int idMarca;
	int idColor;
	char caja;
}eAuto;
typedef struct{
	int id;
	char descripcion[25];
	float precio;
}eServicio;
typedef struct{
	int id;
	int patente;
	int idServicio;
	eFecha fecha;
}eTrabajo;

int main(void) {
	setbuf(stdout,NULL);
	eMarca marcas[TAM_HCODE]={
		{1000, "Renault"},
		{1001, "Ford"},
		{1002, "Fiat"},
		{1003, "Chevrolet"},
		{1004, "Peugeot"}
	};
	eColor colores[TAM_HCODE]={
			{5000,"Negro"},
			{5001,"Blanco"},
			{5002,"Rojo"},
			{5003,"Gris"},
			{5004,"Azul"}
	};
	eServicio servicios[TAM_HCODE]={
			{20000,"Lavado",450},
			{20001,"Pulido",500},
			{20002,"Encerado",600},
			{20003,"Alineado",1200},
			{20004,"Completo",2200}
	};
	int numero;
	cargarValidarEntero("ingrese un numero entero",&numero);
	return EXIT_SUCCESS;
}
