//����������������9��������a��n��Ҫ���д������a+aa+aaa+........+aa..a��n��a��֮�͡�
//���к���fn�뷵�ص���n��a��ɵ����֣�SumA����Ҫ��ĺ͡�
#include <stdio.h>

int fn( int a, int n );
int SumA( int a, int n );
	
int main()
{
    int a, n;

    scanf("%d %d", &a, &n);
    printf("fn(%d, %d) = %d\n", a, n, fn(a,n));		
    printf("s = %d\n", SumA(a,n));	
	
    return 0;
}

int fn (int a ,int n)
{
	int ret = 0;
	for (int i=0;i<n;i++)
	{
		ret=ret*10+a; 
	}	
	
	return ret;
}

int SumA (int a,int n)
{
	int i;
	int sum=0;
	for(i=1;i<=n;i++)
	{
		sum += fn (a,i);
	}
	return sum;
}
