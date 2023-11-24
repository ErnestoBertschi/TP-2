#include <stdio.h>

int main() {
	int numero;
	int factorial = 1;
	
	printf("Ingrese un n�mero entero: ");
	scanf("%d", &numero);
	
	if (numero < 0) {
		printf("El n�mero debe ser positivo.\n");
	} else {
		for (int i = 1; i <= numero; i++) {
			factorial *= i;
		}
		printf("El factorial de %d es: %u\n", numero, factorial);
	}
	
	return 0;
}
