// clang hello.c -o hello
#include <stdio.h>
int main(int argc,char *argv[],char *envp[]){
	printf("Filename: %s\n",argv[0]);
	printf("%s %s\n",argv[1],argv[2]);
	return 0;
}
