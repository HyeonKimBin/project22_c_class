#include <stdio.h>
main()
{ 
	// ������ ������ 6���� ������ �迭 data ����
	int data[6], i;
	
	// 6���� ������ �Է¹޾� �迭 data�� ����
	for(i=0;i<6;i++)
	{
		printf("������ �Է� : ");
		scanf("%d",&data[i]);
	}
	
	// �������� ���
	for(i=5;i>=0;i--)
	{
		printf("%d ",data[i]);
	}
}

