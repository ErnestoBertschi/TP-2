#include <stdio.h>

int fibonacci(int n) {
	if (n <= 2) {
		return 1;
	} else {
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}

int main() {
	int n;
	printf("Ingrese el valor de n: ");
	scanf("%d", &n);
	
	if (n <= 0) {
		printf("El valor de n debe ser mayor a cero.\n");
	} else {
		printf("El enésimo término de n=%d es: %d\n", n, fibonacci(n));
	}
	getchar();
	return 0;
}


