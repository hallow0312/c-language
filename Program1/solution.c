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

void Swap(int a, int b)
{
	int temp = b;
	b = a;
	a = temp; 
	printf(" a�ǰ�: %d , b�ǰ� : %d ", a, b);
	
	
}

void main()
{ 
#pragma region �Լ�
	// �ϳ��� Ư���� ������ �۾��� �����ϱ� 
	// ���� ���������� ����� �ڵ��� ����.

	// void : �ڷ����� �������� �ʴ´� 
	// ������ũǥ��� : snake_naming_convention �ܾ� ������ ���ڴ��� ' _ ' ��� ���������ڵڿ��� ��� x
	// camel  ǥ��� : camelNamingConvention  ù��° �ܾ� ù���� �ҹ��� ���� �ܾ� ù���ڸ��� �빮��
	// Pascal ǥ��� : PascalNamingConvention �ܾ� ù���ڸ��� �빮��


	/*Function();*/
	

	// �Լ��� ȣ�� �� �� �Լ��� ȣ��Ǵ� ���� �������� 
	// �Ѿ�� �� .

#pragma region �Ű�����
	// �Լ��� ���ǿ��� ���޹��� �μ��� �Լ� ���η� �����ϱ� 
	// ���� ����ϴ� ����.
												    
    //  printf("Add�Լ��� ��� : %d\n", Add(10, 20));	
   //   printf("Minus�Լ��� ��� : %d\n", Minus(10, 20));	 
   // 
	//// �Ű������� �Լ����ο����� ������ �̷������, �Լ��� ���ᰡ �Ǹ�
	//// �޸𸮿��� ������� Ư���� ������ �ֽ��ϴ�.

 //   printf("Multiple�Լ��� ��� : %d\n", Multiple(5.75f, 7.65f));
	// �Լ��� ��� �ڷ����� ��ȯ�ϴ� ���� ���°� ��ġ���� ������
    //���ϴ� ���� ���� ���� ����.
   																		 
#pragma endregion

#pragma region �μ�
	// �Լ��� ȣ�� �� �� �Ű������� ������ ���޵Ǵ� �� ;

	// �μ��� ��� �Լ��� �ִ� �Ű������� ���� ���� ������ �� �ִ� 
	// �μ��� ���� �����Ǹ�, ���� �����ϴ� �μ��� ���� ���޹޴� 
	// �Ű� ������ �ڷ����� ���� ��ġ�Ͽ��� �� .

	// A(10) <-> B (20) A: 20 B: 10�� �ǰ�
	
	Swap(10, 20);  

	// �Լ��� ȣ���Ҷ� ������ ���� �μ��� �����ϰ� �Ǹ�
	// �Լ��� �Ű� ������ ������ ����� ���� ���޵Ǳ� ������
	// �μ��� ������ ������ �Լ� ������ �Ͼ ���꿡 ���� ������ 
	// ���� ���� .
	

	

#pragma endregion

	
#pragma endregion






}




































