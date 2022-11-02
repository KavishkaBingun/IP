
#include <stdio.h>

#define SIZE 4 // begin the main functiom

int main (void)

{

    FILE*cfptr;

    char ItemID[4];

    char Name[10];

    int i, Quantity;

    double Price;

    cfptr = fopen ("purchase.txt", "w");

    if(cfptr == NULL){

        printf("File could not be found\n");

        return -1;

    }

    for(i = 0; i < SIZE; ++i){

        printf("\nEnter Item ID : ");

        scanf("%s", &ItemID);

        printf("Enter Name : ");

        scanf("%s", &Name);

        printf("Enter Quantity : ");

        scanf("%d", &Quantity);

        printf("Enter Unit Price : ");

        scanf("%lf", &Price);

        fprintf(cfptr, "%5s\t%6s\t\t%2d\t\t%.2f\n", ItemID, Name, Quantity, Price);

    }

    fclose(cfptr);

    return 0;

} // end of the main function


#include <stdio.h>

#define SIZE 4 // begin the main functiom

int main (void)

{

    FILE*cfptr;

    char ItemID[4];

    char Name[10];

    int i, Quantity;

    double Price, Amount = 0, Total = 0;

    cfptr = fopen("purchase.txt", "r");

    if(cfptr == NULL){

        printf("File could not be found\n");

        return -1;

    }

    printf("\tItem   Quantity(Kg)   Unit Price      Price(Rs.)\n\n");

    for(i = 0; i < SIZE; ++i){

        fscanf(cfptr, "%s %s %d %lf\n", &ItemID, &Name, &Quantity, &Price);

        Amount = Quantity*Price;

        Total += Amount;

        printf("\t%s\t%5d\t\t%.2f\t\t%.2f\n", Name, Quantity, Price, Amount);

    }

    printf("\n\tTotal \t\t\t\t\t%.2f\n", Total);

    fclose(cfptr);

    return 0;

} // end of the main function


