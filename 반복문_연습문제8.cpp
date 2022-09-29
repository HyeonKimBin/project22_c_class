#include<stdio.h>
main()
{
	int num;
	
	while(1)
	{
		printf("¼ıÀÚÀÔ·Â : ");
		scanf("%d", &num);
		if(num < 0) break;
		if(num == 0) continue;
		if(num%2==0)
			printf("Â¦¼ö\n");
		else
			printf("È¦¼ö\n");
	}
}
