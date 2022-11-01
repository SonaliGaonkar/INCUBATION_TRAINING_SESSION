// Accept cost price(CP) and Selling price(SP) of an item.
// Calculate the ammount of PROFIT/LOSS made by the seller and print the profit and loss.

#include <iostream>

int CP, SP, profit, loss;
double getData()
{
    std::cout << "Enter cost price of an item : ";
    std::cin >> CP;
    std::cout << "Enter selling price of an item : ";
    std::cin >> SP;
}
double profitCalculate()
{
    profit = SP - CP;
    return profit;
}
double lossCalculate()
{
    loss = CP - SP;
    return loss;
}

int main()
{
    getData();
    if (SP > CP)
    {
        std::cout << "Profit is :" << profitCalculate();
    }
    else if (SP < CP)
    {
        std::cout << "Loss is :" << lossCalculate();
    }
    else
    {
        std::cout << "No profit No loss";
    }
    return 0;
}