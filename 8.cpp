#include <stdio.h>
main()
{
	// for���� �̿��Ͽ� �� ������ �Է¹޾� 
	//�� �� ������ ������ ������������ ����ϴ� ���α׷��� �ۼ��� ����.
	
	int a,b,temp,i;
	
	printf("*** �� �� ������ ���� ����ϱ� ***\n");
	printf("�� �� �Է� : ");
	scanf("%d %d",&a,&b);
	
	if(a>b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	
	for(i=a;i<=b;i++)
	{
		printf("%d ",i);
	}
}
