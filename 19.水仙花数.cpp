//ϰ��5-6 ʹ�ú������ˮ�ɻ��� (20��)
//ˮ�ɻ�����ָһ��Nλ��������N��3��������ÿ��λ�ϵ����ֵ�N����֮�͵������������磺153=1
// ����Ҫ���д����������һ���жϸ��������Ƿ�ˮ�ɻ�������һ������С�����˳���ӡ����������(m,n)�����е�ˮ�ɻ�����

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
	int reg=number;   // ����ԭ������ �Ա������� 
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
	   result=1;   //ÿ�����ݷ��˷�ʱ��Ҫ��result = 1 
	   for(int j=0;j<n;j++)   // ��һ��ѭ�����ݳ˷���Ϊx��n�η���  ��Ҫ��ʵ�ʿ���math.h�е�pow���� 
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
