//����Ҫ��ʵ��һ��������ͳ�Ƹ����ַ�����Ӣ����ĸ���ո��س��������ַ��������ַ��ĸ��� 
//letter = Ӣ����ĸ����, blank = �ո��س�����, digit = �����ַ�����, other = �����ַ�����


#include <stdio.h>
#define MAXS 15

void StringCount( char s[] );

int main()
{
	readstrings();
    StringCount(s);

    return 0;
}

void StringCount( char s[] )
{
	int letter=0,blank=0,digit=0,other=0;
	int n=0;
    while (s[n]!='\0')
        n++;        //�����뼸���ַ�δ֪ʱ������ͳ������ĳ��� 
	
	for (int i=0;i<n;i++)
	{
		if (s[i]>=48&&s[i]<=57)
		digit ++;
		else if (s[i]>= 65 &&s[i]<= 90 || s[i]>=97&&s[i]<=122 )
		letter ++;
		else if (s[i]==13||s[i]==32)
		blank ++;
		else 
		other ++; 
		
		printf("letter = %d, blank = %d, digit = %d, other = %d",letter,blank,digit,other);
		
	}
	
} 
