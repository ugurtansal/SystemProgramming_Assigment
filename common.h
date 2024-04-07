#ifndef COMMON_H_INCLUDED
#define COMMON_H_INCLUDED
#include <stdbool.h>

typedef struct food
{
    int foodID;
    char foodName[50];
    float foodPrice;
}food;

typedef struct takenOrders
{
    food f;
    int quantity;
    char tableID[250];
    bool isConfirmed;
    bool isActive;
}takenOrders;

void displayFoodMenu();
void showOrderListTable();
bool isExistTable(char tableID[]);
bool isExistFood(int foodId);

#endif // COMMON_H_INCLUDED
