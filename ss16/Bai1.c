#include<stdio.h>

//    C:\\Users\\ADMIN\\Desktop\\ss16\\bt01.txt

int main(){
	FILE *filePointer;
	char text[100];
	printf("Nhap chuoi ky tu bat ki: ");
	gets(text);
	filePointer = fopen("C:\\Users\\ADMIN\\Desktop\\ss16\\bt01.txt", "w+");
	fwrite(text, sizeof(char), sizeof(text), filePointer);
	fclose(filePointer);
	return 0;
}
