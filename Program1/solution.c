#include <stdio.h>
#include <time.h>


	
int main()		 
{
#pragma region rand()함수

	// 0~ 32767 사이의 난수 값을 생성하고 반환하는 함수 

	// seed 값으로 현재 시간을 넣으면 초당 seed 값이 
	// 계속해서 변환되기 때문에 실행할 떄마다 랜덤한
	// 난수의 값을 얻을 수 있음.

	/*
	srand(time(NULL));
	int seed = rand();
	
	
	for (int i = 0; i < 5; i++)
	{
		 seed = rand()%10+1;
		 
		printf("seed값 : %d\n", seed);
	}
	*/
	


#pragma endregion
#pragma region UpDown게임
	/*
	int Player = 0;
	srand(time(NULL));
	int seed = rand() % 100 + 1;
	printf("1~100까지의 수에서 하나를 골라 작성하시오 : ");
	*/

	/*
	for (int i = 0; i < 5; i++)
	{
		scanf_s("%d", &Player);
		if (Player > seed)
		{
			printf("Down\n");
		}
		else if (Player < seed)
		{
			printf("Up\n");
		}
		else if (Player == seed)
		{
			printf("정답\n");
			i = i + 5;
		}
		if (i == 4 && Player != seed)
		{
			printf("실패");
		}
	}
	*/
	int life = 5;
	
	//컴퓨터가 가지고 있는 값을 맞추기위한 변수 선언
	int Player = 0;

	
	srand(time(NULL));
	//컴퓨터 변수에 1~20까지의 난수 값을 넣어줌
	int Computer = rand() % 21;
	
	
	printf("Up Down Game");
	
	while (1)
	{
		printf("\n");
		for (int i = 0; i < life; i++)
		{
			printf("♥");
				
		}
		printf("\n"); // 입력을 받을수 있는 텍스트를 출력
		
		scanf_s("%d", &Player);
		
		system("cls");
		if (Player > Computer)
		{
			printf("Down");
			life--;
		}
		else if (Player < Computer)
		{
			printf("Up");
			life--;
		}
		else if (Player == Computer)
		{
			printf("\n*********정답*********\n");
			break;
		}
		if (life <= 0)
		{
			printf("\n실패\n");
			break;
		}

		


		
		
	}
	

	return 0;   
}










































