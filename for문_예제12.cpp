#include <stdio.h>
main()
{
	int num = 1, sum = 0;
	
	for(;;)
	{
		sum = sum + num;
		printf("%d?????? ??: %d \n",num,sum);
		num++;
		if(num==6) break;
	}
}
