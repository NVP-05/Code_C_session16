#include<stdio.h>
//C:\\Users\\ADMIN\\Desktop\\demoReadFile.txt
int main(){
//	FILE *filePointer;
//	char buffer[100];
//	// Su dung ham fopen de mo tep tin
//	filePointer = fopen("C:\\Users\\ADMIN\\Desktop\\demoReadFile.txt", "r");
//	
//	// Su dung ham fread de mo tep tin
//	fread(buffer, sizeof(char), sizeof(buffer), filePointer);
//	
//	printf("Noi dung van ban la: %s", buffer);
//	fclose(filePointer);
	
	
	//C:\\Users\\ADMIN\\Desktop\\demoWifi.txt
	FILE *filePointer;
	char buffer[] = "Tap trung di";
	char buffer2[100];
	// Su dung ham fopen de mo tep tin
	filePointer = fopen("C:\\Users\\ADMIN\\Desktop\\demoWifi.txt", "w+");
	
	// Su dung ham fseek di chuyen con tro den dau tep tin
	fseek(filePointer, SEEK_SET, 0);
	
	// Su dung ham fread de mo tep tin
	fread(buffer, sizeof(char), sizeof(buffer), filePointer);
	
	printf("%s", buffer2);
	
	//Ham dong file
	fclose(filePointer);
	
	return 0;
}
