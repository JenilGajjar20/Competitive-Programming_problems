#include <iostream>
#include <vector>

void goldbach_conj(int number);
void get_goldbach_prime_numbers(int number);
std::vector<int> get_prime_numbers(int input_number);
bool isPrime(int n);

int main()
{
    // test cases
    goldbach_conj(16);
    goldbach_conj(346);
    goldbach_conj(55);
    return 0;
}

// function gets prime number distribution of even numbers greater than 2. otherwise an empty array will be returned
void goldbach_conj(int number)
{
    if (number%2 == 0 && number > 2)
    {
        get_goldbach_prime_numbers(number);
    }
    else
    {
        std::cout <<"Not a even number that is greater than 2!\n";
    }
}

// function returns the the sum of two prime numbers of the input number. the function will return the two prime number possible with the biggest difference
void get_goldbach_prime_numbers(int Inp_number)
{
    // get all the prime numbers up to input number
    std::vector<int> prime_numbers = get_prime_numbers(Inp_number);
    // find sum of prime number that equals input number and calculate differende of these nunmbers. If difference greater than previous difference -> store new target number
    int diff = 0;
    int numb1 = 0, numb2 = 0;
    for(int i = 0; i < prime_numbers.size(); i++)
    {
        for(int j = i; j < prime_numbers.size(); j++)
        {
            if((prime_numbers[i] + prime_numbers[j] == Inp_number) && (std::abs(prime_numbers[i] - prime_numbers[j]) > diff))
            {
                numb1 = prime_numbers[i];
                numb2 = prime_numbers[j];
            }
        }
    }
    // return array with prime numbers with max difference
    std::cout << "Goldbach numbers: " << numb1 << " and " << numb2 << "\n";

}

//function returns a vector of all prime numbers between 0 and input_number
std::vector<int> get_prime_numbers(int input_number)
{
    std::vector<int> prime_numbers;
    for(int i = 1; i < input_number; i++)
    {
        if(isPrime(i))
        {
            prime_numbers.push_back(i);
        }
    }
    return prime_numbers;
}

bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;
 
    // Check from 2 to n-1
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return false;
 
    return true;
}