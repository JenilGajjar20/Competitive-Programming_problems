#include <iostream>

int triangular_number_sequence(int number);

int main()
{
    std::cout << triangular_number_sequence(1) << "\n";
    std::cout << triangular_number_sequence(6) << "\n";
    std::cout << triangular_number_sequence(215) << "\n";
    return 0;
}

int triangular_number_sequence(int number)
{
    int ergebnis = 0;
    for (int i=1; i <= number; i++)
    {
        ergebnis +=i;
    }
    return ergebnis;
}