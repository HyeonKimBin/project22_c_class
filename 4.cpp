#include <stdio.h>
main()
{
	// while������ �Է¹��� ��(su)�� �Ҽ����� �Ǻ��ؼ� ����غ���.
	
	
	int su,i,cnt=0;
	
	printf("���� �Է� : ");
	scanf("%d",&su);
	
	i=1;
	while(i <= su)
	{
		if(su%i==0)
			cnt++;
		i++;
	}
	
	if(cnt == 2)
		printf("%d��(��) �Ҽ�\n",su);
	else
		printf("%d��(��) �Ҽ��� �ƴ�\n",su); 
}
