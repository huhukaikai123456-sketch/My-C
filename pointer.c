#include <stdio.h>

int main() {
	int a = 100;
	int *p;
	
	p = &a;

	printf("a is: %d\n", a);
	printf("a's address is: %p\n", &a);
	printf("The address stored by pointer p is: %p\n", p);
        printf("The value accessed via pointer p is: %d\n", *p);

	return 0;
}
