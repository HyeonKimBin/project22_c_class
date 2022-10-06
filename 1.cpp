#include <stdio.h>
main()
{
	//30부터 10까지 짝수를 출력해보자
	
	int i;
	
	
	i = 30;
	while(i>=10)
	{
		if(i%2==0)
			printf("%d ",i); 
		i--;
	}
}
