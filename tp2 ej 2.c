#include <stdio.h>

int main() {
	int numeros[10];
	int divisibles = 0;
	
	printf("Ingrese 10 n�meros enteros:\n");
	for (int i = 0; i < 10; i++) {
		scanf("%d", &numeros[i]);
	}
	
	for (int i = 0; i < 10; i++) {
		if (numeros[i] % 3 == 0) {
			divisibles++;
		}
	}
	
	printf("La cantidad de n�meros divisibles es: %d\n", divisibles);
	
	return 0;
}
