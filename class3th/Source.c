#include <stdio.h>


void main()
{
#pragma region 오버플로우
	// 특정한 자료형이 표현할 수 있는 최댓값의 범위를
	// 넘어서 연산을 수행하는 과정.


	// 127=[0][1][1][1][1][1][1][1]
	//   +
	//  3= [0][0][0][0][0][0][1][1]
	// ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ
	// -126=[1][0][0][0][0][0][1][0] --> -128+2=-126

	/*
	char data = 127 + 3;
	printf("데이터 변수의 값 :%d", data);
	*/

	// 오버플로우는 최댓값보다 더많은 값을 저장하게 되면 
	// 최솟값부터 최댓값을 넘어간 만큼 다시 계산함.




#pragma endregion

#pragma region 언더플로우
	// 특정한 자료형이 표현할 수 있는 최솟값의 범위를
	// 넘어서 연산을 수행하는 과정.

	/*
	char alphabet = -128 - 1;
	printf("alphabet 변수의 값: %d", alphabet);
	*/

	// -128= [1][0][0][0][0][0][0][0]
	//    +
	//   -1= [1][1][1][1][1][1][1][1]
	// ----------------------------------
	//  127= [0][1][1][1][1][1][1][1] 

	// 언더 플로우는 최솟값보다 더 작은 값을 저장하게 되면 최댓값부터
	// 최솟값을 넘어간 만큼 다시 계산함.
#pragma endregion

#pragma region 실수를 저장하는 방법
			// *복습 필요
	//부동 소수점이란?
	//소수점의 위치를 고정하지 않고, 소수점의 위치를 나타내는 방법

	/*float attack = 6.13f ;

	printf("attack 변수의 값: %.16f \n", attack);
	*/

	// 가수부에 있는 비트 중에서 가장 왼쪽에 있는 수는 표현하지 않습니다.

	/*double health = 6.1333333333333333;

	printf("health 변수의 값: %.16lf \n", health);
	*/

	/*            < 실수 형태의 10진수를 2진수로 변환하는 과정>
			 10진수 실수 부분을 1 ,0 이 될때 까지 계속 2로 곱한 다음
			  곱한 결과의 정수 부분을 위에서 아래로 순서대로 정렬
	*/




#pragma endregion

#pragma region 조건문
	// 어떤 조건이 주어질 때 해당 조건에 따라 동작을 
	// 수행하도록 실행하는 명령문.


#pragma region 관계연산자
	// 두 개의 피연산자의 값을 비교하여 그결과를 
	//   0 or 1이라는 값으로 나타내는 연산자

	//int result1 = 10 > 5;   // 10 > 5 :10이 5보다 크다	          (1)
	//int result2 = 10 < 5;   // 10 < 5 :5가 10보다 크다	          (0)
	//int result3 = 10 >= 5;  // 10 > 5 :10이 5보다 크거나 같다     (1)					 0은 '거짓' 표현 1은 '참'표현
	//int result4 = 10 <= 5;  // 10 <= 5 :5가 10보다 크거나 같다    (0)
	//int result5 = 10 == 5;  // 10 == 5 : 10이 5와 같다	          (0)
	//int result6 = 10 != 5;  // 10 != 5 :10이 5와 같지 않다	      (1)

	//printf("result1 변수의 값: %d \n", result1);  
	//printf("result2 변수의 값: %d \n", result2);
	//printf("result3 변수의 값: %d \n", result3);
	//printf("result4 변수의 값: %d \n", result4);
	//printf("result5 변수의 값: %d \n", result5);
	//printf("result6 변수의 값: %d \n", result6);





#pragma endregion


#pragma region if문
	// 어떤 특정한 조건을 비교하여 조건이 맞다면 실행되는
	// 명령문

   /* int monsterHP = 0;

	if (monsterHP <= 0)
	{
		printf("Monster Destroy\n");
	}
	*/

	// if문은 조건이 1일 때 실행되며, 0일 때는 실행이 되지 않는다.



#pragma endregion

#pragma region else if 문

	// if문의 조건이 틀릴 때 else if 문의 조건이 
	// 맞다면 실행되는 명령문이다.

  /* int level = 98;

   if (level == 99)
   {
	   printf("승급 가능");

   }
   else if (level != 99)
   {
	   printf("승급 불가능");
   }
   */

   // else if 문의 경우 여러개를 더 추가해서 사용할 수 있음.



#pragma endregion

#pragma region else문

		// if문과 else if 문의 조건이 다 틀리면 
		//        실행되는 명령문.

		/*
		char grade = 'C';

		if (grade == 'A')
		{
			printf("A 등급");
		}
		else if (grade == 'B')
		{
			printf("B 등급");
		}
		else
		{
			printf("예외 등급");
		}
		*/

		// if문에 연결된 모든 조건문의 조건이 맞을 때 가장
		// 위에 있는 조건문만 실행이 된다.

#pragma endregion

#pragma region 사분면

   // AND 연산자 if ('조건 1' && '조건2')		 하나라도 거짓이면 실행 안됌
   // OR 연산자  if ('조건 1' || '조건2')		 하나가 거짓이고 하나가 참이면 실행 가능 (두개다 거짓이면 실행 x)
   // NOT 연산자 if (!'조건')

		/*int x = 0 ;
		int y = 1 ;*/

		// x:(+) y:(+)--> 1사분면
		// x:(-) y:(+)--> 2사분면				  x = 0 y != 0 --> x 절편
		// x:(-) y:(-)--> 3사분면				  x != 0 y = 0  --> y 절편  
		// x:(+) y:(-)--> 4사분면				  x = 0 y = 0 --> 원점



		//if (x > 0 && y > 0)			
		//{							
		//	printf("제 1사분면");		
		//}							
		//else if (x < 0 && y > 0)			   
		//{
		//	printf("제 2사분면");
		//}
		//else if (x < 0 && y < 0)
		//{
		//	printf("제 3사분면");
		//}
		//else if (x > 0 && y < 0)
		//{
		//	printf("제 4사분면");
		//}
		//else if (x  && y == 0)   
		//{
		//	printf("x절편");
		//}
		//else if (x == 0 && y )
		//{
		//	printf("y절편");
		//}
		//else 
		//{
		//	printf("원점");
		//}



#pragma endregion

#pragma region switch문
		 //어떤 결과에 따라 그 결과부터 실행되는 명령문.

		 /* int select = 1;

					break 문이란?
			특정한 지점에서 분기를 탈출하는 제어문

		 switch(select)
		 {
			case 0 : printf("타이틀 이동\n");
				break;
			case 1 : printf("마을 이동\n");
				break;
			case 2 : printf("던전 이동\n");
				break;

			default : printf("잘못된 값이 들어왔습니다.\n");

			 switch문은 해당 조건이 완료되었을 때, break문이 없다면
			 나머지 밑에 있는 case문까지 계속 실행 시키다가 종료를 하게 됨.
		 } */

		 // switch문의 경우 조건에 해당하는 값에 따라 
		 // 조건의 위치로 이동

		/*float time = 5.75f;

		switch (time)
		{
		case 5.75: printf("time: %d ", time);
		}*/

		// switch 문에는 조건식으로 실수형 변수와 실수형 상수를 사용할 수 없다.
#pragma endregion




#pragma endregion



}


