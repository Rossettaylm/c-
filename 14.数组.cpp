//输入一组数，求其平均值
#include <stdio.h>
int main() 
{
	int x;
	int num[20];
	double aver;
	int sum=0;
	int count=0;
	scanf("%d",&x); 
	while (x!=-1)
	{
		
		num[count]=x;
		sum+=num[count];
		count++;
		scanf("%d",&x);   

	}   
	
	aver=1.0*sum/count;
	printf("%.2lf\n",aver);
	
	
	
	return 0;
}
