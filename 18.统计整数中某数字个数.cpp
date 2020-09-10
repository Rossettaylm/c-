#include <stdio.h>

int CountDigit( int number, int digit );

int main()
{
    int number, digit;

    scanf("%d %d", &number, &digit);
    printf("Number of digit %d in %d: %d\n", digit, number, CountDigit(number, digit));

    return 0;
}

int CountDigit( int number, int digit )
{
    int count=0;
    int x;
        int sign=-1;
    if (number<0)
    {
    	number=sign*number;
    }  //考虑到number为负数的情况 ， 变为正数 
    while (number>9) 
    {
        x=number%10;
        number/=10;
        if(x==digit)
        { 
            count++;
        }    
    }
    
	if(number==digit){
		count=count+1;
	}	  //number 和 digit 都是0的情况 
    
    return count;
}
