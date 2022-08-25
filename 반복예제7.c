#include <stdio.h>
main()
{
	int dan, n = 9;
	printf("¸î ´Ü ? ");
	scanf("%d",&dan);
	
	printf("*** %d´Ü ***\n",dan);
	
	while(n > 0)
	{
		printf("%d * %d = %d\n",dan,n,dan*n);
		n--;
	}
}
