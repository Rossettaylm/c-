//使用函数输出指定范围内的Fibonacci数
//本题要求实现一个计算Fibonacci数的简单函数，并利用其实现另一个函数，输出两正整数m和n（0<m≤n≤10000）之间的所有Fibonacci数。
//所谓Fibonacci数列就是满足任一项数字是前两项的和（最开始两项均定义为1）的数列。

#include <stdio.h>

int fib( int n );
void PrintFN( int m, int n );
	
int main()
{
    int m, n, t;

    scanf("%d %d %d", &m, &n, &t);
    printf("fib(%d) = %d\n", t, fib(t));
    PrintFN(m, n);

    return 0;
}

int fib (int n)
{
	int ret=1;
	int t;
	int frt=1,sec=1;
	if (n>2)
	{
	for (int i=3;i<=n;i++)
	{
		t = sec;
		sec = frt + sec;
		frt = t;
		ret = sec;
		
	}
	}
	return ret;
}

void PrintFN(int m,int n)
{
	int i=1;
	int ans;
	int count=0;
	do
	{
		ans = fib (i);
		if (ans>=m && ans<=n)
	 	{
				printf("%d ",ans);
	 			count++;	
		}
		i++;
	} while (ans<=n && n!=m);
	if (count==0)
	{
		printf("No Fibonacci number\n");
		
	} else {
		printf("\b");
	}
}
	
	
//int fib(int n)
//{
//    int i, x1, x2, x;
//    x=0;
//    x1=1;
//    x2=1;
//    for (i=3; i<=n; i++)
//    {
//        x=x1+x2;
//        x1=x2;
//        x2=x;
//    }
//    if (n==1 || n==2)
//        x=1;
//    return x;
//}
// 
// 
//void PrintFN(int m, int n)
//{
//    int i, count, index, flag;
//    index=0;
//    flag=0;
//    i=1;
//    while (fib(i) < 10000)
//        i++;
//    count = i;
//    for (i = 1; i < count; i++)
//    {
//        if (fib(i) >= m && fib(i) <= n)
//        {
//            flag = 1;
//            index++;
//            if (index == 1)
//            {
//                printf("%d", fib(i));
//                continue;
//            }
//            printf(" %d", fib(i));
//        }
//    }
//    if (!flag)
//        printf("No Fibonacci number");
//    putchar('\n');
//}
//	   
