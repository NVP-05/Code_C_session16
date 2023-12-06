#include<stdio.h>
int main(){
	FILE *file;
	char nd[100];
	int size;
	file = fopen("\\Users\\ADMIN\\Desktop\\ss16\\bt3.txt", "w");
	if(file != NULL){
		printf("Nhap so dong: ");
		scanf("%d", &size);
		getchar();
		for(int i = 0; i < size; i++){
			gets(nd);
			fprintf(file, "%s\n", nd);
		}
	}
	fclose(file);
	file = fopen("\\Users\\ADMIN\\Desktop\\ss16\\bt3.txt", "r");
	for(int i = 0; i < size; i++){
		fscanf(file, "%s", nd);
		printf("%s\n", nd);
	}
	fclose(file);
	return 0;
}
