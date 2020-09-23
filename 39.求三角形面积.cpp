#include <stdio.h>
#include <math.h>
int main()
{
    double x1,y1,x2,y2,x3,y3;
    scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3);
    double dis_12,dis_13,dis_23;
    double L,A;
    dis_12=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    dis_13=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
    dis_23=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
    if (dis_12+dis_13>dis_23 && dis_12+dis_23>dis_13 && dis_13+dis_23>dis_12)  //任意两边之和大于第三边 
    {   
        L = dis_12 + dis_13 + dis_23;
        double p = (dis_12 + dis_13 + dis_23)/2;
        A = sqrt(p*(p-dis_12)*(p-dis_13)*(p-dis_23));  //已知三边求面积公式 
        printf("L = %.2f,A = %.2f\n",L,A);
    } else {
        printf("Impossible\n");
    }
}
