#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

/*
	Source by CPlusPlus (https://www.cplusplus.com)
	Modified For Learn by RK
	I.D.E : VS2022
*/

int main() {
	FILE* pFile;
	char sentence[256];

	printf("Enter sentence to append: ");
	fgets(sentence, 256, stdin);

	pFile = fopen("mylog.txt", "a");
	
	fputs(sentence, pFile);
	fclose(pFile);

	_getch();
	return 0;
}