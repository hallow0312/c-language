#include <stdio.h>


void main()
{ 
#pragma region �迭
	// ���� �ڷ����� ������� �̷���� ���� ����.
	
	/*
	int array[5];

	// *** �迭�� ��� ù ��° ���Ҵ� 0���� ����  array[5] = [0][1][2][3][4] �� �迭 ���� 
	// [5]�迭�� ���� ������ ������ ��

	// �迭�� ���ϴ� ���ҿ� ���ϴ� ���� ������ �� ������
	// �迭�� ũ��� �������� �Ǵ� �������� ������ �޸�
	// ������ ������ �� .

	for (int i = 0;  i < 5;  i++)
	{
		array[i] = (i+1)*100;

		printf("array[%d]:%d\n", i, array[i]);
	}
	*/
	//int list[] = { 10,20,30,40 }; // 16 byte / 4 
	//
	//int size = sizeof(list) / sizeof(int);

	//printf("list �迭�� ������ :%d \n", size);


	


	// �迭�� ũ��� ������ �� ������ , �ʱ�ȭ ��Ͽ��� 
	// ������ ��ҿ� ���� �迭�� ũ�Ⱑ ������ .

   /*
	int* ptr = NULL;

	int intList [] = { 1,2,3,4,5 };

	ptr = intList;

	// �迭�� �̸��� �迭�� ���� �ּҸ� �ǹ� ;
	printf("ptr ������ ��: %p \n", ptr);	
	printf("ptr ������ ����Ű�� ��: %d \n", *ptr);
	printf("intList�� ���� �ּ�: %p \n", intList);

	ptr = ptr + 1;
	*ptr = 99;
	printf("ptr ������ ��: %p \n", ptr);
	printf("ptr ������ ����Ű�� �� : %d \n", *ptr);
	printf("intList[1]�� �ּ�: %p \n", &intList[1]);
	*/
	// �迭�� �������� �޸� ������ ������, �迭�� �̸��� �迭�� 
	// ���� �ּҸ� �ǹ�.
#pragma endregion

#pragma region ���ڿ�
	// �������� �޸� ������ ����� ����
	// ������ ����.
	//
	//const char* string = "Computer" ;	   
	// 

	//char name[10] = { "Alistar" }; 
	

	////* string = 'A' ; (ERROR)
	//// %s : ���ڿ��� ����ϴ� ���� ������
	
	//printf("string ������ �� : %s\n", string);
   
	//// ���ڿ��� ��� �����͸� �̿��Ͽ� ���ڿ� ����� 
	//// ����Ű���� �� �� ������, ���ڿ� ����� ������ ������
	//// ���� ���� ������ ����Ǳ� ������ 
	//// ���ڿ��� ���� ������ �� ����.

	//string = "Hello";

	//printf("string ������ �� : %s\n", string);

	// ���ڿ��� ���鵵 �Բ� �޸� ������ �����Ͽ�
	// ũ�Ⱑ �����Ǹ�, �������� ���ڿ��� ���� �˷��ִ�
	// ���� ���ڰ� �߰���.

	
	
	// [A][l][i][s][t][a][r][\0][][]
	//char name[10] = { "Alistar" };	  // �����ϴ� ���� ������ name[10]�� ������ ����� �Ǿ�����.
	//
	//char content[10] = { "Game" };

	//
	//printf("name ������ �� : %s\n", name);
	//name[4] = '\0';

	//// ���ڿ��� �����ϰ� �Ǹ� �� �������� ��ȿ�� 
	//// ���ڱ��� �޸� ������ �����.

	//printf("name ������ �� : %s\n", name);

	//// ���ڿ��� ��� ���� �������� �޸� �������� 
	//// ����Ǿ� ������, ���� �迭 ���̿� ��ȿ�� ���� '\0' �� 
	//// �ְ� �Ǹ� ��ȿ�� ���ڱ����� ���ڿ��� ����ϰ� �� .

	//

	

		





		 
								    

#pragma endregion

#pragma region �ִ񰪰� �ּڰ�
  //[10][22][35][2][5]

 // �ִ� : 35
 // �ּڰ� : 2

int list[] = { 10,22,35,2,5 };

int max = list[0];
int mini = list[0];

int arraySize = sizeof(list) / sizeof(int);

for (int j = 1; j < arraySize; j++)     	   
{
	if (max < list[j])
	{
		max = list[j];
	}

}
for (int i = 1; i < arraySize; i++)
{
	if (mini > list[i])
	{
		mini = list[i];
	}
}

printf("list �迭�� �ִ� : %d\n", max);
printf("list �迭�� �ּڰ� : %d\n", mini);


#pragma endregion





}



































