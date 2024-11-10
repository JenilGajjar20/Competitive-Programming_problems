#include <iostream>
using namespace std;

int maxProfit(int price[], int start, int end)
{

    if (end <= start)
    {
        return 0;
    }
    int profit = 0;
    int i, j;
    for (i = start; i < end; i++)
    {
        for (j = i + 1; j <= end; j++)
        {
            if (price[j] > price[i])
            {
                int current_profit = price[j] - price[i] + maxProfit(price, start, i - 1) + maxProfit(price, j + 1, end);

                profit = max(profit, current_profit);
            }
        }
    }
    return profit;
}

int main()
{
    int price[] = {110, 130, 220, 500, 140, 35, 65};
    int size = sizeof(price) / sizeof(price[0]);
    cout << "Profit: " << maxProfit(price, 0, size - 1);
    return 0;
}