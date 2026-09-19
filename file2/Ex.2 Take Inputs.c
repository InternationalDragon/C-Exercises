#include <stdio.h>

int main() {

	int number1;
	double number2;

	scanf_s("%d", &number1);
	scanf_s("%lf", &number2);

		printf("%d\n", number1);
		printf("%.2lf", number2);

	return 0;
}
