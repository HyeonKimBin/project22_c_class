#include <stdio.h>
main()
{
	//1���� �Է¹��� ��(n)���� ��(sum)�� ����غ���. 
	
	int n,sum,i=1;
	
	printf("���� ���� ������ �� �Է� : ");
	scanf("%d",&n);
	
	while(i<=n)
	{
		sum+=i;
		i++;
	}
	printf("1���� %d������ ���� %d�Դϴ�",n,sum);
}
