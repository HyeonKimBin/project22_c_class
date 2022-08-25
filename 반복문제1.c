#include <stdio.h>
main()
{
	int i = 0, sum = 0;
	
	while(1)
	{
		i++;
		if(i > 10) break;
		if(i%5==0) continue;
		sum+=i;
	}
	printf("sum = %d\n",sum);
	
	/*int i = 0, sum = 0;
	
	while(1)
	{
		if(i > 10) break;
		if(i%5!=0) sum+=i; 
		i++;
	}
	printf("sum = %d\n",sum);*/
}
