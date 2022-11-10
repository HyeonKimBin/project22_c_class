#include <stdio.h>
main()
{
	int h[] = {170,178,175,180,177,167,189,120,124};
	int i,h_min = h[0], num;
	int SIZE = sizeof(h)/sizeof(int);
	
	for(i=0;i<SIZE;i++)
	{
		if(h[i] < h_min)
		{
			h_min = h[i];
			num = i+1;
		}
	}
	printf("가장 키가 작은 학생번호 = %d번, 키 = %dcm\n",num,h_min);
}
