#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b;
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	printf("Bitwise operations:\n");
	printf("bitwise AND (&)\n%d=%d\n",a&b);
	printf("bitwise OR (|)n%d|%d=%d\n",a||b);
	printf("bitwise XOR (^)\n%d & %d=%d\n",a^b);
	printf("left shift (<<)\n%d=%d\n",a<<1);
	printf("Right shift (>>)\n%d>>%d=%d\n",a>>1);
	return 0;
	
}


