#include <stdio.h>
exam1()
{

	int i,j;
	
	for(i=2;i<=9;i++)
	{
		printf("*** %d단 *** \n",i);
		for(j=1;j<=9;j++)
		{
			printf("%d * %d = %d\n",i,j,i*j);
		}
		printf("\n");
	}
}
exam2()
{
	int i,j;
	
	for(i=2;i<=9;i++)
		printf("*** %d단 ***\t",i);
	printf("\n");
	
	for(i=1;i<=9;i++)
	{
		for(j=2;j<=9;j++)
		{
			printf("%d * %d = %d\t",j,i,i*j);
		}
		printf("\n");
	}
}

main()
{
	int no;
	
	while(1)
	{
		printf("\n방법 번호 : ");
		scanf("%d",&no);
		printf("19번-%d번 방법\n",no);
		switch(no)
		{
			case 1: exam1(); break;
			case 2: exam2(); break;
		}
	
	}
	
}
