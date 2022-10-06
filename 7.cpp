#include <stdio.h>
main()
{
	// 파보나치 수열은 다음과 같이 정의되는 수열이다.
	//파보나치 수열을 생성하여 출력해보자.
	
	int n,a1=0,a2=1,a3,i;
	
	printf("몇 번째 항까지 구할까요? : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("%d ",a1);
		a3 = a1 + a2;
		
		a1 = a2;
		a2 = a3;
	 } 
}
