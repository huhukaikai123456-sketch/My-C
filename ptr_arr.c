#include <stdio.h>

int main() {
	int arr[5] = {11, 22, 33, 44, 55};
	int *p = arr;

	printf("Start the tour through the pointer: \n");

	for (int i = 0; i <5; i++) {
		printf("The number in the %d drawer is %d, It's address is: %p\n", i + 1, *(p + i), (p + i));
	}

	return 0;
}
