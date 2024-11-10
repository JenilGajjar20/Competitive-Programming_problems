#include <iostream>
#include <vector>

std::vector<int> multiplier(std::vector<int> input);

int main()
{
    std::vector<int> test = {1, 2, 3, 4, 5};
    std::vector<int> output_test = multiplier(test);
    for(int i = 0; i < output_test.size(); i++)
    {
        std::cout << output_test[i]<<"\n";
    }
    
    return 0;
}

std::vector<int> multiplier(std::vector<int> input)
{
    int n = input.size();
    std::vector<int> output;

    
    for(int i = 0; i < n; i++)
    {
        int result = 1;
        for(int p = 0; p < n; p++)
        {
            if(i == p)
            {
                continue;
            }
            result *= input[p];
        }
        output.push_back(result);
    }    
    return output;
}
