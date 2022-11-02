//Enter the radius of a circle and disply diameter, circumference, area
#include<stdio.h>
int main(void)
{
	float radius, diameter, circumference, area;
	
	printf("\n Enter the radius of the circle:");//input radius
	scanf("%f",&radius);
	diameter=2*radius;
	printf("\n\n Diameter of the circle:%.1f",diameter);//print diameter
	circumference=2*(22.0/7)*radius;
	printf("\n\n Circumference of the circle:%.1f",circumference);//print circumference
	area=(22.0/7)*radius*radius;
	printf("\n\n Area of the circle:%.1f",area);//print area
	return 0;
	
}//end of the main function
