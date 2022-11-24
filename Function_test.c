#include <stdio.h>
void myPrint(char * str, int i){
    printf("[%d] %s\n",i,str);
//    printf("=====================\n");
}

int add(int a, int b){
    int sum = a+b;
    printf("%d+%d=%d\n",a,b,sum);
    myPrint("합의 결과", sum);
    return sum;
}

// 입력으로 숫자 하나를 받아서 숫자 개수만큼 *을 출력
// 함수 이름 -> printStar

void printStar(int len){
    for(int i=1;i<=len;i++)
        printf("*");
    printf("\n\n");
}

int main()
{
    myPrint("10607 김현빈", 2);
    myPrint("서울로봇고", 3);
    myPrint("시스템과", 1);
    
    printStar(add(3, 5));
    printStar(add(7, 2));

    return 0;
}