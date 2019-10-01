#include <stdio.h>
#include <string.h>

int main() {
	char numbers_str[255];
	char *p;
	
	scanf("%s", numbers_str);

	printf("%s\n", numbers_str);
	printf("%d\n", strlen(numbers_str));
	for(int i = 0; i < strlen(numbers_str); i++) {
		printf("%d: %d\n", i, numbers_str[i]);
	}
	printf("\n");

	p = strtok(numbers_str, " ");

	while(p != NULL) {
		puts(p);
		p = strtok(NULL, " ");
	}

	return 0;
}
