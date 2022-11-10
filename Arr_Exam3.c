#include <stdio.h>
int main()
{
    int i,n;
    int a[10] = {65, 45, 73, 5, 82, 25, 3, 34, 12, 20};

    printf("검색할 데이터 : ");
    scanf("%d",&n);

    for(i=0;i<10;i++)
    {
        if(a[i]==n)
        {
            printf("%d은(는) a[%d]에 있습니다.\n",n,i);
            break;
        }
    }
    
    if(i >= 10)
         printf("%d은 찾을 수 없습니다.\n",n);

    return 0;
}