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






}



































