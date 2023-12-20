#include <stdio.h>


void main()
{

#pragma region 포인터

	// 메모리의 주소 값을 저장할 수 있는 변수.


	// 32bit (4byte) 64bit (8byte)

	// 0~9 <- 10진수
	// 0~F <- 16진수	 A: 10 B: 11 C:12 D:13 E:14 F:15

	/*
	int data = 10;
	float pi = 3.14f;

	// 8byte
	// [NULL]
	int * ptr= NULL;		//<- ptr : 포인터 변수의 이름 *ptr 의 메모리 크기 : 8byte	  *: 애스터리스크 연산자
							// [NULL] : 아무 것도 저장 안되어있다는 뜻

	// 포인터 변수도 자신의 메모리 공간을 가지고 있으며,
	// 포인터 변수에 변수의 주소를 저장하게 되면 해당 변수의
	// 시작 주소를 가리키게 됨.

	//		ptr	 변수
	// [data 의 시작주소]	<---data의 시작주소

	ptr = &data;

	// 변수의 주소는 프로그램이 실행될 때마다 변경되며,
	// 포인터가 가리키는 메모리 공간의 자료형은 알 수 없으므로
	// 포인터가 가리키는 메모리의 자료형으로 선언해주어야 함 .


	printf("data 변수의 메모리 주소 : %p\n", &data);
	printf("ptr변수의 값: %p\n", ptr);
	printf("ptr변수의 메모리 주소: %p\n", &ptr);		 // %p 포인트의 주소 출력

	printf("data변수의 값 : %d\n", data);
	printf("ptr 변수가 가리키는 값 %d\n", *ptr);

	// 포인터 변수를 저장하기 위해 주소 값을 저장할 변수의 자료형과
	// 포인터 변수의 자료형이 일치해야 함.

	ptr = &pi;

	printf("pi 변수의 값 : %f \n", pi);
	printf("ptr 변수가 가리키는 값  : %f\n", *ptr);

	// 포인터 변수의 크기는 중앙 처리 장치가 한 번에
	// 처리할 수 있는 크기로 정해지며, 한 번에 처리할
	// 수 있는 크기는 운영체제에 따라 크기가 결정됨.

	 */





#pragma endregion

#pragma region sizeof 연산자
	 // 피연산자의 크기를 바이트 단위로 반환하는 연산자.

	 /*
	 int* pointer = NULL;

	 printf("char 자료형의 크기 : %d \n", sizeof(char));
	 printf("short 자료형의 크기 : % d \n", sizeof(short));
	 printf("int 자료형의 크기 : %d \n", sizeof(int));
	 printf("long 자료형의 크기 : %d \n", sizeof(long));
	 printf("float 자료형의 크기 : %d \n", sizeof(float));
	 printf("double 자료형의 크기 : %d \n", sizeof(double));
	 printf("pointer 자료형의 크기 : %d \n", sizeof(pointer)); */




#pragma endregion

#pragma region 상수_지시_포인터

	 // 포인터 변수를 상수로 선언하여, 포인터 변수가 
	 // 가리키고 있는 주소에 존재하는 값을 변경할 수 없도록
	 // 설정할 수 있음.

	 //const int * ptr;
	 //
	 //int a = 10; 	 
	 //int b = 20; 
	 //
	 //ptr = &a;
	 //printf("ptr 의 값: %p\n", ptr);
	 //a = 45;	 
	 //

	 //// *ptr = 100; 
	 // 
	 //// 상수로 선언한 포인터는 해당 변수의 값을 변경할 수 없으나 
	 //// 다른 변수의 주소는 가리킬 수 있다.
	 //ptr = &b;
	 //printf("ptr 의 값: %p\n", ptr);

	 // 포인터 변수가 상수화가 된것이 아니라 포인터가 가르키는 변수의 주소가 상수화 된것.





#pragma endregion

#pragma region 포인터_상수

//int x = 100;
//int y = 200;

//int* const cptr = &x;
//*cptr = 999;

//printf("x의 값: %d\n", x);

//cptr=100;

#pragma endregion

#pragma region 약수

/*printf("%d", 5 % 5);
*/

// %연산자: 나머지 연산자 7%5=2

/*
int num = 0;
printf("숫자를 입력하시오: ");
scanf_s("%d", &num);

printf("입력한 %d의 약수 : ", num);
for (int a = 1; a <= num; a++)
{
	if (num % a == 0)
		printf("%d ", a);
}

// 입력한 수까지의 약수
printf("\n\n입력한 %d까지의 약수\n", num);
for (int x = 1; x <= num; x++)
{

	printf("%d의 약수 : ", x);
	for (int y = 1; y <= x; y++)
	{
		if (x % y == 0)
			printf("%d ", y);
	}
	printf("\n");
}

*/
#pragma region 복습
//int num = 0;
//printf("수를 입력하시오 : ");
//scanf_s("%d", &num);
//
//printf("입력한 수의 약수는 : ");
//
//for (int a = 1; a <= num; a++)
//{
//	if (num % a == 0)
//	{
//		printf(" %d ", a);
//	}
//}

//int a = 0;
//int b = 0;
//int g = 0; 
//printf("두정수를 입력하시오 : ");
//
//scanf_s("%d%d", &a,&b); 
//  
//
//for (int i = 1; i <= a && i <= b; i++)
//{
//	if (a % i == 0 && b % i == 0)
//	{
//		 g = i; 
//	}
//	
//}
//printf(" 두 수의 최대공약수 : %d", g);   


//소인수 분해

/*
int a = 0; 

printf("정수를 입력하시오 : ");

scanf_s("%d", &a); 

for (int c = 2; c <= a; c++)
{
	if (a % c == 0)
	{
		printf("%d", c);
		a = a / c;
		if (a % c == 0)
		{
			printf(" * ");
		}
		else if (a % c != 0)
		{
			if (a > c)
				printf(" * ");

		}
		c = 1;

	}
	

}

*/




		



#pragma endregion



#pragma endregion

#pragma endregion







}


































