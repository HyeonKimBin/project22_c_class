#include <stdio.h>
main()
{
	// while������ ���� ������ ����Ͽ� 1~10������ ���� ���ϵ� 5�� ����� �����ϴ� ���α׷��� ����غ���.
	
	int i=1,sum=0;
	
	while(1)
	{
		if(i>10) break;
		if(i%5!=0)
			sum+=i;
		i++;
		
	}
	printf("sum = %d",sum);
}
