#include <stdio.h>
#include <time.h>


	
int main()		 
{
#pragma region rand()�Լ�

	// 0~ 32767 ������ ���� ���� �����ϰ� ��ȯ�ϴ� �Լ� 

	// seed ������ ���� �ð��� ������ �ʴ� seed ���� 
	// ����ؼ� ��ȯ�Ǳ� ������ ������ ������ ������
	// ������ ���� ���� �� ����.

	/*
	srand(time(NULL));
	int seed = rand();
	
	
	for (int i = 0; i < 5; i++)
	{
		 seed = rand()%10+1;
		 
		printf("seed�� : %d\n", seed);
	}
	*/
	


#pragma endregion
#pragma region UpDown����
	/*
	int Player = 0;
	srand(time(NULL));
	int seed = rand() % 100 + 1;
	printf("1~100������ ������ �ϳ��� ��� �ۼ��Ͻÿ� : ");
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
			printf("����\n");
			i = i + 5;
		}
		if (i == 4 && Player != seed)
		{
			printf("����");
		}
	}
	*/
	int life = 5;
	
	//��ǻ�Ͱ� ������ �ִ� ���� ���߱����� ���� ����
	int Player = 0;

	
	srand(time(NULL));
	//��ǻ�� ������ 1~20������ ���� ���� �־���
	int Computer = rand() % 21;
	
	
	printf("Up Down Game");
	
	while (1)
	{
		printf("\n");
		for (int i = 0; i < life; i++)
		{
			printf("��");
				
		}
		printf("\n"); // �Է��� ������ �ִ� �ؽ�Ʈ�� ���
		
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
			printf("\n*********����*********\n");
			break;
		}
		if (life <= 0)
		{
			printf("\n����\n");
			break;
		}

		


		
		
	}
	

	return 0;   
}










































