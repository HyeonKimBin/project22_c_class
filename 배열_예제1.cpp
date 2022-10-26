#include <stdio.h>
main()
{ 
	
	// 정수형 데이터 3개를 저장할 배열 num 선언 
	int i;
	int num[3];
	
	// 배열 num에 10, 20, 30 저장 
	num[0] = 10;
	num[1] = 20;
	num[2] = 30;
	
	// 출력하기
	/*	num[0] = 10;
		num[1] = 20;
		num[2] = 30;	*/
	for(i=0;i<3;i++)
		printf("num[%d] = %d\n",i,num[i]);
}
