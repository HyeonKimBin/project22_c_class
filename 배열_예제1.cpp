#include <stdio.h>
main()
{ 
	
	// ������ ������ 3���� ������ �迭 num ���� 
	int i;
	int num[3];
	
	// �迭 num�� 10, 20, 30 ���� 
	num[0] = 10;
	num[1] = 20;
	num[2] = 30;
	
	// ����ϱ�
	/*	num[0] = 10;
		num[1] = 20;
		num[2] = 30;	*/
	for(i=0;i<3;i++)
		printf("num[%d] = %d\n",i,num[i]);
}
