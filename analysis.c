#include <stdio.h>
int main() {

	int sum = 0;
	int flag = 0;
	int scores[8] = {10, 20, 30, 40, 50, 60, 70, 80};

	for (int i = 0; i < 8; i++) {
		sum = sum + scores[i];
	}
	flag = sum / 8;

	printf("sum = %d\n", sum);
	printf("flag = %d\n", flag);

	int max = 0;
	
	for (int i = 0; i < 8; i++) {
		if (max < scores[i]) {
			max = scores[i];
		}
	}
	printf("max = %d\n" , max);
	
	int count = 0;
	for (int i = 0; i < 8; i++) {
		if (scores[i] >= 60) {
			count++;
		}
	}
	printf("count = %d\n", count);

	return 0;
}

