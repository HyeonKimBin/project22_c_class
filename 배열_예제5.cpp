#include <stdio.h>
main()
{ 
	// ������ ������ 5���� ������ �迭 score ����
	int score[5];
	int i, sum = 0;
	
	// 5���� ������ �Է¹޾� �迭 score�� ����
	for(i=0;i<5;i++)
	{
		printf("%d�� �л��� ���α׷��� ������ �Է� : ",i+1);
		scanf("%d",&score[i]);
	}
	
	// ������ ������ ��� ���
	for(i=0;i<5;i++)
		sum+=score[i];
	printf("���� : %d\n",sum);
	printf("��� : %.2f\n",sum/5.0);
	
}

