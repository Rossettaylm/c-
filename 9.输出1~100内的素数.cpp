//���1~100�ڵ����� 


#include <stdio.h>
int main()
{
	int x;
	for (x=2;x<=100;x++)
	{
		int i;
	 	int isPrime=1; //ÿ��ѭ���������1 
		for (i=2;i<x;i++)
		{
			if (x%i==0)
			{
			 isPrime=0;
			 break;  //����x�ܱ���������������������ѭ����x=x+1 
		    }
		}
		if (isPrime==1)
		printf("%d ",x);
	}
	  printf("\n");
	
	return 0;
}
