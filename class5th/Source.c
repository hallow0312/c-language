#include <stdio.h>


void main()
{

#pragma region 자료형_변환
	// 서로 다른 자료형을 가지고 있는 변수끼리 연산이
	// 이루어질 때 기존에 지정했던 자료형을 다른 자료형으로 
	// 변환하는 과정.

#pragma region 암묵적_형_변환
	// 서로 다른 자료형으로 연산이 이루어질 때 자료형의
	// 크기가 큰 자료형으로 변환되는 과정.

	//int integer = 10;
	//float decimal = 6.5f;
	//
	//printf("integer(정수형) + decimal(실수형) : %f \n", integer + decimal);

	// 표현 범위가 작은 데이터에 표현범위가 큰 데이터를 저장하게 되면
	// 암묵적으로 데이터 손실이 발생하게 됨.

	//integer = decimal ;
	//printf("integer 변수의 값 : %d \n ", integer );


#pragma endregion

#pragma region 명시적_형_변환
	// 연산이 이루어지기 전에 사용자가 '직접' 자료형을
	// 변환하는 과정.

	// 정수형 변수끼리 연산을 수행하게 되면 정수의 
	// 결과값만 가질 수 있다.

	/*
	int x = 5;
	int y = 2;

	float result = (float) x / y;
	printf("result 변수의 값: %f\n", result);
	*/


#pragma endregion


#pragma endregion

#pragma region 시프트_연산자

	// 비트 값을 주어진 숫자만큼 부호 방향으로 
	// 이동시키는 연산자.

	/*
	char data = 10;


	printf("data 변수를 왼쪽 2번 시프트 연산 결과: %d\n", data << 2);

	printf("data 변수의 값: %d\n", data );    //data 의 값은 변하지 않음: 10

	printf("data 변수를 오른쪽 3번 시프트 연산 결과: %d\n", data >> 3);

	data >>= 3;	     // data 변수에 오른쪽 3번 시프트를 대입

	printf("data 변수의 값: %d\n", data );	 // 대입 된 data 의 값이 나옴 : 1

				//char data = 10; --> {[0][0][0][0][1][0][1][0]  << 2} -->1. [0][0][0][1][0][1][0][0]  -->[0][0][1][0][1][0][0][0] : 40

			  //  char data = 10; --> {[0][0][0][0][1][0][1][0] >>3} -->
			   //1. [0][0][0][0][0][1][0][1]	--> 2. [0][0][0][0][0][0][1][0]--> 3. [0][0][0][0][0][0][0][1] : 1

	*/

#pragma endregion

#pragma region 부호_없는_자료형
	// 부호 비트를 제거하여 저장 가능한 
	// 양수의 범위를 2배 확장시키는 자료형 
	//char 크기는 1byte  unsigned char 크기는 양수의 범위를 2배 확장시킨것 --> 음수의 범위 x--> 1byte 그대로

	//unsigned char 의 양수 범위는 255까지 255: [1][1][1][1][1][1][1][1]   맨 왼쪽의 1이 음수가 아니게됨 	 256 : 0으로 나옴 

	//unsigned int alphabet = -1;      			

	//// %u: unsigned 자료형을 출력하는 서식 지정자 

	//printf("alphabet 변수의 값 : %d \n", alphabet); 

	//// [1111 1111][1111 1111][1111 1111][1111 1111] 

	//printf("alphabet 변수의 값 : %u \n", alphabet);

	//// [1111 1111][1111 1111][1111 1111][1111 1111] 

#pragma endregion




}
































