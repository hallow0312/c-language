#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h> // KEY
#include <windows.h> // Coordinate 

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

int main()
{
	char key = 0;
	int x, y;
	x = 5;
	y = 5;




	while (1)
	{
		GotoXY(x, y);
		printf("��");

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
			case UP: if (y > 0)
			{
				y--;
			}
				   break;
			case LEFT:
				if (x > 0)
				{
					x -= 1;
				}
				break;
			case RIGHT:	x += 2;

				break;
			case DOWN: y++;
				break;

			}

		}




	}








	//while (1)
	//{
	//	if (_kbhit)	  //Ű���� �Է�Ȯ�� (true/false)
	//	{
	//		key = _getch(); // key �Է��� �޾��ִ� �Լ�
	//	   
	//		//printf("�Է°� : %c\n", key); // Up :72 Left :75 Right 77 Down 80
	//		if (key == -32)
	//		{
	//			key = _getch();
	//		}
	//		

	//		switch (key)
	//		{
	//		case UP:  printf("UP\n");
	//			break;
	//		case LEFT:	printf("LEFT\n");
	//			break;
	//		case RIGHT:	printf("RIGHT\n");
	//			break;
	//		case DOWN:	printf("DOWN\n");
	//			break;
	//		
	//		}
	//	}
	//}


	return 0;
}














































