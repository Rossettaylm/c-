//����Ҫ��ʵ��һ�������������Ӻ͵ļ򵥺�������������ʵ����һ�������������������m��n��0<m��n��10000��֮�������������
//��ν�������Ǹ���ǡ�õ��ڳ������������֮�͡����磺6=1+2+3������1��2��3Ϊ6�����ӡ�
//���к���factorsum�뷵��int number�����Ӻͣ�����PrintPNҪ�������������Χ[m, n]��ÿ�������������ۼ���ʽ�ķֽ�ʽ��ÿ������ռһ��
//��ʽΪ������ = ����1 + ����2 + ... + ����k�����������������Ӿ�������˳�������
//�������������û�������������һ�С�No perfect number����

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
			sum=sum+i;		 // ���ʽ���� ѭ��number/2������ ���Ա�֤���ظ���ӣ� 
		}                     //����#include<math.h>ʱ ѭ����sqrt(number)ʱ  ʹ��sum=sum+i+��number/i��;Ҳ�ɱ�֤��ѭ�����	
	} 
	return sum;
}
void PrintPN (int m,int n)

{
   	int sum=1;
	int cnt=0;  //��¼���������� cnt==0;��� No perfect number 
	if(m==1) {
	printf("1 = 1\n");//1һ��������
	m=m+1;
	cnt++;//  ������Ҫ++�� 
	}

	for(int x=m;x<=n;x++){ 
		
		if(factorsum(x)==x){
			printf("%d = 1",x);
			for(int i=2;i<=(x/2);i++){  //����������� ֻ�������һ�� ��Ϊ��С���ӳ���1 ����2�� 
				if(x%i==0){
					printf(" + %d",i);  	//������� ��x/2 Ϊ�˰������ 
				}                             //һ��ʼ�о���Ҫ����洢���ֵ����� ���������� 
			}								// ���������Ǻ�������ݣ� ���� ������ 						
			printf("\n");                  // �������� ֻҪ���������x/2���ܰ����������� ����������� 
			cnt++;
		} 

	}	
	
	if(cnt==0){
		printf("No perfect number");
	}	
		

}


