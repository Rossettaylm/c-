//��ѯˮ���۸�
//��������ˮ�����ֱ���ƻ����apple�����棨pear�������ӣ�orange�������ѣ�grape�������۷ֱ��ӦΪ3.00Ԫ/���2.50Ԫ/���4.10Ԫ/���10.20Ԫ/���
//�û�����������1~4��ѯ��Ӧˮ���ĵ��ۡ���������ѯ��������5��ʱ������Ӧ�Զ��˳���ѯ������5�ζ��û�����0���˳�������������ţ���ʾ�۸�Ϊ0 

#include <stdio.h>
int main()
{
    printf("[1] apple\n[2] pear\n[3] orange\n[4] grape\n[0] exit\n"); //����˵� 
    double price[]={3.00,2.50,4.10,10.20};  //����price�����ż۸񣬵���ʱ��Ҫi-1 
    int i;
    int count=0; 
    scanf("%d",&i);
    count++;
    while (count<6)       //����ѯ�������Զ��˳� 
    {
        if (i==0)
        {
            break;        //����0ֱ�ӽ���ѭ�� 
        } else if (i<0 && i>4)
        {
            printf("price = 0.0\n");
            continue;     //�����ⲻ��0~4�ڵ�ֵ�������˴�ѭ�� 
        }
        printf("price = %.2f\n",price[i-1]);  
        scanf("%d",&i);
        count++;  
    }  
    
    return 0;
}
