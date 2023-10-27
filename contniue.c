//wap to print any series and in that ask the user to skip any 2 numbers using continue statment.....
#include<stdio.h>
int main()
{
	int i,j,x,y;
	printf("Enter the number1 to skip: ");
	scanf("%d",&x);
	printf("Enter the number2 to skip: ");
	scanf("%d",&y);
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=10;j++)
		{
			if (j==x)
			{
				continue;
			}
			else if (j==y)
			{
				continue;
			}
		printf("%d\n",j);
		}
	}
}
