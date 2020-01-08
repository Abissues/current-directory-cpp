#include <string.h>
#include <stdio.h>
#include <windows.h>
#define BUFFER_SIZE 0
int main(int argc,char *argv[]) {
		char buffer[BUFFER_SIZE];
		strcpy(buffer,argv[0]);
		printf("\nbuffer is %s\n",buffer);
		system("PAUSE");
		return 0;}
