#include <stdio.h>
#include "Function.h"  // int data ';' �� �� ���� .

#define SIZE 100  
// ��ũ���� ��� �ڷ����� �������� �����Ƿ�  
// �޸� ������ ������ ���� ���� .


int level;  // ���� ���� (BSS �޸� ���� : �ʱ�ȭ�� �̷������ ���� ���� ���� )
			// ���� ������ ���� �ʱ�ȭ ���� �ʰ� �Ǹ� 0�̶�� ������ �ʱ�ȭ�� �� .

int stage = 1;	// ���� ���� (�ʱ�ȭ�� �̷���� �޸� ����)

void Stage()
{
	stage++;


}

void Increase()
{
	
	// ���� ������ �� �� ���� �ʱ�ȭ�� �̷����.

	static int score = 0;

	score++;
	printf("score ������ �� : %d\n", score);

}

int main()
{
#pragma region ��ó����
	// ���α׷��� �����ϵǱ� ������ ���α׷��� ����
	// ���� ó���� �ϴ� ����.

	// ��ó����� �����Ϸ��� �ƴ� ����ó���⿡ ���ؼ� 
	// ó���� �Ǵ� �����̱⿡ ��ɹ� ���� ";" ��� ����.

#pragma endregion


#pragma region ������_����

#pragma region ����_����

	// ��� ������ ����� ������ ��� �������� ��ȿ�ϸ�
	// ����� ����Ǹ� �޸𸮿��� ������� Ư���� ������ ����.


	/*
	int data = 100;						// {} �ٱ��� �ִ� data ���� 
	
	{
		int data = 999;					//{} �ȿ�  �ִ� data ����
		printf("{} �ȿ� �ִ� data�� �� : %d\n", data);  
	}

	printf("{} �ٱ��� �ִ� data�� �� : %d\n", data);
	*/



#pragma endregion

#pragma region ����_����
	// ���α׷� ��𿡼��� ���� �� �� ������, ���α׷��� 
	// ���� �Ǿ�߸� �޸𸮿��� ������� Ư¡�� ���ϰ� ���� .
	

	/*
	Stage();

	printf("���� ���� stage�� �� : %d\n", stage);	  

	stage = 10;

	printf("���� ���� stage�� �� : %d\n", stage);
	*/	   


#pragma endregion

#pragma region ����_����
	
	// ���α׷��� ���� �� �� �޸𸮿� �ö󰡰� �Ǹ�, ���� ������ Ư¡�� 
	// ���� ������ Ư¡�� ������ �ִ� ����.
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

#pragma region �Ҽ�
	//1. �Է��� �� �ִ� ������ ����.
	//2. ���� �Է�
	//3.  �ݺ����� ����Ͽ� �Ҽ� ����
	//4. ���� �Է��� ���� �Ҽ����� �ƴ��� �Ǻ�

	/*
	int num,count;

	printf("������ �Է��Ͻÿ� : ");
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
		printf("%d : �Ҽ��Դϴ�.\n", num);
	}
	else
	{
		printf("%d : �Ҽ��� �ƴմϴ�.\n", num);
	}
	*/
		
#pragma endregion

#pragma region ��ũ��

	// ���α׷� ������ Ư���� �����Ϳ� ���ڿ��� ���ǵǰ� 
	// ó���Ǵ� ����.
	
	printf("SIZE ��ũ���� �� : %d\n", SIZE);

	// ��ũ���� ������ ������ ������ ����Ǹ�, �� ��ũ�ΰ� 
	// ������ �ɶ� ��ũ���� ��ü ����� �־�� �ϹǷ� ���α׷��� 
	// ũ�Ⱑ Ŀ���� ��.

#pragma endregion

   

	return 0;
}


































