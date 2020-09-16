//本题要求实现一个对数组进行循环右移的简单函数：一个数组a中存有n（>0）个整数，将每个整数循环向右移m（≥0）个位置
//其中a[]是用户传入的数组；n是数组的大小；m是右移的位数。函数ArrayShift须将循环右移后的数组仍然存在a[]中。

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
    int b[n];  //新建一个数组用于存储移位后的数组 
    for (int i=0;i<n;i++)
    {
        b[(i+m)%n]=a[i];   //用于循环移位 
    }
    for (int j=0;j<n;j++)
    {
        a[j]=b[j];     //遍历b赋值给a； 
    }
    return a;
}
