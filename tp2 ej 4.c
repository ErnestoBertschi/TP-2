#include <stdio.h>

int main() {
	int numero;
	int factorial = 1;
	
	printf("Ingrese un número entero: ");
	scanf("%d", &numero);
	
	if (numero < 0) {
		printf("El número debe ser positivo.\n");
	} else {
		for (int i = 1; i <= numero; i++) {
			factorial *= i;
		}
		printf("El factorial de %d es: %u\n", numero, factorial);
	}
	
	return 0;
}
