//����Ҫ��ʵ��һ�����������ѭ�����Ƶļ򵥺�����һ������a�д���n��>0������������ÿ������ѭ��������m����0����λ��
//����a[]���û���������飻n������Ĵ�С��m�����Ƶ�λ��������ArrayShift�뽫ѭ�����ƺ��������Ȼ����a[]�С�

#include <stdio.h>
#define MAXN 10

int ArrayShift( int a[], int n, int m );

int main()
{
    int a[MAXN], n, m;
    int i;

    scanf("%d %d", &n, &m);
    for ( i = 0; i < n; i++ ) scanf("%d", &a[i]);

    ArrayShift(a, n, m);

    for ( i = 0; i < n; i++ ) {
        if (i != 0) printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");

    return 0;
}

int ArrayShift( int a[], int n, int m )
{
    int b[n];  //�½�һ���������ڴ洢��λ������� 
    for (int i=0;i<n;i++)
    {
        b[(i+m)%n]=a[i];   //����ѭ����λ 
    }
    for (int j=0;j<n;j++)
    {
        a[j]=b[j];     //����b��ֵ��a�� 
    }
    return a;
}
