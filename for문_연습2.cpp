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
		printf("�� �� �����Դϱ�? : ");
		scanf("%d", &no);
		printf("%d�� ����\n",no);
		switch(no){
			case 1 : func1(); break;
//			case 2 : func2(); break;
//			case 3 : func3(); break;
			default :
				printf("�߸� �Էµ�\n");
				return 0;
		}
	}
}

