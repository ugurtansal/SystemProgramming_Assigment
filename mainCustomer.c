#include <stdio.h>
#include <stdlib.h>
#include "customer.h"
int main()
{
    int selection, amount, foodId;
    char tableId[250];
    do{
        printf("Display food menu (1)\n");
        printf("Place a new order(2)\n");
        printf("Show order list of table (3)\n");
        printf("Update amount (4)\n");
        printf("Pay the bill (5)\n");
        printf("Cancel order (6)\n");
        printf("Exit (7)\n");
        printf("Enter your selection : ");
        scanf("%d",&selection);
        switch(selection){
        
        }
    }while(selection !=7);
    return 0;
}
