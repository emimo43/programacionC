#include <stdio.h>

int main()
{
	/*
		Reglas nombres variables en C
		1. Sensible a mayusculas / minusculas
		2. No podemos usar palabras reservadas (keyword)
		3. Como buena practica usar notacion altas - bajas (camello)
		4. Debe iniciar con letras o _
		5. No debe iniciar con numeros o caracteres especiales
		6. Despues del primer caracter, podemos usar _ , letras o numeros
		7. Los nombres no puede contener espacios en blanco
		8. Se recomienda usar nombres descriptivos, no una sola letra
	*/
	int miVariable = 10;
	//printf("%d\n", miVAriable); //Arroja error (C es sensible a mayusculas y minusculas)
	
	//int for = 20; // Arroja un error por uso indebido de keyword
	
	int MiVariable = 30; // Aunque es validdo, no es buena practica
	
	//Notacion altas-bajas
	int miVariableEntera = 40;
	
	// Uso de guion bajo al inicio
	int _miVariable = 50;
	int mi_variable = 60;
	
	// Utilizar numeros pero despues del primer caracter
	//int 1Mivariable = 70; genera error
	int miVariable1 = 80;
	
	// Nombres descriptivos
	int sm = 60;
	int segundosPorMinuto = 60;
	
	return 0;
}

