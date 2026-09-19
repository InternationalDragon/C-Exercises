#include <stdio.h>

int main() {

	double salary;
	double bonus;
	double income;

	printf("Enter your salary: ");
	scanf_s("%lf", &salary);
	
	printf("Enter your bonus: ");
	scanf_s("%lf", &bonus);
		income = salary + bonus;
		printf("%.2lf", income);

	return 0;
}

