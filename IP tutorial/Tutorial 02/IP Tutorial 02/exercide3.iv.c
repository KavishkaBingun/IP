//This programe display the average mark
#include<stdio.h>
int main(void)
{
	int mark1=0, mark2=0;
	float total=0, average=0;
	printf("Enter Mark 1= ");
	scanf("%d",&mark1);
	
	printf("Enter Mark 2= ");
	scanf("%d",&mark2);
	
	total=mark1+mark2;
	printf("Total=%.2f\n",total);

    
	average=total/2;
	printf("Average=%.2f\n",average);
	
	return 0;
}//end of main function
