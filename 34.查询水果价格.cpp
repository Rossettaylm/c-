//查询水果价格
//给定四种水果，分别是苹果（apple）、梨（pear）、桔子（orange）、葡萄（grape），单价分别对应为3.00元/公斤、2.50元/公斤、4.10元/公斤、10.20元/公斤。
//用户可以输入编号1~4查询对应水果的单价。当连续查询次数超过5次时，程序应自动退出查询；不到5次而用户输入0即退出；输入其他编号，显示价格为0 

#include <stdio.h>
int main()
{
    printf("[1] apple\n[2] pear\n[3] orange\n[4] grape\n[0] exit\n"); //输出菜单 
    double price[]={3.00,2.50,4.10,10.20};  //给定price数组存放价格，调用时需要i-1 
    int i;
    int count=0; 
    scanf("%d",&i);
    count++;
    while (count<6)       //当查询第六次自动退出 
    {
        if (i==0)
        {
            break;        //输入0直接结束循环 
        } else if (i<0 && i>4)
        {
            printf("price = 0.0\n");
            continue;     //输任意不在0~4内的值，跳过此次循环 
        }
        printf("price = %.2f\n",price[i-1]);  
        scanf("%d",&i);
        count++;  
    }  
    
    return 0;
}
