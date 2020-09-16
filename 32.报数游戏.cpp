#include <stdio.h>
#define MAXN 20

void CountOff( int n, int m, int out[] );

int main()
{
    int out[MAXN], n, m;
    int i;

    scanf("%d %d", &n, &m);
    CountOff( n, m, out );   
    for ( i = 0; i < n; i++ )
        printf("%d ", out[i]);
    printf("\n");

    return 0;
}

void CountOff( int n, int m, int out[] )
{
    int sequence=1;
    int count=0;
    for (int i=0;i<n;i++)
    {
        out[i]=0;
    }
    for (int i=0;sequence<=n;i++)
	{
		i=i%n;
		count++;
		if (out[i]!=0)
		{
			count--; 
			continue;
		}
		else if (count%m==0 && out[i]==0)
		{
		out[i]=sequence;
		sequence++;
		} 
	} 
   
}
