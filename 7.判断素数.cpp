#include <stdio.h>
int main()
{
	int x;
	int i;
	int isPrime=1;
	printf("������һ����������");
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
		printf("x������\n");
	}
	else 
	{
		printf("x��������\n");
	}
	return 0;
}
