//���ݼ���e��x�η�չ����̩�չ�ʽ����֤���һ��ľ���ֵС��0.00001 

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
    while (fabs(an) >= 0.00001)    //ѭ������Ϊ���һ��ľ���ֵС��0.00001 
    {   
        sum += an;
        an = pow(x,i)/fact(i);
        i++;
    } 
    sum += an;    //���һ��anС��0.00001��Ҫ���� 
    printf("%.4f",sum);
    return 0;
}

double fact (int n)  //��׳˵ĺ��� 
{
    double ret = 1;
    for (int i=1;i<=n;i++)
    {
        ret *= i;
    }
    return ret;
}
