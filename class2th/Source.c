#include <stdio.h>


void main()
{
#pragma region ���
	////���α׷��� ����Ǵ� ���� �� �̻� ���� ������
	////�� ���� �����Դϴ�.
	//const int data = 100;

	////����� �޸� ������ �����ϴ� ���ÿ� �ʱ�ȭ�ؾ� �ϸ�,
	////�� �� ����� ���� �� �̻� ������ �� �����ϴ�.
	//
	////ex) data = 999;

	//// ����� ��� �޸� ������ ������ ���� ���� �����
	////���ͷ� ������ �ϸ�, �޸� ������ ������ �ִ� ����� �ɺ��� ������ ��.

	//const float pi = 3.14f;
	//printf("pi�� ��: %f\n", pi);
	//// "%f" : �Ǽ�(float)�� ǥ���ϴ� ���� ������ 
	// ������ ���ͷ� ����� �����ϴ� ���� ������ ũ�� ������
	//// int �ڷ������� ����Ǹ�, �Ǽ��� ���ͷ� ����� double
	//// �ڷ������� �����
	//float value = 3.1415926535;
	//
	//printf("value�� �� : %.10lf \n", value);
	//// "%lf" : �Ǽ�(double)�� ǥ���ϴ� ���� ������
	//// %.10lf :	�Ҽ������� 10�ڸ������� ǥ��
	//
	////printf() �Լ��� �Ҽ��� ����� �� 4byte ũ���� �Ǽ���
	////�ڷ����� �Ҽ��� ���� 6�ڸ� ������ ǥ���ϸ�, 8byte ũ����
	////�Ǽ��� �ڷ����� �Ҽ��� ���� 15�ڸ������� ǥ����.


#pragma endregion


#pragma region ��Ʈ
	// �����͸� ��Ÿ�� �ּ��� ����, 0 or 1�� ��������
	// ���� ����� �����ϴ� ����

	char character = 10;

	//    <<10������ 2������ ��ȯ�ϴ� ����>>
	//    10������ 1�� �� �� ���� 2�� ��� ������ �� ����
	//    ���� ��ġ�� ������ ���� �Ʒ����� ���� ������� 
	//               �������ش�.

	//    10------> [0][0][0][0][1][0][1][0] 

	// �޸𸮴� ��Ʈ ������ ������ ������ �� ������,
	// 1���� ��Ʈ���� 0 or 1�� ���� ������ �� �ִ�.

	//   <<2 ������ 10������ ��ȯ�ϴ� ���� >>
	//  1 byte �� 2������ ����� ���� 2�� �������� ��Ÿ��

	//  ������ ��Ʈ�� 1�� �ִٸ� 1�� 2�� ������ ��ġ�� ����� ����
	//  ������ ��Ʈ�� ��� ���Ͽ� 10������ ��Ÿ��.

	//[0][0][0][0][1][0][1][0] --> (1*2^3)+(0*2^2)+(1*2^1)+(0*2^0) = 10
#pragma endregion

#pragma region ��Ʈ_������
	// ��Ʈ ������ ���� ������ �����ϱ� ���� 
	// ����ϴ� �������̴�.

	// <AND ������>
	// �� ���� �ǿ����ڰ� ��� 1�̸� 1�� ��ȯ�ϴ� ������.

	char x = 10; // 00001010
	char y = 6;  // 00000110 

	printf("x�� y�� AND ������ ���: %d \n", x & y);	//00000010 ---> 2

	// <OR ������>
	// �� ���� �ǿ����� �߿� �ϳ��� 1�� �ִٸ� 1�� ��ȯ�ϴ� ������.

	printf("x�� y�� OR ������ ���: %d \n", x | y); //00001110 ---> 14


	// <XOR ������>
	// �� ���� �ǿ����ڰ� ���� ������ 0�� ��ȯ�ϰ�, ���δٸ���
	// 1�� ��ȯ�ϴ� ������.

	printf("x�� y��	XOR ������ ���: %d \n", x ^ y);	 //00001100 ---> 12

	// <NOT ������>
	// �� ���� ��Ʈ�� �����ϴ� ������.
	printf("x ������ NOT ������ ��� : %d \n", ~x); //11110101   -128+(64+32+16+4+1)= -11

	// ù ��° ��Ʈ�� ��ȣ�� ��Ÿ���� , ù��° ��Ʈ�� 1�� �ִٸ� ���� ����, 
	//0���ִٸ� ���


#pragma endregion


}

