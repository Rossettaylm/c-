//��f��n��=1/n ��ǰn���
#include <stdio.h>
int main()
{
	int n;
	double sum=0.0;
	int sign=1;
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		sum+=1.0/i; //��֤1/nΪ������
		 //sum+=sign*1.0/n;
        //sign=-sign;      ��������� 
	}
	 printf("f(%d)=%f\n",n,sum);
	
	return 0;
} 
