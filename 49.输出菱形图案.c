#include <stdio.h>
int main()
{
    int i=0;
    int j=0;
    int n;
    scanf("%d",&n);
    int row=n/2+1; //nÎªÆæÊý 
    for (int k=1;k<=row;k++) 
    {
    for (i=row-k-1;i>=0;i--)
    {
        printf("  ");
    }
    for (j=1;j<=2*k-1;j+=1)
    {
        printf("* ");
    }
    printf("\n");
    }
    for (int k=row+1;k<=n;k++)
    {
    	for (i=1;i<=k-row;i++)
    	{
    		printf("  ");
		}
		for (j=1;j<=n-2*(k-row);j++)
		{
			printf("* ");
		}
		printf("\n");
	}
    return 0;
}
