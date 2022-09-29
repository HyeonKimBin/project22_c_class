#include <stdio.h>
main()
{
	int n=1, sum=0;
	
	while(1)
	{
		sum+=n;
		if(sum>=100) break;
		n++;
	}
	printf("sum = %d, n = %d\n",sum,n);
}
