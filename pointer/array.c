#include <stdio.h>

int reduce(int *arr, size_t n, int (*f)(int, int), int initial) {
	int ret = f(initial, arr[0]);
	for(int i = 1; i < n; i++) {
		ret = f(ret, arr[i]);
	}
	return ret;
}

int add(int a, int b) {
	return a + b;
}

int main() {
	int arr[] = { 0, 2, 4, 6, 8 };
	int N = sizeof arr / sizeof arr[0];

	for(int i = 0; i < N; i++) {
		printf("arr[%d]: %d\n", i, *(arr + i));	// arr[i] equals *(arr + i)
	}

	printf("sum: %d\n", reduce(arr, N, add, 0));

	return 0;
}
