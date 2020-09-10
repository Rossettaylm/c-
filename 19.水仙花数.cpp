//习题5-6 使用函数输出水仙花数 (20分)
//水仙花数是指一个N位正整数（N≥3），它的每个位上的数字的N次幂之和等于它本身。例如：153=1
// 本题要求编写两个函数，一个判断给定整数是否水仙花数，另一个按从小到大的顺序打印出给定区间(m,n)内所有的水仙花数。

#include <stdio.h>

int narcissistic( int number );
void PrintN( int m, int n );

int main()
{
    int m, n;

    scanf("%d %d", &m, &n);
    if ( narcissistic(m) ) printf("%d is a narcissistic number\n", m);
    PrintN(m, n);
    if ( narcissistic(n) ) printf("%d is a narcissistic number\n", n);

    return 0;
}

int narcissistic( int number )
{
	int n=0;
	int ret=0;
	int sum=0;
	int x;
	int t=number;
	int reg=number;   // 保存原来的数 以备做检验 
	int result=1;
	while (t>0) 
	{
		t/=10;
		n++;
	}
	
	for (int i=0;i<n;i++)
	{
	   x=number%10;
	   number/=10;
	   result=1;   //每次做幂方乘法时需要置result = 1 
	   for(int j=0;j<n;j++)   // 用一个循环做幂乘法，为x的n次方。  无要求实际可用math.h中的pow函数 
	   {
	   	result=result*x;
	   }
	   sum+=result;
	}
	
	if (sum==reg)    
	ret=1;
	
	return ret;
} 

void PrintN( int m, int n )
{
	for (int i=m+1;i<n;i++)
	{
		if (narcissistic (i) == 1)
		printf("%d\n",i);
	}
}
