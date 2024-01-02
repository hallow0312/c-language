#include <stdio.h>
 
void Instantiate()
{
	printf("Instantiate\n");
  }

int Factorial(int x)  
{
	
	
	if (x == 1)
	{
		return 1;
		
	}
	else 
	{
		return x * Factorial(x - 1);  
	}
	
		  
}
							   


int main()		 
{
	
#pragma region 함수포인터

	// 함수의 주소값을 저장하고 가리킬 수있는 포인터 변수 

	// 반환값과 매개 변수가 없는 함수 포인터를 선언함.
	/*
	void (*ptr) ();
	*/
	/*
	int (*iptr)(int);
	*/
	//ptr 변수에 Instantiate 함수의 주소를 저장
	//ptr = Instantiate;


	//함수포인터 호출.
	//ptr();

	//printf("Instantiate 함수 주소: %p\n", &Instantiate);
	//printf("ptr의 값 :%p\n", ptr);

	
	//iptr = Factorial;
	//int num = 0;
	//scanf_s("%d", &num);
	//
	//printf("%d의 Factorial의 값: %d\n", num, iptr(num)); 
	//
	////for 문으로 만들었을때의 factorial 값
	//int count=1;
	//for (int i = 1; i <= num; i++)
	//{
	//	count = count * i;
	//}
	//printf("%d\n", count);

	
	// 함수 포인터는 함수의 반환형과 매개 변수의 타입이 일치해야 하며,
	// 함수 포인터를 사용하여 동적으로 메모리를 할당할 수 없음.



	
#pragma endregion

#pragma region 이중_포인터
	/*
	int data = 100;

	int * sptr = &data;

	int ** dptr = &sptr;

	printf("*sptr의 값 : %d\n", *sptr);
	printf("*sptr의 주소값 : %p\n", sptr);
	printf("**dptr의 값 : %p\n", *dptr);

	**dptr = 999;
	printf("data의 값 : %d\n", data);
	*/

	
#pragma endregion


	return 0;
}










































