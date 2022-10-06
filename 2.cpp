#include <stdio.h>
main()
{
	//1부터 입력받은 수(n)까지 합(sum)을 출력해보자. 
	
	int n,sum,i=1;
	
	printf("합을 구할 마지막 수 입력 : ");
	scanf("%d",&n);
	
	while(i<=n)
	{
		sum+=i;
		i++;
	}
	printf("1부터 %d까지의 합은 %d입니다",n,sum);
}
