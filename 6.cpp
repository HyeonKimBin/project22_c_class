#include <stdio.h>
main()
{
	// do~while���� �̿��Ͽ� ����ڰ� �Է��� 
	//���� ������ �ڸ����� �ݴ�� ����ϴ� ���α׷��� �ۼ��غ���
	
	int n,i;
	
	printf("4�ڸ��� �Է� : ");
	scanf("%d",&n);
	
	do
	{
		printf("%d",n%10);
		n/=10;
		i++;
	} while(i<4);
} 
