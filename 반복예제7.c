#include <stdio.h>
main()
{
	int dan, n = 9;
	printf("�� �� ? ");
	scanf("%d",&dan);
	
	printf("*** %d�� ***\n",dan);
	
	while(n > 0)
	{
		printf("%d * %d = %d\n",dan,n,dan*n);
		n--;
	}
}
