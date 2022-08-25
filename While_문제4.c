#include <stdio.h>
main()
{
	int n, count = 0, sum = 0;
	
	do
	{
		printf("정수 입력 : ");
		scanf("%d",&n);
		if(n < 1) continue;
		sum+=n;
		count++;
		
	}while(count < 5);
	
	printf("합계 : %d\n", sum);
}
