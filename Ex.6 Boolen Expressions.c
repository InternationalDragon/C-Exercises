#include <stdio.h>
#include <stdbool.h>

int main() {

	int number;

	scanf_s("%d", &number);

	bool result = !(number % 5);
	printf("%d", result);

	return 0;
}