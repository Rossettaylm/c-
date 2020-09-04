//本题要求实现一个计算m~n（m<n）之间所有整数的和的简单函数。
#include <stdio.h>
int main()
{
    int m=0;
    int n=0;
    int sum=0;
    scanf ("%d %d",&m,&n);
    int i,j; 
    for (i=m,j=n;i<=j;i++)
    {
        sum+=i;
    }
    printf("sum = %d",sum);
    return 0;
}
