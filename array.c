#include <stdio.h>

int main() {
        int scores[5] = {80, 90, 75, 85, 95};
	int sum = 0;

	for (int i = 0; i < 5; i++) {
		sum = sum + scores[i];
	}

	int average = sum / 5;
	printf("Total sum: %d\n", sum);
	printf("Average score: %d\n", average);

	return 0;
}
