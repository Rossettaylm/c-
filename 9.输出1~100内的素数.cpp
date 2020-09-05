//输出1~100内的素数 


#include <stdio.h>
int main()
{
	int x;
	for (x=2;x<=100;x++)
	{
		int i;
	 	int isPrime=1; //每次循环令其等于1 
		for (i=2;i<x;i++)
		{
			if (x%i==0)
			{
			 isPrime=0;
			 break;  //假如x能被整除，则不是素数，跳出循环，x=x+1 
		    }
		}
		if (isPrime==1)
		printf("%d ",x);
	}
	  printf("\n");
	
	return 0;
}
