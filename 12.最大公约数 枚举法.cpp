//最大公约数计算  枚举法
#include <stdio.h>
int main()
{
	int a,b;
	int min;
	
	scanf("%d %d",&a,&b);
	
	if (a<b) 
	{
	min=a;
    }  
    else  
	{
 	min=b;
    }
	
	int ret=0;
	for (int i=1;i<=min;i++)
	{
		if (a%i==0)
		{
			if (b%i==0)
			{
				ret = i;
				//printf("i=%d,ret=%d\n",i,ret);
			}
		}
	}
	printf("%d和%d的最大公约数是%d\n",a,b,ret);
	
	return 0;
}
