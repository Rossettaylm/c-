#include <stdio.h>
int main()
{
	int x;
	int i;
	int isPrime=1;
	printf("请输入一个正整数：");
	scanf ("%d",&x);
	for (i=2;i<x;i++)
	{
		if (x%i==0)
		{
			isPrime=0;
			break;
		} 
	}
	if(isPrime==1)
	{
		printf("x是素数\n");
	}
	else 
	{
		printf("x不是素数\n");
	}
	return 0;
}
