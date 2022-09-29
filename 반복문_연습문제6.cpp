#include<stdio.h>
main()
{
	int a,b,temp,i;
	printf("*** 두 수 구간의 숫자 출력하기 ***\n");
	printf("두 수 입력 : ");
	scanf("%d %d", &a,&b);
	
	if( a > b )
	{
		temp = a;
		a = b;
		b = temp;
	}
	for(i=a;i<=b;i++)
		printf("%d ",i);
}
