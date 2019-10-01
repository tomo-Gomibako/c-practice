#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	char name[20];
	scanf("%s", name);
	if(name[0] == 0) {
		strcpy(name, "anonymous");
	}
	name[0] = toupper(name[0]);
	printf("Hello, %s!\n", name);
	return 0;
}
