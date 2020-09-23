#include <stdio.h>
int main()
{
    double distance;
    int min;
    double cos_d;
    scanf("%lf %d",&distance,&min);
    double sum=0.0;
    int cos_t=min/5*2;
    if (distance<=3)
    {
        cos_d = 10.0;
        sum = cos_d+cos_t;
    }   else if (distance>3 && distance<=10)
    {
        cos_d = 10+2*(distance-3);
        sum = cos_d+cos_t;
    }   else if (distance>10)
    {
        cos_d = 10+2*7+(distance-10)*3;
        sum = cos_d+cos_t;
    }   
    
    printf("%.0f\n",sum);
    
}
