#include <stdio.h>
main()
{ 
	// 정수형 데이터 5개를 저장할 배열 score 선언
	int score[5];
	int i, sum = 0;
	
	// 5개의 점수를 입력받아 배열 score에 저장
	for(i=0;i<5;i++)
	{
		printf("%d번 학생의 프로그래밍 성적을 입력 : ",i+1);
		scanf("%d",&score[i]);
	}
	
	// 성적의 총점과 평균 출력
	for(i=0;i<5;i++)
		sum+=score[i];
	printf("총점 : %d\n",sum);
	printf("평균 : %.2f\n",sum/5.0);
	
}

