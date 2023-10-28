#include <iostream>
#include <vector>
bool testnumber(std::vector<int> arr, int size_arr, int comp);

int main()
{
    int x,p;
    // input numbers
    std::cout << "How many number do you want to input: ";
    std::cin >> x;
    std::vector<int> numbers;
    for(int i = 0; i < x; i++)
    {
        std::cout << "Enter Number " << i + 1 << ": ";
        std::cin >> p;
        numbers.push_back(p);
    }
    int k;
    std::cout << "Enter the sum you want to find the componnts of: ";
    std::cin >> k;

    if(testnumber(numbers, x, k))
    {
        std::cout << "possible";
    }
    else
    {
        std::cout << "not possible";
    }


}

bool testnumber(std::vector<int> arr, int size_arr, int comp)
{
    for(int i = 0; i < size_arr; i++)
    {
        for(int j = i; j < size_arr; j++)
        {
            if(arr[i] + arr[j] == comp)
            {
                return true;
            }
        }
    }
    return false;
}
