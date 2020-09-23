#include <stdio.h>
double fact (int n);

int main()
{
	int n;
	double sum=0;
	scanf("%d",&n); 
	for (int i=0;i<=n;i++)
	{
		sum += 1/fact(i);
	}
	printf("%.8f\n",sum);
	
	
	return 0;
}

double fact (int n)
{
	double ret = 1.0;
	for (int i=1;i<=n;i++)
	{
		ret *= i;
	}
	
	return ret;
}
