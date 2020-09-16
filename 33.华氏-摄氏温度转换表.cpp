//输入2个正整数lower和upper（lower≤upper≤100），请输出一张取值范围为[lower，upper]、且每次增加2华氏度的华氏-摄氏温度转换表。
//温度转换的计算公式：C=5×(F-32)/9，其中：C表示摄氏温度，F表示华氏温度

#include <stdio.h>

void trans(int low,int high);
int main()
{
	int lower,upper;
	scanf("%d %d",&lower,&upper);
	if (lower>upper)
	{
		printf("Invalid.\n");
	} else{
		trans (lower,upper);
	}

	return 0;

}

void trans(int low,int high)
{
	int f;
	double c;
	printf("fahr celsius\n");
	for (int i=low;i<=high;i+=2)
	{
		f=i;
		c=5.0*(f-32)/9;
		printf("%d%6.1f\n",f,c);
	}
} 
