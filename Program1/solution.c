#include <stdio.h>


void main()
{

#pragma region 반복문
	// 프로그램 내에서 특정한 작업을 반복적으로
	// 수행하는 명령문.
#pragma region 증감_연산자
	// 피연산자를 하나씩 증가시키거나 감소시킬 때
	// 사용하는 연산자

	/*
	int data = 0;											  <전위 증감연산자>
	int result = 0;                    1. 변수의 값을 증가시킨후에 데이터를 넣어줌 (기존의 data == 0--> 증가--> data==1)
	result = ++data;				   2. 변수의 값을 할당함.(1이라는 data 값을 result에 할당)
    									   (2) result : 1 <-- (1) data : 1
	*/	

	/*
	int data = 0;											  <후위 증감연산자>
	int result = 0;                    1. 변수의 값을 할당함.(0이라는 data 값을 result에 할당)
	result = data++;				   2. 변수의 값을 증가시킨후에 데이터를 넣어줌 (기존의 data == 0--> 증가--> data==1)
										   (1) result : 0    (2) data : 1
	*/

	/*
	int data = 0;
	int result = 0;
	
	result = ++data;	// (2) result : 1 <-- (1) data : 1
	result = data--;	// (1) result : 1     (2) data : 0

	printf(" result 의 값은 %d\n", data);		     
	printf(" data 의 값은 %d\n", result);  	         
													
													
	result = data++;	// (1) result : 0     (2) data : 1
	result = --data;	// (2) result : 0 <-- (1) data : 0					  
				
	printf(" data 의 값은 %d\n", data);		        
	printf(" result 의 값은 %d\n", result);	*/		

   // 전위 증감 연산자는 변수의 값을 증감시킨 후에 연산을
   // 수행하고, 후위 증감 연산자는 연산을 수행한 다음 변수의 값을 증감시킴.
	               

#pragma endregion

#pragma region for문
	// 초기식을 연산하여 조건식의 결과에 따라 특정한 횟수만큼
	// 반복하는 반복문.
	
	/* 
	   1. 초기식 설정
	   2. 조건식 비교
	   3. (조건이 참이면) 안에있는 반복문을 출력 (1번)
	   4. 증감식으로 들어가서 값을 증감시킴
	   5. 조건식을 비교 
	   --> 2,3,4,5 를 조건이 거짓이 될때까지 반복함
	*/

	/*
	for (int i = 0; i < 5; i++)
	{
		printf(" Hello World \n");
	}
	*/
	// for문의 경우 조건이 끝나는 형태와 반대로 초기식을
	// 연산하게 되면 조건이 일치하지 않아 계속 반복적으로 
	// 실행되는 문제가 발생하게 됨.


#pragma endregion

#pragma region for문_응용문제

	// 5~1사이의 값을 순서대로 출력하기
	
	/*
	for (int a = 5 ; a > 0  ; a--) 
	{
		printf(" %d \n", a);
	}
	*/
	// 1~10 까지의 합
	
	//int sum = 0; 
	//for (int a = 0 ;  a < 11;  a++)	   
	//{ 
	//   sum = sum + a ; 	 		                         
	//														이해방법: sum= sum+0 (1) a=1 sum = sum +1 (2) 왼쪽 sum 에 1이 대입됨
	//														// 	(3) a=2 sum = 1 + 2 (오른쪽 sum =1 왼쪽 sum 에 1+2를 대입)
	//}														// a = b : a에  b를 대입 sum= (sum+a) 

	//printf("1부터 10까지 더한값은 %d\n", sum);
#pragma endregion



#pragma endregion


}


