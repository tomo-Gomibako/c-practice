#include <stdio.h>

int fibonacci(int n) {
	if(n < 2) {
		return 1;
	}
	return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
	for(int i = 0; i < 30; i++) {
		printf("%d %d\n", i, fibonacci(i));
	}
	return 0;
}
