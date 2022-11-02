//Using scanf statement in C program
#include<stdio.h>
int main(void)
{
	int mark1=0, mark2=0;
	
	printf("Enter Mark 1= \n");
	scanf("%d",&mark1);
	
	printf("Enter Mark 2= \n");
	scanf("%d",&mark2);
	
	float total=mark1+mark2;
	printf("Total=%.2f\n",total);
	scanf("%.2f",&total);
    
	float average=total/2;
	
	return 0;
}//end of main function
