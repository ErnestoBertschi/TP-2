#include <stdio.h>

int main() {
	float numeros[10];
	float suma = 0;
	float promedio;
	
	printf("Ingresar 10 números:\n");
	for (int i = 0; i < 10; i++) {
		scanf("%f", &numeros[i]);
		suma += numeros[i];
	}
	
	promedio = suma / 10;
	
	printf("El promedio es: %.2f\n", promedio);
	
	return 0;
}
