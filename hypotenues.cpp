#include<stdio.h>
#include<math.h>
int main()
{
	float X,Y,hypotenues;
	printf("Enter the first side (x):");
	scanf("%f",&X);
	printf("enter the second side (y):");
	scanf("%f",&Y);
     hypotenues=sqrt(X*X+Y*Y);
	printf("the hypotenues is:%.2f\n",hypotenues);
	return 0;
	
}
