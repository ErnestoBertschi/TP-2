#include <stdio.h>
#include <math.h>

int main() {
	int a, b, c;
	printf("Ingrese los coeficientes\n");
	printf("a: ");
	scanf("%d", &a);
	printf("b: ");
	scanf("%d", &b);
	printf("c: ");
	scanf("%d", &c);
	
	int discriminante = b * b - 4 * a * c;
	
	if (discriminante < 0) {
		printf("Error: Soluciones complejas.\n");
	} else {
		int raiz1 = (-b + sqrt(discriminante)) / (2 * a);
		int raiz2 = (-b - sqrt(discriminante)) / (2 * a);
		printf("Las soluciones son: x1 = %d, x2 = %d\n", raiz1, raiz2);
	}
	
	return 0;
}
