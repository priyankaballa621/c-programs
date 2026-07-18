#include<stdio.h>
int main()
{
	int  x,h,m,s;
	printf("Enter a number of seconds: ");
	scanf("%d",&x);
	h=x/3600;
	m=(x-(h*3600))/60;
	s=(x-(h*3600))-m*60;
	printf(" H:M:S-%d:%d:%d",h,m,s);
	return 0;
	
}
