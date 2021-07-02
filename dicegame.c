#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int a, b;
	char c[100];

	printf("What is name?\n");
	scanf("%s", c);
	printf("Hello %s!\n", c);
	srand(time(NULL));
	a = rand() % 6 + 1;
	b = rand() % 6 + 1;
	printf("Rolling the dice...\n");
	printf("Die 1: %d\n",a);
	printf("Die 2: %d\n",b);
	printf("Total value: %d\n", a + b);
	if (a + b >= 7)printf("You won!\n");
	else printf("You lost!\n");
	return 0;
}