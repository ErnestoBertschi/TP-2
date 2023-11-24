#include <stdio.h>

int main() {
	int n, numero;
	
	printf("Ingresar Cantidad de Numeros a ver: ");
	scanf("%d", &n);
	
	printf("Ingrese el primer número: ");
	scanf("%d", &numero);
	
	int maximo = numero;
	int minimo = numero;
	
	for (int i = 1; i < n; i++) {
		printf("Ingrese el siguiente número: ");
		scanf("%d", &numero);
		
		if (numero > maximo) {
			maximo = numero;
		} else if (numero < minimo) {
			minimo = numero;
		}
	}
	
	printf("El máximo es: %d\n", maximo);
	printf("El mínimo es: %d\n", minimo);
	
	return 0;
}
