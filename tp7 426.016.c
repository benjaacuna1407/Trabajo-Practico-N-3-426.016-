//https://github.com/benjaacuna1407/Trabajo-Practico-N-3-426.016-.git

#include <stdio.h>

#define TAM 5

int main() {
	int codigos[TAM];
	float precios[TAM];
	int i;
	int posMayor = 0, posMenor = 0;
	
	printf("Ingrese %d productos, se solicitará el código y precio:\n", TAM);
	
	for (i = 0; i < TAM; i++) {
		do {
			printf("\n\nIngrese el código de barras (1-999999999): ");
			scanf("%d", &codigos[i]);
			
			if (codigos[i] < 1 || codigos[i] > 999999999) {
				printf("Error. El código de barras debe estar entre 1 y 999999999\n");
			}
		} while (codigos[i] < 1 || codigos[i] > 999999999);
		
		do {
			printf("Ingrese el precio: ");
			scanf("%f", &precios[i]);
			
			if (precios[i] < 0) {
				printf("Error. El precio no puede ser negativo\n\n");
			}
		} while (precios[i] < 0);
		
	}
	
	printf("\n\nCódigo    Precio\n");
	for (i = 0; i < TAM; i++) {
		printf("%9d %10.2f\n", codigos[i], precios[i]);
	}
	
	for (i = 1; i < TAM; i++) {
		if (precios[i] > precios[posMayor]) {
			posMayor = i;
		}
		if (precios[i] < precios[posMenor]) {
			posMenor = i;
		}
	}
	
	printf("\nMás caro: [%d] %.2f\n", codigos[posMayor], precios[posMayor]);
	printf("Más barato: [%d] %.2f\n", codigos[posMenor], precios[posMenor]);
	
	return 0;
}

