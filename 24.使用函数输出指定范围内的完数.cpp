//本题要求实现一个计算整数因子和的简单函数，并利用其实现另一个函数，输出两正整数m和n（0<m≤n≤10000）之间的所有完数。
//所谓完数就是该数恰好等于除自身外的因子之和。例如：6=1+2+3，其中1、2、3为6的因子。
//其中函数factorsum须返回int number的因子和；函数PrintPN要逐行输出给定范围[m, n]内每个完数的因子累加形式的分解式，每个完数占一行
//格式为“完数 = 因子1 + 因子2 + ... + 因子k”，其中完数和因子均按递增顺序给出。
//如果给定区间内没有完数，则输出一行“No perfect number”。

#include <stdio.h>

int factorsum( int number );
void PrintPN( int m, int n );
	
int main()
{
    int i, m, n;

    scanf("%d %d", &m, &n);
    if ( factorsum(m) == m ) printf("%d is a perfect number\n", m);
    if ( factorsum(n) == n ) printf("%d is a perfect number\n", n);
    PrintPN(m, n);

    return 0;
}


int factorsum( int number )
{        			
	int sum=1;                                  
	for(int i=2;i<=(number/2);i++)
	{   
		if(number%i==0){
			sum=sum+i;		 // 这个式子在 循环number/2条件下 可以保证不重复相加； 
		}                     //在有#include<math.h>时 循环到sqrt(number)时  使用sum=sum+i+（number/i）;也可保证不循环相加	
	} 
	return sum;
}
void PrintPN (int m,int n)

{
   	int sum=1;
	int cnt=0;  //记录完数的数量 cnt==0;输出 No perfect number 
	if(m==1) {
	printf("1 = 1\n");//1一定是完数
	m=m+1;
	cnt++;//  这里需要++； 
	}

	for(int x=m;x<=n;x++){ 
		
		if(factorsum(x)==x){
			printf("%d = 1",x);
			for(int i=2;i<=(x/2);i++){  //按序输出因子 只需遍历到一半 因为最小因子除了1 就是2了 
				if(x%i==0){
					printf(" + %d",i);  	//这里遍历 到x/2 为了按序输出 
				}                             //一开始感觉需要数组存储出现的因子 排序后输出； 
			}								// 但是数组是后面的内容； 所以 不想用 						
			printf("\n");                  // 分析后发现 只要按序输出到x/2就能包含所有因子 并且是升序的 
			cnt++;
		} 

	}	
	
	if(cnt==0){
		printf("No perfect number");
	}	
		

}


