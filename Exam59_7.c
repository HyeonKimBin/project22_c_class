#include <stdio.h>
int main()
{
    char mark[5][5] = {'\0'};
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i==j || i==(4-j)) mark[i][j] = 'X';
        }
    }

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%2c",mark[i][j]);
        }
        printf("\n");
    }

    return 0;
}