#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <windows.h>

#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80	  

void GotoXY(int x, int y)
{
	// x , y ��ǥ ����
	COORD position = { x,y };

	// Ŀ�� �̵� �Լ� 
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);

}

typedef struct Student
{
	char name[10];
}Student;




#define WIDTH 11
#define HEIGHT 11



char maze[WIDTH][HEIGHT];

typedef struct Player
{
	int x;
	int y;
	const char* shape;

}Player;

void CreateMaze()
{
	//0: ����� (" ")
	//1: ��(��)
	//2: Ż�ⱸ(��)

	strcpy(maze[0], "1111111111");
	strcpy(maze[1], "1011111001");
	strcpy(maze[2], "1011000011");
	strcpy(maze[3], "1000001111");
	strcpy(maze[4], "1110101101");
	strcpy(maze[5], "1110101101");
	strcpy(maze[6], "1010100001");
	strcpy(maze[7], "1010111101");
	strcpy(maze[8], "1010110001");
	strcpy(maze[9], "1000120111");
	strcpy(maze[10], "1111111111");
}

void Render()
{

	for (int i = 0; i < WIDTH; i++)
	{
		for (int j = 0; j < HEIGHT; j++)
		{

			if (maze[i][j] == '1')
			{
				printf("��");
			}
			else if (maze[i][j] == '0')
			{
				printf("  ");
			}
			else if (maze[i][j] == '2')
			{
				printf("��");
			}




		}
		printf("\n");
	}
}

//player�� ����Ű�� �Է��� �޾� �����̰� ���ִ� �Լ� 
void Keyboard(char map[WIDTH][HEIGHT], Player* player)
{
	char key = 0;

	if (_kbhit)
	{
		key = _getch();
		system("cls");
		if (key == -32)
		{

			key = _getch();
		}

		switch (key)

		{
		case UP:
			if (maze[player->y - 1][player->x / 2] != '1')	// ���� �浹 �����ʴ´ٸ� ��� ���� 
			{
				player->y--;
			}
			break;

		case LEFT:
			if (maze[player->y][player->x / 2 - 1] != '1')
			{
				player->x -= 2;
			}

			break;

		case RIGHT:if (maze[player->y][player->x / 2 + 1] != '1')
		{
			player->x += 2;
		}

				  break;

		case DOWN:if (maze[player->y + 1][player->x / 2] != '1')
		{
			player->y++;
		}
				 break;

		}

	}
}
















int main()
{
	// Student student;

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

	Player player = { 2,1,"��" };


	// 1.�ʵ����� ����
	CreateMaze();

	while (1)
	{


		// 2. �ʵ����Ϳ� �ִ� ������ ���� ���.


		Render();
		GotoXY(player.x, player.y);

		printf("%s", player.shape);
		Keyboard(maze, &player);




	}
	return 0;
}















































