#include <stdio.h>
int main()
{
    int arr[5];
    int max,min,i;

    for(i=0;i<5;i++)
    {
        printf("입력 : ");
        scanf("%d",&arr[i]);
    }
    max=0,min=100;

    for(i=0;i<5;i++)
    {
        if(max < arr[i]) max = arr[i];
        if(min > arr[i]) min = arr[i];
    }

    printf("최대값 : %d\n",max);
    printf("최소값 : %d\n",min);
    
    return 0;
}