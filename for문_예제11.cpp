#include <stdio.h>
main()
{
	int num1,num2,i;
	
	printf("공배수를 구할 두 정수 입력 : ");
	scanf("%d %d",&num1,&num2);
	
	for(i=1;i<=100;i++)
		if(i%num1 + i%num2 == 0)
			printf("%d ",i);
}
