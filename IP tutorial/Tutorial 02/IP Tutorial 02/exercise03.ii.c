//Using scanf statement in C programe
#include<stdio.h>
int main(void)
{
	int mark1=0, mark2=0, total=0;
	printf("Enter Mark 1=");
	scanf("%d",&mark1);
	
	printf("Enter Mark 2=");
	scanf("%d",&mark2);
	
	total=mark1+mark2;//Sum of two marks
	printf("Total=%d",total);//Display sum
	
	return 0;
}//end of the main function
