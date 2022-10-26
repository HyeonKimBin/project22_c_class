#include <stdio.h>
main()
{ 
	// 정수형 데이터 6개를 저장할 배열 data 선언
	int data[6], i;
	
	// 6개의 정수를 입력받아 배열 data에 저장
	for(i=0;i<6;i++)
	{
		printf("정수를 입력 : ");
		scanf("%d",&data[i]);
	}
	
	// 역순으로 출력
	for(i=5;i>=0;i--)
	{
		printf("%d ",data[i]);
	}
}

