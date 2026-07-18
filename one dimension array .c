//one dimensional array 
#include<stdio.h>
int main()
{
	int i,sum=0,n;
	printf("Enter no of  elements:");
	scanf("%d",&n);
	int marks[n];
	printf("enter array elaments");
	for(i=0;i<n;i++)
	{
		scanf("%d",&marks[i]);
		sum=sum+marks[i];
	}
	printf("%d\n",sum);
	return 0;
}
