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
    }  //���ǵ�numberΪ��������� �� ��Ϊ���� 
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
	}	  //number �� digit ����0����� 
    
    return count;
}
