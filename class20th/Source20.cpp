#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>
#include <windows.h>    

#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80

//���� ũ�� 
int width = 100;
int height = 60;


// ���۸� ����.
HANDLE screen[2];

//screen[0] front buffer
//screen[1] back buffer

// Handle �ε����� �����ؼ� ���۸� ��ü��Ű�� ���� 
int screenIndex = 0;

void GotoXY(int x, int y)
{
	// x , y ��ǥ ����
	COORD position = { x,y };

	// Ŀ�� �̵� �Լ� 
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);

}

//���� �ʱ�ȭ �Լ�
void ScreenInit()
{
	CONSOLE_CURSOR_INFO cursor;

	//������ ���� ������, ���� ������

	COORD size = { width, height };

	//left ,top, right, bottom
	SMALL_RECT rect{ 0,0,width - 1,height - 1 };

	//ȭ�� 2�� ����
	// front buffer
	screen[0] = CreateConsoleScreenBuffer
	(
		GENERIC_READ | GENERIC_WRITE,
		FILE_SHARE_READ | FILE_SHARE_WRITE,
		NULL,
		CONSOLE_TEXTMODE_BUFFER,
		NULL
	);

	//������ ����� �����ϴ� �Լ�
	SetConsoleScreenBufferSize(screen[0], size);

	SetConsoleWindowInfo(screen[0], TRUE, &rect);


	// back buffer
	screen[1] = CreateConsoleScreenBuffer
	(
		GENERIC_READ | GENERIC_WRITE,
		FILE_SHARE_READ | FILE_SHARE_WRITE,
		NULL,
		CONSOLE_TEXTMODE_BUFFER,
		NULL
	);

	//������ ����� �����ϴ� �Լ�
	SetConsoleScreenBufferSize(screen[1], size);

	SetConsoleWindowInfo(screen[1], TRUE, &rect);

	// Ŀ���� Ȱ��ȭ ����
	// false : ����(0)
	// true : ��(1)

	cursor.bVisible = false;
	SetConsoleCursorInfo(screen[0], &cursor);
	SetConsoleCursorInfo(screen[1], &cursor);
}
// ���� ��ü �Լ�
void FlipScreen()
{
	//���۴� �ϳ��� Ȱ��ȭ ��ų �� ���� .
	SetConsoleActiveScreenBuffer(screen[screenIndex]);

	screenIndex = !screenIndex;

}
// ��ü�� ���۸� �����ִ� �Լ� 

void ClearScreen()
{
	COORD coord = { 0,0 };

	DWORD dw;
	FillConsoleOutputCharacter
	(
		screen[screenIndex],
		' ',
		width * height,
		coord,
		&dw
	);
}

//���� ���� �Լ�
void ReleaseScreen()
{
	CloseHandle(screen[0]);
	CloseHandle(screen[1]);

}
// ���� ���۸��� ����ؼ� ����ϴ� �Լ� 
void PrintfScreen(int x, int y, const char* string)
{
	COORD cursorPosition = { x,y };

	DWORD dw;

	SetConsoleCursorPosition(screen[screenIndex], cursorPosition);

	WriteFile
	(
		screen[screenIndex],
		string,
		strlen(string),
		&dw,
		NULL
	);

}


int main()
{
	// ���� ���� �Լ� 
	// 0 : ����  1 : �Ķ�
	// 2 : �ʷ�  3 : ����
	// 4 : ����  5 : ����
	// 6 : ���  7 : ���  8 : ȸ��
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);

	//1. ���� �ʱ�ȭ
	ScreenInit();







	while (1)
	{
		PrintfScreen(5, 5, "A");

		// 2.���� ��ü 
		FlipScreen();
		// 3. ��ü�� ������ ���� ����
		ClearScreen();
	}

	ReleaseScreen();
	//4. ������ ����Ǿ��� �� ���� ���� 
	return 0;
}































































