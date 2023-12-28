#include <stdio.h>
#include <stdlib.h> // 메모리 관련 라이브러리 

int main()
{
#pragma region 범용_포인터

	// 자료형이 전해지지 않은 상태로 모든 자료형을 
	// 저장할 수 있는 포인터.


	//
	//int attack = 10;
	//float health = 100.0f;
	//
	//void* vptr = NULL;

	//vptr = &attack;
	//// 범용 포인터는 메모리 주소에 접근해서 값을 변경할 수 없음 .
	//// printf("vptr이 가르키는 값 : %d\n", *vptr);  (x) 
	//
	//printf("vptr이 가르키는 값 : %d\n", *(int*)vptr);

	//vptr = &health;
	//printf("vptr이 가르키는 값 : %f\n", *(float*)vptr);

	// 범용 포인터로 변수의 메모리에 접근하려면 범용 포인터가 가리키는 
	// 변수의 자료형으로 형변환을 해주어야 한다 .







#pragma endregion

#pragma region 동적_할당

	// 프로그램을 실행하는 중에 필요한 만큼 메모리를
	// 할당하는 작업.

	//int* ptr = malloc(sizeof(int));
	//
	//*ptr = 100;
	//
	//// 메모리를 동적 할당할 때 주소를 범용 포인터로 
	//// 반환하기 때문에 자료형을 변환한 다음 메모리에 
	//// 할당해야 함 .

	//printf("ptr이 가리키는 값 :%d \n", *ptr);

	//free(ptr);

	//// 동적으로 할당한 메모리는 힙 영역에 보관되어 있으므로
	//// 사용이 끝나면 직접 해제 해주어야함
	//
	////ptr[] ---->[999] [333] [] [] []
	//ptr = malloc(sizeof(int) * 5); 

	//// 동적 할당은 실행 시간에 가변적으로 메모리의 크기를 
	//// 변경시킬 수 있으며 , 동적으로 메모리의 크기를 할당할 때 
	//// 바이트 단위로 지정함.
	//
	//ptr[0] = 999;
	//ptr[1] = 333;

	//printf("ptr[0]가 가리키는 값 :%d\n", ptr[0]);
	//printf("ptr[1]가 가리키는 값 :%d\n", ptr[1]);
	//
	//free(ptr);

	// 메모리를 동적으로 할당한 상태에서 해제하지 않게되면
	// 메모리 누수 현상이 일어나며, 메모리 누수가 일어나게 되면
	// 더 이상 메모리를 할당할 수 없는 상태가 됨.

#pragma endregion

#pragma region 단축_평가_계산

	// 논리 연산에서 두 피연산자 중 왼쪽에 있는 결과가 
	// "거짓"이면 우측의 피연산자의 값은 평가하지 않고 
	// 바로 결과를 얻어내는 계산.

	/*
	int x = 0;
	int y = 0;

	if (x < y && ++x)
	{
		printf("Short Curcuit\n");
	}
	printf("x변수의 값 : %d\n", x);

	if (x < y || y++)
	{
		printf("Short Curcuit\n");
	}
	printf("y변수의 값 : %d\n", y);
	*/

#pragma endregion

#pragma region ASCII코드

	// 미국 국립 표준 협회에서 표준화한 
	// 정보 교환용 7bit 부호 체계.

	//char alphabet = 'A';

	////A~Z
	//for (int a = 1; a< 27; a++)
	//{
	//	printf("%c\n", alphabet);   
	//	alphabet = alphabet++;
	//	
	//	
	//}

	//const char* hangeul = "감";

#pragma endregion




	return 0;
}





































