#include <stdio.h>
int prime (int x);
int main()
{
    int M,N;
    scanf("%d %d",&M,&N);
    int sum = 0;
    int count = 0;
    for (int i=M;i<=N;i++)
    {   
        if(prime(i)==1)
        {
            sum += i;
            count++;
        }
    }
    
    printf("%d %d",count,sum);
    
    return 0;
    
}

int prime (int x)
{	 	
      int isPrime=1; 
      if (x < 2)
      {
      	isPrime = 0;
      }
		for (int i=2;i<x;i++)
		{
			if (x%i==0)
			{
			 isPrime=0;
			 break;  
		    }
		}
		return isPrime;
}
