#include <stdio.h>
exam1()
{
	int i,j;
	for(i=1;i<=5;++i)
	{
		for(j=1;j<=i;++j)
			printf("*");
		printf("\n");
	}
	for(i=4;i>=1;--i)
	{
		for(j=i;j>=1;--j)
			printf("*");
		printf("\n");
	}	
}
exam2()
{
	int i,j;
	for(i=1;i<=5;++i)
	{
		for(j=1;j<=i;++j)
			printf("*");
		printf("\n");
	}
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=5-i;j++)
			printf("*");
		printf("\n");
	}
}

main()
{
	int no;
	
	while(1)
	{
		printf("\n문제번호 : ");
		scanf("%d",&no);
		printf("18-%d번 문제\n",no);
		switch(no)
		{
			case 1: exam1(); break;
			case 2: exam2(); break;
		}
	
	}
	
}
