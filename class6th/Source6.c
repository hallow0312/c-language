#include <stdio.h>


void main()
{

#pragma region 주소 연산자
	// 변수의 주소 값을 반환하는 연산자.

	// int data = 10;

	// %p 메모리의 주솟값을 나타내는 연산자.
	// printf(" data 변수의 주솟값: %p", &data);	    //&data : data의 '시작' 주솟값을 표현 

	// 데이터의 주소 값은 해당 데이터가 저장된 메모리 
	// 의 시작 주소를 의미하며, 메모리의 공간은 1byte
	// 의 크기로 나누어 표현.

	// 변수의 메모리 공간은 프로그램이 실행될 때 마다 
	// 바뀌며, 여러 개의 변수가 있을 때 서로 고유의 
	// 메모리 공간을 가지고 있음 .

#pragma endregion

#pragma region scanf_s()함수
	// 표준 입력 함수로 , 여러 종류의 데이터를 다양한
	// 서식에 맞추어 입력해주는 함수 .

	//int count = 0;


	//scanf_s("%d", &count); 

	// 표준 입력 함수로 데이터를 입력하게 되면 버퍼에 
	// 데이터를 보관하였다가 입력하는 순간 의 
	// 내용을 프로그램에 전송

	//printf("count  변수의 값은 : %d\n", count); 

	// 표준 입력 함수는 입력을 수행할 때 까지 다음
	// 작업으로 넘어갈 수 없습니다 .



#pragma endregion

#pragma region star_tower

	// 입력 --> 3
	// *
	// **
	// ***


	//int star = 0;
	//scanf_s("%d", &star);				  //star = 입력하는 변수 
	//
	//for (int a = 1 ; a<=star; a++)		  
	//{
	//	
	//	for (int b = 1; b <= a; b++)		// a가 1일때  b<=1 이니 '*' 1번 출력   --> *
	//	{									// a 가 2일때 b<=2 이니 '*' 2번 출력   --> **
	//		printf("*");					// 				.
	//	}									//				.
	//	printf("\n");						// 이후 a 가 star일때 까지 '*'출력						 
	//}

#pragma endregion

#pragma region 복습

#pragma region startower응용 연습

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
	****    만들기
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

	// 피라미드 모양

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

//뒤집힌 피라미드 모양

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


	// 다이아몬드 

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



































