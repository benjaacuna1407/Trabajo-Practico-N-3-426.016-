#include <stdio.h>

int main(void) {
	float peso, alt, bmi;
	
	do{
	printf ("Ingrese su peso en kg: ");
	scanf ("%f", &peso);
	
	if (peso < 0) {
		printf("\nDebe ingresar un numero mayor a 0\n\n");
	}
	}
	while (peso < 0);
	
	do{
	printf ("\n\nIngrese su altura en metros: ");
	scanf ("%f", &alt);
	
	if (alt < 0) {
		printf ("\nDebe ingresar un numero mayor a 0\n");
	}
	}
	while (alt < 0);
	bmi = peso / (alt * alt);
	
	printf ("\n\nSu índice de masa corporal es: %.2f\n\n", bmi);
	printf ("Indice \t\t|\tCondición\n------------------------------\n<18.5\t\t|\tBajo peso\n18.5 a 24.9\t|\tNormal\n25.0 a 29.9\t|\tSobrepeso\n>=30\t\t|\tObesidad\n\n");
	
	if (bmi<18.5)
		printf ("Usted tiene bajo peso");
	
	else if (bmi>=18.5&&bmi<24.9)
		printf ("Usted tiene peso normal");
	
	else if (bmi>=25&&bmi<29.9)
		printf ("Usted tiene sobrepeso");
	
	else 
		printf ("Usted tiene obesidad");
	
	return 0;
}

