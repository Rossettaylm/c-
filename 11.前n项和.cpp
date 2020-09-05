//求f（n）=1/n 的前n项和
#include <stdio.h>
int main()
{
	int n;
	double sum=0.0;
	int sign=1;
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		sum+=1.0/i; //保证1/n为浮点数
		 //sum+=sign*1.0/n;
        //sign=-sign;      带符号求和 
	}
	 printf("f(%d)=%f\n",n,sum);
	
	return 0;
} 
