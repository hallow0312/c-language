#include <stdio.h>


void main()
{

#pragma region �ݺ���
	// ���α׷� ������ Ư���� �۾��� �ݺ�������
	// �����ϴ� ��ɹ�.
#pragma region ����_������
	// �ǿ����ڸ� �ϳ��� ������Ű�ų� ���ҽ�ų ��
	// ����ϴ� ������

	/*
	int data = 0;											  <���� ����������>
	int result = 0;                    1. ������ ���� ������Ų�Ŀ� �����͸� �־��� (������ data == 0--> ����--> data==1)
	result = ++data;				   2. ������ ���� �Ҵ���.(1�̶�� data ���� result�� �Ҵ�)
    									   (2) result : 1 <-- (1) data : 1
	*/	

	/*
	int data = 0;											  <���� ����������>
	int result = 0;                    1. ������ ���� �Ҵ���.(0�̶�� data ���� result�� �Ҵ�)
	result = data++;				   2. ������ ���� ������Ų�Ŀ� �����͸� �־��� (������ data == 0--> ����--> data==1)
										   (1) result : 0    (2) data : 1
	*/

	/*
	int data = 0;
	int result = 0;
	
	result = ++data;	// (2) result : 1 <-- (1) data : 1
	result = data--;	// (1) result : 1     (2) data : 0

	printf(" result �� ���� %d\n", data);		     
	printf(" data �� ���� %d\n", result);  	         
													
													
	result = data++;	// (1) result : 0     (2) data : 1
	result = --data;	// (2) result : 0 <-- (1) data : 0					  
				
	printf(" data �� ���� %d\n", data);		        
	printf(" result �� ���� %d\n", result);	*/		

   // ���� ���� �����ڴ� ������ ���� ������Ų �Ŀ� ������
   // �����ϰ�, ���� ���� �����ڴ� ������ ������ ���� ������ ���� ������Ŵ.
	               

#pragma endregion

#pragma region for��
	// �ʱ���� �����Ͽ� ���ǽ��� ����� ���� Ư���� Ƚ����ŭ
	// �ݺ��ϴ� �ݺ���.
	
	/* 
	   1. �ʱ�� ����
	   2. ���ǽ� ��
	   3. (������ ���̸�) �ȿ��ִ� �ݺ����� ��� (1��)
	   4. ���������� ���� ���� ������Ŵ
	   5. ���ǽ��� �� 
	   --> 2,3,4,5 �� ������ ������ �ɶ����� �ݺ���
	*/

	/*
	for (int i = 0; i < 5; i++)
	{
		printf(" Hello World \n");
	}
	*/
	// for���� ��� ������ ������ ���¿� �ݴ�� �ʱ����
	// �����ϰ� �Ǹ� ������ ��ġ���� �ʾ� ��� �ݺ������� 
	// ����Ǵ� ������ �߻��ϰ� ��.


#pragma endregion

#pragma region for��_���빮��

	// 5~1������ ���� ������� ����ϱ�
	
	/*
	for (int a = 5 ; a > 0  ; a--) 
	{
		printf(" %d \n", a);
	}
	*/
	// 1~10 ������ ��
	
	//int sum = 0; 
	//for (int a = 0 ;  a < 11;  a++)	   
	//{ 
	//   sum = sum + a ; 	 		                         
	//														���ع��: sum= sum+0 (1) a=1 sum = sum +1 (2) ���� sum �� 1�� ���Ե�
	//														// 	(3) a=2 sum = 1 + 2 (������ sum =1 ���� sum �� 1+2�� ����)
	//}														// a = b : a��  b�� ���� sum= (sum+a) 

	//printf("1���� 10���� ���Ѱ��� %d\n", sum);
#pragma endregion



#pragma endregion


}


