//����Ҫ��ʵ��һ���ж������ļ򵥺������Լ����øú���������������������͵ĺ�����
//��������ֻ�ܱ�1��������������������ע�⣺1����������2��������

//���к���prime���û��������pΪ����ʱ����1�����򷵻�0������PrimeSum��������[m, n]�����������ĺ͡���Ŀ��֤�û�����Ĳ���m��n�� 


#include <stdio.h>
#include <math.h>

int prime( int p );
int PrimeSum( int m, int n );

int main()
{
    int m, n, p;

    scanf("%d %d", &m, &n);
    printf("Sum of ( ");
    for( p=m; p<=n; p++ ) {
        if( prime(p) != 0 )
            printf("%d ", p);
    }
    printf(") = %d\n", PrimeSum(m, n));

    return 0;
}

int prime( int p )
{
    int i;
	int isPrime=1;
    if (p<2)
        isPrime=0;  //����m�Ǹ�������� 
    else 
    {
	for (i=2;i<p;i++)
	{
		if (p%i==0)
		{
			isPrime=0;
			break;
		} 
	}
    }
	 return isPrime;
}


int PrimeSum( int m, int n )
{
    int i;
    int sum=0;
    for (i=m;i<=n;i++)
    {
        if(prime (i)==1)
            sum+=i;
    }
    return sum;
}
