#include<stdio.h>
int main(void)
{
	int no_of_people, package_type;
	float t;
	
	printf("Enter package type : ");
	scanf("%d",&package_type);
	
	printf("Enter no_of_people : ");
	scanf("%d",&no_of_people);

	switch(package_type)
	{
		case 1 :t=2000*no_of_people;
		        printf("Total=%.1f",t);
		        break;
		case 2 :t=5000*no_of_people;
		        printf("Total=%.1f",t);     
		        break;
		case 3 :t=5000*no_of_people;
		        printf("Total=%.1f",t); 
		        break;
		default :printf("Invalid package type");	                
    }
	return 0;
}
