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
		printf(" *** 1�� : for�� // 2�� : while�� *** \n"); 
		printf("��� Ǯ�ڽ��ϱ�? : ");
		scanf("%d", &no);
		printf("%d�� ����\n",no);
		switch(no){
			case 1 : func1(); break;
			case 2 : func2(); break;
			default :
				printf("�߸� �Էµ�\n");
				return 0;
		}
	}
}

