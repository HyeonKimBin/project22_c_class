#include <stdio.h>
main()
{
	int i = 1,sum = 0;
	while(i<=10)
	{
		sum+=i; //sum = sum + i
		i++;
	}
	printf("1부터 10까지의 합 : %d\n",sum);
}
