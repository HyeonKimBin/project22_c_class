#include <stdio.h>
main()
{
	/*int i = 1, n , sum = 0;
	
	printf("���� ���� ������ �� �Է� : ");
	scanf("%d",&n);
	
	while(i<=n)
	{
		sum+=i;
		i++;
	}
	printf("1���� %d������ ���� %d�Դϴ�.\n",n,sum); */
	
	int i,n,sum = 0;
	int start;
	
	printf("���� ���� ù ���� �� �Է� : ");
	scanf("%d",&i);
	start = i;
	 
	printf("���� ���� ������ �� �Է� : ");
	scanf("%d",&n);
	
	while(i<=n)
	{
		sum+=i;
		i++;
	}
	printf("%d���� %d������ ���� %d�Դϴ�.\n",start,n,sum);
}
