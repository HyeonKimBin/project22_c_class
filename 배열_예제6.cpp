#include <stdio.h>
main()
{ 
	// ������ ������ 5���� ������ �迭 score ����
	int score[5];
	int i, max = 0;
	
	// 5���� ������ �Է¹޾� �迭 score�� ����
	for(i=0;i<5;i++)
	{
		printf("%d�� �л��� ���α׷��� ������ �Է� : ",i+1);
		scanf("%d",&score[i]);
	}
	
	// �ְ� ����(max) ��� 
	for(i=0;i<5;i++)
		if(max < score[i])
			max = score[i];
	printf("�ְ� ���� : %d\n",max); 
}

