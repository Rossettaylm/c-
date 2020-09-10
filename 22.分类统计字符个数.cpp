//本题要求实现一个函数，统计给定字符串中英文字母、空格或回车、数字字符和其他字符的个数 
//letter = 英文字母个数, blank = 空格或回车个数, digit = 数字字符个数, other = 其他字符个数


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
        n++;        //当输入几个字符未知时，用来统计数组的长度 
	
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
