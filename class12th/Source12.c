#include <stdio.h>
#include <math.h>  

struct Player
{
	// ����ü ũ���� ��� ��� ������ ������ ���� �޸��� ũ�Ⱑ �ٸ��� ������ ������
	char blood;			// 1 byte
	int health;			// 4 byte
	float attack;		// 4 byte
	double defence;		// 8 byte
	// ����ü�� �����ϱ� ���� ����ü�� �޸� ������ 
	// ������ ���� �����Ƿ�, ����ü ���ο� �ִ� �����͸� 
	// �ʱ�ȭ �� �� ����.
};

struct Character
{
	int x, y;
};
struct Enemy
{
	int x, y;
};

struct Node
{
	int data;
	struct Node* next;
};



int main()
{
#pragma region ����ü

	// ���� ���� ������ �ϳ��� �������� ����ȭ�� ���� 
	// �ϳ��� ��ü�� �����ϴ� �� .

	//struct Player player={'B',75,5.5f}; 	  //Player : �ڷ��� player :����

	/*
	player.attack = 10.5f;
	player.blood = 'A';
	player.health = 100;
	*/

	/*
	printf("player.attack�ǰ� : %0.1f\n", player.attack);
	printf("player.blood�ǰ�  : %c��\n", player.blood);
	printf("player.health�ǰ� : %d\n", player.health);
	*/


#pragma region ����Ʈ�е�

	// ��� ������ �޸𸮿��� CPU�� ���� �� �ѹ��� ���� �� 
	// �ֵ��� , �����Ϸ��� ���������� ��Ͽ� ���߾� ����Ʈ�� 
	// �е����ִ� ����ȭ �۾�.


	//printf("Player ����ü�� ũ�� : %d\n", sizeof(struct Player));	 

	// ����ü�� ũ��� ����ü�� �����ϴ� ����߿��� ũ�Ⱑ ���� ū 
	// �ڷ����� '���' �� �ǵ��� ����.
#pragma endregion


#pragma endregion

#pragma region ��_��������_�Ÿ�
	/*printf("Root 25 : %f\n", sqrt(25));
	printf("pow 2�� 3�� : %lf\n", pow(2, 3));*/

	//struct Character character = { 0,0 };
	//struct Enemy enemy = { 5,4 };

	//// ���� ������ �Ÿ��� 5.0  ���� ���ݹ��� 
	//// ���� ������ �Ÿ��� 5.0 �ʰ� ���ݹ��� 

	//int distance1 = character.x - enemy.x;  
	//int distance2 = character.y - enemy.y; 	 

	//double distance = sqrt(pow(distance1,2)+pow(distance2,2));	 

	//if (distance <= 5.0f)
	//{
	//	printf("���ݹ��� �Դϴ�");
	//}
	//else
	//{
	//	printf("���ݹ����� �ƴմϴ�");
	//}

#pragma endregion

#pragma region �ڱ�_����_����ü

	/*
	struct Node node1={10,NULL};
	struct Node node2={20,NULL};
	struct Node node3={30,NULL};

	node1.next = &node2;

	node2.next = &node3;

	node3.next = NULL;

	struct Node* currentptr=&node1;

	while(currentptr != NULL)
	{
		printf("currentNode.data = %d\n",currentptr->data );
		currentptr = currentptr->next;

	}
	*/










#pragma endregion











	return 0;
}





































