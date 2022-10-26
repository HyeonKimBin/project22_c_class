#include <stdio.h>
main()
{ 
	// 정수형 데이터 5개를 저장할 배열 score 선언
	int score[5];
	int i, max = 0;
	
	// 5개의 점수를 입력받아 배열 score에 저장
	for(i=0;i<5;i++)
	{
		printf("%d번 학생의 프로그래밍 성적을 입력 : ",i+1);
		scanf("%d",&score[i]);
	}
	
	// 최고 점수(max) 출력 
	for(i=0;i<5;i++)
		if(max < score[i])
			max = score[i];
	printf("최고 점수 : %d\n",max); 
}

