#include <stdio.h>
#include "Function.h"  // int data ';' 가 들어가 있음 .

#define SIZE 100  
// 매크로의 경우 자료형이 존재하지 않으므로  
// 메모리 공간을 가지고 있지 않음 .


int level;  // 전역 변수 (BSS 메모리 영역 : 초기화가 이루어지지 않은 전역 변수 )
			// 전역 변수는 직접 초기화 하지 않게 되면 0이라는 값으로 초기화가 됨 .

int stage = 1;	// 전역 변수 (초기화가 이루어진 메모리 영역)

void Stage()
{
	stage++;


}

void Increase()
{
	
	// 정적 변수는 단 한 번만 초기화가 이루어짐.

	static int score = 0;

	score++;
	printf("score 변수의 값 : %d\n", score);

}

int main()
{
#pragma region 전처리기
	// 프로그램이 컴파일되기 이전에 프로그램에 대한
	// 사전 처리를 하는 과정.

	// 전처리기는 컴파일러가 아닌 선행처리기에 의해서 
	// 처리가 되는 문장이기에 명령문 끝에 ";" 사용 안함.

#pragma endregion


#pragma region 변수의_범위

#pragma region 지역_변수

	// 블록 내에서 선언된 변수로 블록 내에서만 유효하며
	// 블록이 종료되면 메모리에서 사라지는 특성을 가지고 있음.


	/*
	int data = 100;						// {} 바깥에 있는 data 변수 
	
	{
		int data = 999;					//{} 안에  있는 data 변수
		printf("{} 안에 있는 data의 값 : %d\n", data);  
	}

	printf("{} 바깥에 있는 data의 값 : %d\n", data);
	*/



#pragma endregion

#pragma region 전역_변수
	// 프로그램 어디에서나 접근 할 수 있으며, 프로그램이 
	// 종료 되어야만 메모리에서 사라지는 특징을 지니고 있음 .
	

	/*
	Stage();

	printf("전역 변수 stage의 값 : %d\n", stage);	  

	stage = 10;

	printf("전역 변수 stage의 값 : %d\n", stage);
	*/	   


#pragma endregion

#pragma region 정적_변수
	
	// 프로그램이 실행 될 때 메모리에 올라가게 되며, 지역 변수의 특징과 
	// 전역 변수의 특징을 가지고 있는 변수.
	/*
	Increase();
	Increase();
	Increase();
	Increase();
	Increase();
	Increase();
	Increase();
	*/

	


#pragma endregion





#pragma endregion

#pragma region 소수
	//1. 입력할 수 있는 변수를 선언.
	//2. 값을 입력
	//3.  반복문을 사용하여 소수 판정
	//4. 내가 입력한 값이 소수인지 아닌지 판별

	/*
	int num,count;

	printf("정수를 입력하시오 : ");
	scanf_s("%d", &num); 
	count = 0;

	for (int a = 2; a < num; a++)
	{
		if (num % a == 0)
		{
			count++;
			break;
		}
	}

	if (count == 0)
	{
		printf("%d : 소수입니다.\n", num);
	}
	else
	{
		printf("%d : 소수가 아닙니다.\n", num);
	}
	*/
		
#pragma endregion

#pragma region 매크로

	// 프로그램 내에서 특정한 데이터와 문자열로 정의되고 
	// 처리되는 과정.
	
	printf("SIZE 매크로의 값 : %d\n", SIZE);

	// 매크로의 과정은 컴파일 이전에 실행되며, 각 매크로가 
	// 실행이 될때 매크로의 대체 목록을 넣어야 하므로 프로그램의 
	// 크기가 커지게 됨.

#pragma endregion

   

	return 0;
}


































