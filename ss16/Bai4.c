#include<stdio.h>
int main(){
	FILE *file;
	int count = 1;
	char text[1000];
	file = fopen("\\Users\\ADMIN\\Desktop\\ss16\\bt03.txt", "r");
	if(file == NULL){
		printf("Khong the mo tap tin\n");
		return 1;
	}
	while(fscanf(file, "%c", &text[count]) != EOF){
		printf("%c", text[count]);
		if(text[count] == '\n'){
			count++;
		}
	}
	printf("\nSo dong trong file la: %d\n", count);
	fclose(file);
	return 0;
}
