#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define WIDTH 11
#define HEIGHT 11

typedef struct Student
{
	char name[10];
}Student;

char maze[WIDTH][HEIGHT];

void CreateMaze()
{
	//0: ����� (" ")
	//1: ��(��)
	//2: Ż�ⱸ(��)
	
	strcpy(maze[0],  "1111111111");
	strcpy(maze[1],  "1001110011");
	strcpy(maze[2],  "1101111011");
	strcpy(maze[3],  "1101111011");
	strcpy(maze[4],  "1100000011");
	strcpy(maze[5],  "1111110111");
	strcpy(maze[6],  "1100000001");
	strcpy(maze[7],  "1100111101");
	strcpy(maze[8],  "1110111101");
	strcpy(maze[9],  "1110002111");
	strcpy(maze[10], "1111111111");
}

void Render()
{
	for (int i = 0; i < 11; i++)
	{
		for (int j = 0; j < 11; j++)
		{
			printf("%c", maze[i][j]); 
		}
		printf("\n");
	}
}




int main()		 
{
	Student student;

	// ù ��° �Ű�����
	// ������� ���� �迭�� �־���

	// �� ��° �Ű�����
	// �����ų ���ڿ��� ��.
	/*
	strcpy(student.name, "LEE"); 

	printf("student.name�� �� : %s\n", student.name);

	strcpy(student.name, "G");

	printf("student.name�� �� : %s\n", student.name);
	*/
	
	CreateMaze();
    Render();

	return 0;   
}














































