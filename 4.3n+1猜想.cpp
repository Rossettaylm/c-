#include <stdio.h>
int main()
{
	int n=0,count=0;
	//printf("please input n (0~1000):");
	scanf("%d",&n);
	while (n!=1)
	{
		if (n%2==1)
		{
		 n=(n*3+1)/2;
		 count++;
	    } else if (n%2==0)
	    {
		n=n/2;
		count++;
	    }
    }
	
	printf("%d",count);
	return 0;
}
