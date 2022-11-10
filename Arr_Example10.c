#include <stdio.h>
int main()
{
    int i;
    char str[] = "Good Time";
    for(i=0;i<10;i++)
        printf("str[%d] = %c\n",i,str[i]);
    return 0;
}