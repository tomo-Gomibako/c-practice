#include <stdio.h>

int main() {
	int a = 0;
	// &はアドレス演算子
	printf("a: %d\n", a);
	printf("&a: %d\n\n", &a);

	// アドレスを格納する変数をポインタという
	// *はポインタ演算子
	int *b;
	b = &a;
	printf("b: %d\n", b);
	printf("*b: %d\n", *b);
	printf("&b: %d\n\n", &b);

	*b = 1;
	printf("a: %d\n", a);
	printf("b: %d\n", b);
	printf("*b: %d\n\n", *b);

	int **c;
	c = &b;
	printf("c: %d\n", c);
	printf("*c: %d\n", *c);
	printf("**c: %d\n", **c);
	printf("&c: %d\n\n", &c);

	int d = &a;
	printf("d: %d\n", d);
	// printf("*d: %d\n", *d);	// これができない
	printf("&d: %d\n\n", &d);

	return 0;
}
