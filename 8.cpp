#include <stdio.h>
main()
{
	// for문을 이용하여 두 정수를 입력받아 
	//두 수 사이의 정수를 오름차순으로 출력하는 프로그램을 작성해 보자.
	
	int a,b,temp,i;
	
	printf("*** 두 수 구간의 숫자 출력하기 ***\n");
	printf("두 수 입력 : ");
	scanf("%d %d",&a,&b);
	
	if(a>b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	
	for(i=a;i<=b;i++)
	{
		printf("%d ",i);
	}
}
