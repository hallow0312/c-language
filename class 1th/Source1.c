#include <stdio.h>


void main()
				
{
	// main �Լ���  ���α׷��� ������ ������ �����մϴ�.
#pragma region �ڷ���
	//�����͸� �����ϱ� ���� �������� ���¸�
	//�����ִ� ���Դϴ�.

	//�ڷ����� ������ �ڷ������� ũ�Ⱑ ������ ������,
	//�ڷ����� ũ��� ����Ʈ ������ �̷���� �ֽ��ϴ�.

	// char -> 1 byte	 ������
	// short -> 2 byte	 ������
	// int -> 4 byte	 ������	 
	// long -> 4 byte	 ������

    //float -> 4 byte	 �Ǽ���
	// double -> 8 byte	 �Ǽ���
	// long double -> 8 ~ 16 byte	 �Ǽ���

	//�ڷ����� ��� �ڷ����� ���� ������ �� �ִ� ���� ������
	//������ �����Ǿ� �ֽ��ϴ�.

#pragma endregion

#pragma region ����
	//�����͸� ������ �� �޸� ������ �����ϴ� ���Դϴ�.

	// ; :�ϳ��� ������ ������ ��ȣ�Դϴ�.
	//int data = 100;

	//������ �޸𸮰����� ���α׷��� ����� ������ �ٲ��, ���� ���� 
	//������ ���� �� ���� ������ �޸� ������ ������ �ֽ��ϴ�.
	//data = 999;

	// ������ ���� ��� �ٲ� �� ������, ������ �����ϰ� �ش��ϴ� ������ 
	// ���� �����Ϸ��� ���� �����ڸ� ���� ���� ������ �� �ֽ��ϴ�.

	// ��ü �ּ�: ctrl + k + c
	// �ּ� Ǯ��: ctrl + k + u




#pragma endregion

#pragma region ������_�̸�_��Ģ

	   // 1. ������ �̸��� ���ڷ� ������ �� �����ϴ�.
	   // ex) int 5day; (x)  int day5; (o)

	   // 2. ������ �̸����� ���� ����� �� �����ϴ�.
	   // ex) int float; (x)

	   // 3. ������ ��� �̹� �ߺ��� ������ �̸��� ������� ������
	   // ������ �̸��� �빮�ڿ� �ҹ��ڷ� �����Ͽ� ����� �� �ֽ��ϴ�.
	   // ex) int hp = 100;
	   //     int HP = 200;

	   // 4. ������ �̸����� ������ ���Ե� �� �����ϴ�.
	   // ex) int count Douwn; (x)

	   // 5. ������ �̸����� Ư��  ��ȣ�� "_"�� "$"�� ����� �� �ֽ��ϴ�.
	   // ex) int count_Down = 5;
	   // ex) int money$ = 100;




#pragma endregion

#pragma region printf( ) �Լ�
	// �Ϸ��� �����͸� ���� ���ڿ��� �����Ǿ� �մ�
	// ���·� ����ϴ� �Լ��Դϴ�.
	char grade = 'A';
	int attack = 45;
	// ǥ�� ��� �Լ��� ��� ����� ���ڿ� ���̿� ������ 
	// ����Ϸ��� �����̶�� Ư���� ���ڸ� �޵��� �����ؾ� �մϴ�.
	printf("Hello World~\n");

	// ���� �������� ��� �ϳ��� ǥ�� ��� �Լ��� ���� ���� ������ 
	// ���� �� ������, ���� �������� ������ ���ʿ������� �����մϴ�.
	printf("%c\n", grade);
	printf("%c %d\n", grade, attack);

	// "%c" : �ϳ��� ���ڸ� ǥ���ϴ� ���� ������
	// "%d" : ������ ǥ���ϴ� ���� ������
#pragma endregion








}
