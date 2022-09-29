#include<stdio.h>
main()
{
	int n,i, jumsu;
	int max = 0, min = 100;
	printf("학생수를 입력하세요 : ");
	scanf("%d",&n);
	printf("점수를 입력하세요(0~100) : ");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&jumsu);
		if(jumsu>max) max = jumsu;
		else if(jumsu<min) min = jumsu;
	}
	printf("1등은 %d점, 꼴지는 %d점\n",max,min);
}

// 95 22 98 56 15 10 77
