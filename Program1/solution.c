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
	
#pragma region �Լ�������

	// �Լ��� �ּҰ��� �����ϰ� ����ų ���ִ� ������ ���� 

	// ��ȯ���� �Ű� ������ ���� �Լ� �����͸� ������.
	/*
	void (*ptr) ();
	*/
	/*
	int (*iptr)(int);
	*/
	//ptr ������ Instantiate �Լ��� �ּҸ� ����
	//ptr = Instantiate;


	//�Լ������� ȣ��.
	//ptr();

	//printf("Instantiate �Լ� �ּ�: %p\n", &Instantiate);
	//printf("ptr�� �� :%p\n", ptr);

	
	//iptr = Factorial;
	//int num = 0;
	//scanf_s("%d", &num);
	//
	//printf("%d�� Factorial�� ��: %d\n", num, iptr(num)); 
	//
	////for ������ ����������� factorial ��
	//int count=1;
	//for (int i = 1; i <= num; i++)
	//{
	//	count = count * i;
	//}
	//printf("%d\n", count);

	
	// �Լ� �����ʹ� �Լ��� ��ȯ���� �Ű� ������ Ÿ���� ��ġ�ؾ� �ϸ�,
	// �Լ� �����͸� ����Ͽ� �������� �޸𸮸� �Ҵ��� �� ����.



	
#pragma endregion

#pragma region ����_������
	/*
	int data = 100;

	int * sptr = &data;

	int ** dptr = &sptr;

	printf("*sptr�� �� : %d\n", *sptr);
	printf("*sptr�� �ּҰ� : %p\n", sptr);
	printf("**dptr�� �� : %p\n", *dptr);

	**dptr = 999;
	printf("data�� �� : %d\n", data);
	*/

	
#pragma endregion


	return 0;
}










































