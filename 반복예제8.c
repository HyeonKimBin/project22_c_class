#include <stdio.h>
main()
{
	int count = 1;
	
	while(1)
	{
		printf("%d ",count);
		count++;
		
		if(count > 10) break;
	}
	
	/*// 1 3 5 7 9
	
	while(1)
	{
		printf("%d ",count);
		count+=2;
		
		if(count > 10) break;
	}*/
}
