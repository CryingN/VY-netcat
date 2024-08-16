//#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int main() {
	char a[1];
	char b[1];
	printf("test:");
	scanf("%s",a);
	printf("%s\n",a);
	printf("and:");
	scanf("%s",b);
	printf("%s\n",b);
	//system("/bin/sh");
	return 0;
}

