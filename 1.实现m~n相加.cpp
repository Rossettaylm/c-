#include <stdio.h>
int main()
{
    int m=0,n=0;
    int sum=0;
    printf("������m~n��");
    scanf ("%d %d",&m,&n);
    int j=n-m+1;
    int i=0;
    for (i=0;i<j;i++)
    {
        sum+=m;
        m++;
    }
    printf("m~n֮��������֮��Ϊ��%d",sum);
    return 0;
}
