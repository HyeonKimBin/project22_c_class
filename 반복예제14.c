#include <stdio.h>
main()
{
	int sum = 0, n;
	do
	{
		printf("정수 입력(0이면 종료) : ");
		scanf("%d",&n);
		sum+=n;
	} while(n != 0);
	printf("합 : %d",sum);
}
