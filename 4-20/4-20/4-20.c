#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>     //#include<stdlib.h>


//��ӡ"hehe"
/*     
int main()
{
	printf("hehe\n");
	system("pause");
	return 0;
}
*/




//��ƽ����
/*
int main()
{
	int a = 2147483646;
	int b = 2147483646;
	//int c = (a+b)/2;    ���Ϊ-2
	int c = a+(b-a)/2;

	printf("c = %d\n", c);
	system("pause");
	return 0;
}
*/



//2����ƿ�ӻ�����
/*
int main()
{
	int money = 0;
	int total = 0;
	int empty = 0;
	scanf("%d", &money);  //20   �𰸣�39      2n-1
	
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

//�ػ�
#include <string.h>
int main()
{
	char input[20];
	system("shutdown -s -t 60");

again:
	printf("��ע�⣺��ĵ�����1�����ڹؽ���������룺��������ȡ���ػ�\n");
	scanf("%s", input);
	if (strcmp(input, "������") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}