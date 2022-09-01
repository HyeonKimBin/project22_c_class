#include <stdio.h>

func1(){
	int i;
}
func2(){
	int i;
}
func3(){
	int i;
}
	

main()
{
	int no;
	
	while(1){
		printf("몇 번 문제입니까? : ");
		scanf("%d", &no);
		printf("%d번 문제\n",no);
		switch(no){
			case 1 : func1(); break;
//			case 2 : func2(); break;
//			case 3 : func3(); break;
			default :
				printf("잘못 입력됨\n");
				return 0;
		}
	}
}

