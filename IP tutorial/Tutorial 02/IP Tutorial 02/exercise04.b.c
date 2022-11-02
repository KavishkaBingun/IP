#include <stdio.h>
struct item
{
    int itemNo;
    double price;
    int quantity;
};
int main()
{ 
    struct item Item1; /* Declare Item1 of type item */
    struct item Item2; /* Declare Item2 of type item */
//using struct 1
    printf("Enter item No:");
    scanf("%d", &(Item1.itemNo));
    printf("Enter the price:");
    scanf("%lf", &(Item1.price));
    printf("Enter the quantity:");
    scanf("%d", &(Item1.quantity));
//using struct 2
    printf("Enter item No:");
    scanf("%d", &(Item2.itemNo));
    printf("Enter the price:");
    scanf("%lf", &(Item2.price));
    printf("Enter the quantity:");
    scanf("%d", &(Item2.quantity));
//printing the table
    printf(" ItemNo\t\tPrice\t\tQuantity\n");
    printf("%d\t\t%.2lf\t\t%d\n", Item1.itemNo, Item1.price, Item1.quantity);
    printf("%d\t\t%.2lf\t\t%d", Item2.itemNo, Item2.price, Item2.quantity);
    return 0;
}
