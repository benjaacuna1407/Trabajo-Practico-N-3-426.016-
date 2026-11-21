#include <stdio.h>

#define PI 3,1415

float calcularAreaRectangulo(float lon, float alt);
float calcularPerimetroRectangulo (float lon, float alt);
float calcularAreaCirculo (float radio);
float calcularPerimetroCirculo (float radio);
void imprimirResultados (float area, float per, int opc);

int main (void){
	int opc;
	float lon, alt, radio, per, area;
	
	do {
		printf("Ingrese la figura que desea calcular (1: rectángulo, 2: círculo): ");
		scanf("%d", &opc);
		
		if (opc != 1 && opc !=2) {
			printf("\n\nLa opcion elegida no es válida");
		}
		
	} while(opc != 1 && opc !=2);
	
	if (opc == 1) {
		printf("\n\nOpcion de rectángulo seleccionada");
		
		do {
			
			printf("\n\nIngrese la longitud del rectángulo: ");
			scanf("%f", &lon);
			
			printf("\n\nIngrese la altura del rectángulo: ");
			scanf("%f", &alt);
			
			if (lon < 0 || alt < 0){
				printf("\n\nPor favor, no ingrese numeros negativos");
			}
			
		} while(lon < 0 || alt < 0);
		
		area = calcularAreaRectangulo(lon, alt);
		per = calcularPerimetroRectangulo(lon, alt);
		
		imprimirResultados(area, per, opc);
		
	}
	
	else {
		printf("\n\nOpcion de círculo seleccionada");
		
		do {
			
			printf("\n\nIngrese el rádio del círculo: ");
			scanf("%f", &radio);
			
			if (radio < 0) {
				
				printf("\n\nPor favor, no ingrese número negativos");
			};
		} while(radio < 0);
		
		area = calcularAreaCirculo(radio);
		per = calcularPerimetroCirculo(radio);
		
		imprimirResultados(area, per, opc);
		
	}
	
	return 0;
	
}
	
	float calcularAreaRectangulo(float lon, float alt) {
		int resultado;
		
		resultado = lon * alt;
		
		return resultado;
	}
	
	float calcularPerimetroRectangulo(float lon, float alt){
	    int Resultado;
	
	    Resultado = 2 * (lon + alt);
	
	    return Resultado;
	
	}
		
		
	float calcularAreaCirculo (float radio) {
		int resultado;
			
		resultado = PI * radio * radio;
			
		return resultado;
		
	}
		
	
	float calcularPerimetroCirculo (float radio) {
		int Resultado;
		
		Resultado = 2 * PI * radio;
		
		return Resultado;
	}
	
	
	void imprimirResultados (float area, float per, int opc) {
		
		if (opc == 1) {
			printf("\n\nEl área del rectángulo es: %.2f", area);
			printf("\n\nEl perímetro del rectángulo es: %.2f", per);
		}
		
		else {
			printf("\n\nEl área del círculo es: %.2f", area);
			printf("\n\nEl perímetro del círculo es: %.2f", per);
		}
	}
	


