//����Ҫ���д���򣬼������в��ֺ� 1 - 1/4 + 1/7 - 1/10 + ... ֱ�����һ��ľ���ֵ�����ڸ�������eps��

#include <stdio.h>
int main()
{
    double eps;
    scanf("%lf",&eps);
    double sum = 0;
    double sign = 1.0;
    int i = 1;
    while (1.0/(3*i-2)>eps)
    {
        sum += sign*1/(3*i-2);
        sign = -sign;
        i++;
    }
    sum += sign*1/(3*i-2);
    printf("sum = %f\n",sum);
    
    
    return 0;
}
