#include <stdio.h>


void main()
{

#pragma region �ּ� ������
	// ������ �ּ� ���� ��ȯ�ϴ� ������.

	// int data = 10;

	// %p �޸��� �ּڰ��� ��Ÿ���� ������.
	// printf(" data ������ �ּڰ�: %p", &data);	    //&data : data�� '����' �ּڰ��� ǥ�� 

	// �������� �ּ� ���� �ش� �����Ͱ� ����� �޸� 
	// �� ���� �ּҸ� �ǹ��ϸ�, �޸��� ������ 1byte
	// �� ũ��� ������ ǥ��.

	// ������ �޸� ������ ���α׷��� ����� �� ���� 
	// �ٲ��, ���� ���� ������ ���� �� ���� ������ 
	// �޸� ������ ������ ���� .

#pragma endregion

#pragma region scanf_s()�Լ�
	// ǥ�� �Է� �Լ��� , ���� ������ �����͸� �پ���
	// ���Ŀ� ���߾� �Է����ִ� �Լ� .

	//int count = 0;


	//scanf_s("%d", &count); 

	// ǥ�� �Է� �Լ��� �����͸� �Է��ϰ� �Ǹ� ���ۿ� 
	// �����͸� �����Ͽ��ٰ� �Է��ϴ� ���� �� 
	// ������ ���α׷��� ����

	//printf("count  ������ ���� : %d\n", count); 

	// ǥ�� �Է� �Լ��� �Է��� ������ �� ���� ����
	// �۾����� �Ѿ �� �����ϴ� .



#pragma endregion

#pragma region star_tower

	// �Է� --> 3
	// *
	// **
	// ***


	//int star = 0;
	//scanf_s("%d", &star);				  //star = �Է��ϴ� ���� 
	//
	//for (int a = 1 ; a<=star; a++)		  
	//{
	//	
	//	for (int b = 1; b <= a; b++)		// a�� 1�϶�  b<=1 �̴� '*' 1�� ���   --> *
	//	{									// a �� 2�϶� b<=2 �̴� '*' 2�� ���   --> **
	//		printf("*");					// 				.
	//	}									//				.
	//	printf("\n");						// ���� a �� star�϶� ���� '*'���						 
	//}

#pragma endregion

#pragma region ����

#pragma region startower���� ����

	/*
	int star = 0;
	scanf_s("%d", &star);
														*
	for (int a = 1; a <= star; a++)						**
	{													***
														****
														*****
		for (int b = 1; b <= a; b++)
		{
			printf("*");
		}
		printf("\n");
	}
	*/

	/*
	*****
	****    �����
	***
	**
	*

	*/




	/*
	int star = 0;
	scanf_s("%d", &star);

	for (int x=0; star > x; star--)
	{
		for (int y = 1; star >= y; y++)
		{
			printf("*");
		}
		printf("\n");
	}
	*/

	/*
	int line = 0;
	 scanf_s("%d", &line);

	for (int x = 0; x < line; x++)
	{
		for (int z = line-1; z > x ; z-- )									*
		{																   **
			printf(" ");												  ***
																		 ****
		}																*****
		for (int y=0 ; y< x+1; y++)
		{
			printf("*");
		}

		printf("\n");

	}
	*/

	// �Ƕ�̵� ���

//int line = 0;
//scanf_s("%d", &line);
//
//for ( int x = 0; x < line; x++)
//{
//	for (int z = line - 1; z > x; z--)
//	{
//		printf(" ");
//
//	}
//	for (int y = 0;  y < 2*x+1 ; y++)   
//	{
//		printf("*");
//	}
//
//	printf("\n");
// }

//������ �Ƕ�̵� ���

	//  int line = 0;
	//scanf_s("%d", &line);

	//for (int x = 0; x < line; x++)
	//{
	//	for (int z = 0 ; z < x; z++)
	//	{
	//		printf(" ");

	//	}
	//	for (int y = 2*line-2*x-1 ; y > 0;  y--)
	//	{
	//		printf("*");
	//	}

	//	printf("\n");
	//}


	// ���̾Ƹ�� 

//int line = 0;
//scanf_s("%d", &line);
//
//for (int x = 0; x < line; x++)
//{
//	for (int z = line - 1; z > x; z--)
//	{
//		printf(" ");
//
//	}
//	for (int y = 0; y < 2 * x + 1; y++)
//	{
//		printf("*");
//	}
//
//	printf("\n");
//}
//for (int x = 0; x < line; x++) 
//{
//	for (int z = 0; z < x; z++) 
//	{
//		printf(" "); 
//
//	}
//	for (int y = 2 * line - 2 * x - 1; y > 0; y--)
//	{ 
//		printf("*");
//	}
//
//	printf("\n");
//}

#pragma endregion






#pragma endregion





}



































