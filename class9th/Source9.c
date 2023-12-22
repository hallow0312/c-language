#include <stdio.h>


void Function()
{
	printf("Function");
}

int Add(int x, int y)
{
	return x + y;
}

int Minus(int x, int y)
{
	return x - y;
}

int Multiple(int x, int y)
{
	return x * y;
}

int Divide(int x, int y)
{
	return x / y;
}

void Swap(int* a, int* b)
{
	int temp = *b;	 // b에는 주솟값이 들어가 있음   
	*b = *a;
	*a = temp;



}

void Notify(int count)
{
	printf("Recursive Call\n");

	if (count <= 1)
	{
		return;
	}
	Notify(count - 1);

	// 재귀 함수의 경우 특정한 시점에서 함수를 반환해야 하며,
	// 재귀적으로 호출한 함수는 스택 프레임에 의해 
	// 마지막에 호출된 함수부터 차례대로 스택 영역에 해제가 됨.
}

inline void Process()
{
	printf("Process");

	// 인라인 함수는 컴파일 시점에 확장되며, 컴파일 시 
	// 인라인 함수로 선언하더라도 상황에 따라 일반 함수로 변환되기도 함 .
}

void main()
{
#pragma region 함수
	// 하나의 특별한 목적의 작업을 수행하기 
	// 위에 독립적으로 설계된 코드의 집합.

	// void : 자료형이 존재하지 않는다 
	// 스네이크표기법 : snake_naming_convention 단어 마지막 글자다음 ' _ ' 사용 마지막글자뒤에는 사용 x
	// camel  표기법 : camelNamingConvention  첫번째 단어 첫글자 소문자 이후 단어 첫글자마다 대문자
	// Pascal 표기법 : PascalNamingConvention 단어 첫글자마다 대문자


	/*Function();*/


	// 함수가 호출 될 때 함수가 호출되는 시작 지점으로 
	// 넘어가게 됨 .

#pragma region 매개변수
	// 함수의 정의에서 전달받은 인수를 함수 내부로 전달하기 
	// 위해 사용하는 변수.

	//  printf("Add함수의 결과 : %d\n", Add(10, 20));	
   //   printf("Minus함수의 결과 : %d\n", Minus(10, 20));	 
   // 
	//// 매개변수는 함수내부에서만 연산이 이루어지며, 함수가 종료가 되면
	//// 메모리에서 사라지는 특성을 가지고 있습니다.

 //   printf("Multiple함수의 결과 : %d\n", Multiple(5.75f, 7.65f));
	// 함수의 경우 자료형과 반환하는 값의 형태가 일치하지 않으면
	//원하는 값을 읽을 수가 없다.

#pragma endregion

#pragma region 인수
	// 함수가 호출 될 떄 매개변수에 실제로 전달되는 값 ;

	// 인수의 경우 함수에 있는 매개변수의 수에 따라 전달할 수 있는 
	// 인수의 수가 결정되며, 값을 전달하는 인수와 값을 전달받는 
	// 매개 변수의 자료형이 서로 일치하여야 함 .

	// A(10) <-> B (20) A: 20 B: 10이 되게
	//int a = 10;
	//int b = 20;

	//Swap(&a,&b);  // void Swap 함수 이용 후 a , b 가 서로 바뀜


	//printf("a 변수 값 : %d\nb 변수 값 : %d\n", a, b);

	// 함수를 호출할때 변수의 값을 인수로 전달하게 되면
	// 함수의 매개 변수에 변수의 복사된 값이 전달되기 때문데
	// 인수로 전달한 변수는 함수 내에서 일어난 연산에 대해 영향을 
	// 받지 않음 .




#pragma endregion


#pragma endregion

#pragma region 재귀_함수
	// 어떤 함수에서 자신을 다시 호출하여 작업을 
	// 수행하는 함수.

	//Notify(3);

	// 재귀 함수는 함수를 계속 호출하기 때문에 스택 영역에 
	// 메모리가 계속 쌓이게 되므로 스택 오버플로우가 발생하게됨 .

#pragma endregion

#pragma region 인라인_함수
	 /*
		 함수를 호출하는 대신 함수가 호출되는 위치마다
		 함수의 코드를 복사하여 전달하는 방식의 함수.

		 장점 : 인라인 함수는 함수를 호출하는 과정이 없으므로 처리 속도가 빠름.
		 단점 : 인라인 함수를 많이 사용하게 되면 함수의 코드가 복사가 되기 때문에
		 실행파일의 크기가 커지게 됨 .
	 */
	Process();

	// 오버 헤드 : 특정 기능을 수행하는데 드는 간접적인 시간, 메모리 등 자원을 의미. 



#pragma endregion







}




































