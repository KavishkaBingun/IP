//This programe display the number formatting
#include<stdio.h>
int main(void)
{
	printf(" %.2f\n",123.4567);//Dislay the value with 2 digits precision
	
	printf(" %.3f\n",3.14159);//Dislay the value with 3 digit precision
	
	printf("%15.1f\n",333.546372);//Dislay the value in field width
	printf("%15.2f\n",333.546372);
	printf("%15.3f\n",333.546372);
	printf("%15.4f\n",333.546372);
	printf("%15.5f\n",333.546372);
	
	return 0;
}//end of the main function
