#include <stdio.h>
exam1()
{

	int i,j;
	
	for(i=2;i<=9;i++)
	{
		printf("*** %d�� *** \n",i);
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
		printf("*** %d�� ***\t",i);
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
		printf("\n��� ��ȣ : ");
		scanf("%d",&no);
		printf("19��-%d�� ���\n",no);
		switch(no)
		{
			case 1: exam1(); break;
			case 2: exam2(); break;
		}
	
	}
	
}
