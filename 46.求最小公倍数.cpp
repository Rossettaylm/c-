#include <stdio.h>
int main()
{
	int x,y;
	scanf("%d %d",&x,&y);
	int i=1;
	int j=1;
	while (x*i!=y*j)
	{
	    if (x*i<y*j)
	    {
	        i++;
	    }   else if(x*i>y*j)
	    {
	        j++;
	    }
	}
	int result = x*i;
	printf("%d",result);

	return 0;
}
