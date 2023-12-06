#include<stdio.h>
//   C:\\Users\\ADMIN\\Desktop\\ss16\\bt01.txt
int main(){
	FILE *filePointer = NULL;
	char str[50];
	filePointer = fopen("C:\\Users\\ADMIN\\Desktop\\ss16\\bt01.txt", "r");
	if(filePointer != NULL){
		fscanf(filePointer, "%s", str);
		printf("%s", str);
	}
	fclose(filePointer);
	return 0;
}
