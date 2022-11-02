#include<stdio.h>
int main(void)
{
	int a, b, c, sum;
	
	printf("Enter the angles of triangle : ");
	scanf("%d %d %d", &a, &b, &c);
	
	sum = a+b+c;
	
	if(sum==180)
	{
		printf("It is valid triangle.\n");
	}
	else
	{
		printf("It is invalid triangle.\n");
	}
	
	return 0;
}
