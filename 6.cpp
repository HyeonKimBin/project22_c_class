#include <stdio.h>
main()
{
	// do~while문을 이용하여 사용자가 입력한 
	//양의 정수의 자리수를 반대로 출력하는 프로그램을 작성해보자
	
	int n,i;
	
	printf("4자리수 입력 : ");
	scanf("%d",&n);
	
	do
	{
		printf("%d",n%10);
		n/=10;
		i++;
	} while(i<4);
} 
