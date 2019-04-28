#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>     //#include<stdlib.h>


//打印"hehe"
/*     
int main()
{
	printf("hehe\n");
	system("pause");
	return 0;
}
*/




//求平均数
/*
int main()
{
	int a = 2147483646;
	int b = 2147483646;
	//int c = (a+b)/2;    结果为-2
	int c = a+(b-a)/2;

	printf("c = %d\n", c);
	system("pause");
	return 0;
}
*/



//2个空瓶子换饮料
/*
int main()
{
	int money = 0;
	int total = 0;
	int empty = 0;
	scanf("%d", &money);  //20   答案：39      2n-1
	
	//total = money;
	//empty = money;
	//while(empty>=2)
	//{
	//	total = total + empty/2;
	//	empty = empty/2 + empty%2;
	//}
	
	total = money*2-1;

	printf("total = %d\n", total);
	system("pause");
	return 0;
}
*/

//关机
#include <string.h>
int main()
{
	char input[20];
	system("shutdown -s -t 60");

again:
	printf("请注意：你的电脑在1分钟内关进，如果输入：我是猪，就取消关机\n");
	scanf("%s", input);
	if (strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}