// clang return.c -o return
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
	char *temp,*temp1,*temp2;
	temp="test";  //Filename
	temp1="Funny"; 
	temp2="world";

	execl("hello",temp,temp1,temp2,NULL);
	printf("Error");
	return 0;
}
