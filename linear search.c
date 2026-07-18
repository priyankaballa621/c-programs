#include<stdio.h>
int main()
{
	int i,key=80,found=0;
	int a[6]={10,20,50,60,70,80};
	for(i=0;i<6;i++)
	{
		if(key==a[i])
		{
			found=1;
			printf("\n key was found");
			break;
		}
	}
	if(found==0)
	{
		printf("key was not found");
	}
	return 0;
}
