#include <stdio.h>
int main()
{
	int n=0;
	printf("please input 1~4:");
	scanf("%d",&n);
	switch (n){
		case 1:
			printf("那是真的牛逼");break;
		case 2:
			printf("I love you 3000!");break;
		case 3:
			printf("78+22=%d",78+22);break;
		case 4:
			printf("薛世鹏带傻逼");break;
		default:
			break;
		
	}
	  return 0;
}
