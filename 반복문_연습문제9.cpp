#include <stdio.h>

func1(){
	int i, j;
	for(i=0;i<5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("O");
		}
		printf("*\n");
	}
}
func2(){
	int i=1,j;
	
	while(i<=5)
	{
		j=1;
		while(j<i)
		{
			printf("O");
			j++;
		}
		printf("*\n");
		i++;
	}
}
	

main()
{
	int no;
	
	while(1){
		printf(" *** 1번 : for문 // 2번 : while문 *** \n"); 
		printf("어떻게 풀겠습니까? : ");
		scanf("%d", &no);
		printf("%d번 문제\n",no);
		switch(no){
			case 1 : func1(); break;
			case 2 : func2(); break;
			default :
				printf("잘못 입력됨\n");
				return 0;
		}
	}
}

