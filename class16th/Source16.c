#define _CRT_SECURE_NO_WARNINGS  
#include <stdio.h>

#define BUFFER_SIZE 10000 
void LoadFile(const char* fileName)
{
	FILE* file = fopen(fileName, "r");
	// 상대 경로
	// 절대 경로

	char buffer[BUFFER_SIZE] = { 0, };

	fread(buffer, 1, BUFFER_SIZE, file);   //전체 파일을 읽어주는 함수 

	printf("%s", buffer);

	fclose(file);
}


int main()
{

#pragma region 파일_쓰기

	//data.txt 파일을 생성하고 w(쓰기) 모드로 설정함. 
	//FILE* file = fopen("data.txt","w");

	//fputs("level 10", file);

	//// 파일을 닫아줌.
	//fclose(file);

#pragma endregion

#pragma region 파일_이어쓰기
	//data.txt 파일을 생성하고 a (이어쓰기) 모드로 설정.

	//FILE* file = fopen("data.txt","a");

	//fputs("\nHP 100", file);

	//// 파일을 닫아줌.
	//fclose(file);
#pragma endregion

#pragma region 파일_읽기
	// data.txt 파일을 열어주고 r(읽기)모드로 설정
	LoadFile("Image/Dragon.txt");



#pragma endregion


	return 0;
}










































