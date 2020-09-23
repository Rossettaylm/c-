//求幂级数e的x次方展开成泰勒公式，保证最后一项的绝对值小于0.00001 

#include <stdio.h>
#include <math.h>
double fact (int n);
int main()
{
    double x;
    scanf("%lf",&x);
    double an=1;
    int i=1;
    double sum = 0.0;
    while (fabs(an) >= 0.00001)    //循环条件为最后一项的绝对值小于0.00001 
    {   
        sum += an;
        an = pow(x,i)/fact(i);
        i++;
    } 
    sum += an;    //最后一项an小于0.00001的要加上 
    printf("%.4f",sum);
    return 0;
}

double fact (int n)  //求阶乘的函数 
{
    double ret = 1;
    for (int i=1;i<=n;i++)
    {
        ret *= i;
    }
    return ret;
}
