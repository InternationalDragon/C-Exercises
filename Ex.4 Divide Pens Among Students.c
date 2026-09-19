#include <stdio.h>

int main() {

	int penNumber = 14;
	int studentNumber = 3;
		
		int penDivided = penNumber / studentNumber;
		printf("%d\n", penDivided);

		int penRemainder = penNumber % studentNumber;
		printf("%d", penRemainder);

		return 0;
}