#include<stdio.h>
#include<conio.h>
int main(void)
{
	int i,j,n;
	printf("Enter No. of lines :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		printf(" ");
		
		 for(j=1;j<=i;j++)
		 
		printf("* ");
		printf("\n");
	}
	return 0;
}
