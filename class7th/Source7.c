#include <stdio.h>


void main()
{

#pragma region ������

	// �޸��� �ּ� ���� ������ �� �ִ� ����.


	// 32bit (4byte) 64bit (8byte)

	// 0~9 <- 10����
	// 0~F <- 16����	 A: 10 B: 11 C:12 D:13 E:14 F:15

	/*
	int data = 10;
	float pi = 3.14f;

	// 8byte
	// [NULL]
	int * ptr= NULL;		//<- ptr : ������ ������ �̸� *ptr �� �޸� ũ�� : 8byte	  *: �ֽ��͸���ũ ������
							// [NULL] : �ƹ� �͵� ���� �ȵǾ��ִٴ� ��

	// ������ ������ �ڽ��� �޸� ������ ������ ������,
	// ������ ������ ������ �ּҸ� �����ϰ� �Ǹ� �ش� ������
	// ���� �ּҸ� ����Ű�� ��.

	//		ptr	 ����
	// [data �� �����ּ�]	<---data�� �����ּ�

	ptr = &data;

	// ������ �ּҴ� ���α׷��� ����� ������ ����Ǹ�,
	// �����Ͱ� ����Ű�� �޸� ������ �ڷ����� �� �� �����Ƿ�
	// �����Ͱ� ����Ű�� �޸��� �ڷ������� �������־�� �� .


	printf("data ������ �޸� �ּ� : %p\n", &data);
	printf("ptr������ ��: %p\n", ptr);
	printf("ptr������ �޸� �ּ�: %p\n", &ptr);		 // %p ����Ʈ�� �ּ� ���

	printf("data������ �� : %d\n", data);
	printf("ptr ������ ����Ű�� �� %d\n", *ptr);

	// ������ ������ �����ϱ� ���� �ּ� ���� ������ ������ �ڷ�����
	// ������ ������ �ڷ����� ��ġ�ؾ� ��.

	ptr = &pi;

	printf("pi ������ �� : %f \n", pi);
	printf("ptr ������ ����Ű�� ��  : %f\n", *ptr);

	// ������ ������ ũ��� �߾� ó�� ��ġ�� �� ����
	// ó���� �� �ִ� ũ��� ��������, �� ���� ó����
	// �� �ִ� ũ��� �ü���� ���� ũ�Ⱑ ������.

	 */





#pragma endregion

#pragma region sizeof ������
	 // �ǿ������� ũ�⸦ ����Ʈ ������ ��ȯ�ϴ� ������.

	 /*
	 int* pointer = NULL;

	 printf("char �ڷ����� ũ�� : %d \n", sizeof(char));
	 printf("short �ڷ����� ũ�� : % d \n", sizeof(short));
	 printf("int �ڷ����� ũ�� : %d \n", sizeof(int));
	 printf("long �ڷ����� ũ�� : %d \n", sizeof(long));
	 printf("float �ڷ����� ũ�� : %d \n", sizeof(float));
	 printf("double �ڷ����� ũ�� : %d \n", sizeof(double));
	 printf("pointer �ڷ����� ũ�� : %d \n", sizeof(pointer)); */




#pragma endregion

#pragma region ���_����_������

	 // ������ ������ ����� �����Ͽ�, ������ ������ 
	 // ����Ű�� �ִ� �ּҿ� �����ϴ� ���� ������ �� ������
	 // ������ �� ����.

	 //const int * ptr;
	 //
	 //int a = 10; 	 
	 //int b = 20; 
	 //
	 //ptr = &a;
	 //printf("ptr �� ��: %p\n", ptr);
	 //a = 45;	 
	 //

	 //// *ptr = 100; 
	 // 
	 //// ����� ������ �����ʹ� �ش� ������ ���� ������ �� ������ 
	 //// �ٸ� ������ �ּҴ� ����ų �� �ִ�.
	 //ptr = &b;
	 //printf("ptr �� ��: %p\n", ptr);

	 // ������ ������ ���ȭ�� �Ȱ��� �ƴ϶� �����Ͱ� ����Ű�� ������ �ּҰ� ���ȭ �Ȱ�.





#pragma endregion

#pragma region ������_���

//int x = 100;
//int y = 200;

//int* const cptr = &x;
//*cptr = 999;

//printf("x�� ��: %d\n", x);

//cptr=100;

#pragma endregion

#pragma region ���

/*printf("%d", 5 % 5);
*/

// %������: ������ ������ 7%5=2

/*
int num = 0;
printf("���ڸ� �Է��Ͻÿ�: ");
scanf_s("%d", &num);

printf("�Է��� %d�� ��� : ", num);
for (int a = 1; a <= num; a++)
{
	if (num % a == 0)
		printf("%d ", a);
}

// �Է��� �������� ���
printf("\n\n�Է��� %d������ ���\n", num);
for (int x = 1; x <= num; x++)
{

	printf("%d�� ��� : ", x);
	for (int y = 1; y <= x; y++)
	{
		if (x % y == 0)
			printf("%d ", y);
	}
	printf("\n");
}

*/
#pragma region ����
//int num = 0;
//printf("���� �Է��Ͻÿ� : ");
//scanf_s("%d", &num);
//
//printf("�Է��� ���� ����� : ");
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
//printf("�������� �Է��Ͻÿ� : ");
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
//printf(" �� ���� �ִ����� : %d", g);   


//���μ� ����

/*
int a = 0; 

printf("������ �Է��Ͻÿ� : ");

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


































