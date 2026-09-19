#include <stdio.h>

int main() {

	double celsius;
	double fahrenheit;

	printf("Enter Celsius: ");
	scanf_s("%lf", &celsius);
		
		fahrenheit = (celsius * 1.8) + 32;
		printf("Fahrenheit: %.2lf", fahrenheit);

	return 0;
}
