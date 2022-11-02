//input one five digit number and print the digits seperated from one another
#include<stdio.h>
int main(void)
{
	int number, digit1, digit2, digit3, digit4, digit5;
	printf(" Enter your five digits nuber	: ");
	scanf("%d", & number);
	printf("\n");
    digit1 = number / 10000;
	digit2 = number / 1000 % 10; 
	digit3 = number / 100 % 10;
	digit4 = number / 10 % 10;
	digit5 = number % 10;
	printf(" %d\t%d\t%d\t%d\t%d\n", digit1 , digit2 , digit3 , digit4 , digit5);
	
	return 0;
}//end of main function

