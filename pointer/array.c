#include <stdio.h>
#include <stdlib.h>

int reduce(int *arr, size_t n, int (*f)(int, int), int initial) {
	int ret = f(initial, arr[0]);
	for(int i = 1; i < n; i++) {
		ret = f(ret, arr[i]);
	}
	return ret;
}

int *map(int *arr, size_t n, int (*f)(int)) {
	// ローカル変数のポインタをreturnしてはいけない
	// mallocでメモリを確保して返す
	int *ret = malloc(sizeof(int) * n);
	for(int i = 0; i < n; i++) {
		ret[i] = f(arr[i]);
	}
	return ret;
}

int print_array(int *arr, size_t n) {
	for(int i = 0; i < n; i++) {
		if(i != 0) {
			printf(", ");
		}
		printf("%d", arr[i]);
	}
	printf("\n");
}

int add(int a, int b) {
	return a + b;
}

int square(int a) {
	return a * a;
}

int main() {
	int arr[] = { 0, 2, 4, 6, 8 };
	int N = sizeof arr / sizeof arr[0];

	for(int i = 0; i < N; i++) {
		printf("arr[%d]: %d\n", i, *(arr + i));	// arr[i] equals *(arr + i)
	}

	printf("sum: %d\n", reduce(arr, N, add, 0));
	printf("mapped: ");

	int *mapped = map(arr, N, square);
	print_array(mapped, N);
	// mallocで確保したメモリは使い終わったら必ずfree()で解放する
	free(mapped);

	return 0;
}
