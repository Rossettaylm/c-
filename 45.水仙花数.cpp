#include <stdio.h>
#include <math.h>
int narcissistic( int number );
void PrintN( int m, int n );
int main()
{
    int N;
    scanf("%d",&N);
    PrintN(pow(10,N-1),pow(10,N));
    
    
    return 0;
}

int narcissistic( int number )
{
	int n=0;
	int ret=0;
	int sum=0;
	int x;
	int t=number;
	int reg=number;
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
	   result=1;
	   for(int j=0;j<n;j++)
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
	for (int i=m;i<n;i++)
	{
		if (narcissistic (i))
		printf("%d\n",i);
	}
}
