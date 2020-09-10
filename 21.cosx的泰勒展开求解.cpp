//本题要求实现一个函数，用泰勒公式求cos(x)的近似值，精确到最后一项的绝对值小于e：


#include <stdio.h>
#include <math.h>

double funcos( double e, double x );

int main()
{    
    double e, x;

    scanf("%lf %lf", &e, &x);
    printf("cos(%.2f) = %.6f\n", x, funcos(e, x));

    return 0;
}


double funcos (double e, double x )
{

    double mi=1,jiec=1,xn=1,sum=1;
	int i,sign;
 
	sign=-1; 
 
	for(i=2;xn>e;i+=2){
		mi = mi*x*x;  //每项分子都乘x的平方 
		jiec = jiec*i*(i-1);  //分母乘以i+1，i+2 
		sum = sum + sign*mi/jiec;  
		xn=mi/jiec;  
		sign=-sign;
	}
 
	return sum;

}

