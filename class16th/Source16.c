#define _CRT_SECURE_NO_WARNINGS  
#include <stdio.h>

#define BUFFER_SIZE 10000 
void LoadFile(const char* fileName)
{
	FILE* file = fopen(fileName, "r");
	// ��� ���
	// ���� ���

	char buffer[BUFFER_SIZE] = { 0, };

	fread(buffer, 1, BUFFER_SIZE, file);   //��ü ������ �о��ִ� �Լ� 

	printf("%s", buffer);

	fclose(file);
}


int main()
{

#pragma region ����_����

	//data.txt ������ �����ϰ� w(����) ���� ������. 
	//FILE* file = fopen("data.txt","w");

	//fputs("level 10", file);

	//// ������ �ݾ���.
	//fclose(file);

#pragma endregion

#pragma region ����_�̾��
	//data.txt ������ �����ϰ� a (�̾��) ���� ����.

	//FILE* file = fopen("data.txt","a");

	//fputs("\nHP 100", file);

	//// ������ �ݾ���.
	//fclose(file);
#pragma endregion

#pragma region ����_�б�
	// data.txt ������ �����ְ� r(�б�)���� ����
	LoadFile("Image/Dragon.txt");



#pragma endregion


	return 0;
}










































