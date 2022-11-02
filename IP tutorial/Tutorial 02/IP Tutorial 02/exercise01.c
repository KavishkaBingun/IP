//Using variables in printf statements
#include<stdio.h>
int main(void)
{
	int x=2, y=3; //values are assumed for the variables
	
	printf("*\n**\n****\n*****\n");
	printf("%d",x+x);
	printf("x=");
	printf("x=%d",x);
	printf("%d=%d,x+y,y+x");
	
	/*printf("%d",x+y);*/
	
	printf("\n");
	float z=45.567;
	printf("value is %.2f",z);
	
	return 0;
}//end of the main function
