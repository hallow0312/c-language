#include <stdio.h>
#include <math.h>  

struct Player
{
	// 구조체 크기의 경우 멤버 변수의 순서에 따라 메모리의 크기가 다르게 설정될 수있음
	char blood;			// 1 byte
	int health;			// 4 byte
	float attack;		// 4 byte
	double defence;		// 8 byte
	// 구조체를 선언하기 전에 구조체는 메모리 공간이 
	// 생성이 되지 않으므로, 구조체 내부에 있는 데이터를 
	// 초기화 할 수 없다.
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
#pragma region 구조체

	// 여러 개의 변수를 하나의 집합으로 구조화한 다음 
	// 하나의 객체를 생성하는 것 .

	//struct Player player={'B',75,5.5f}; 	  //Player : 자료형 player :변수

	/*
	player.attack = 10.5f;
	player.blood = 'A';
	player.health = 100;
	*/

	/*
	printf("player.attack의값 : %0.1f\n", player.attack);
	printf("player.blood의값  : %c형\n", player.blood);
	printf("player.health의값 : %d\n", player.health);
	*/


#pragma region 바이트패딩

	// 멤버 변수를 메모리에서 CPU로 읽을 때 한번에 읽을 수 
	// 있도록 , 컴파일러가 레지스터의 블록에 맞추어 바이트를 
	// 패딩해주는 최적화 작업.


	//printf("Player 구조체의 크기 : %d\n", sizeof(struct Player));	 

	// 구조체의 크기는 구조체를 구성하는 멤버중에서 크기가 가장 큰 
	// 자료형의 '배수' 가 되도록 정렬.
#pragma endregion


#pragma endregion

#pragma region 두_점사이의_거리
	/*printf("Root 25 : %f\n", sqrt(25));
	printf("pow 2에 3승 : %lf\n", pow(2, 3));*/

	//struct Character character = { 0,0 };
	//struct Enemy enemy = { 5,4 };

	//// 두점 사이의 거리가 5.0  이하 공격범위 
	//// 두점 사이의 거리가 5.0 초과 공격범위 

	//int distance1 = character.x - enemy.x;  
	//int distance2 = character.y - enemy.y; 	 

	//double distance = sqrt(pow(distance1,2)+pow(distance2,2));	 

	//if (distance <= 5.0f)
	//{
	//	printf("공격범위 입니다");
	//}
	//else
	//{
	//	printf("공격범위가 아닙니다");
	//}

#pragma endregion

#pragma region 자기_참조_구조체

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





































