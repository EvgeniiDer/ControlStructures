#include<iostream>

long *Power(const int &p, const int &n);

//leaks -atExit -- ./temp проверка на утечку памяти
int main()
{
    std::cout << "Enter the number and the power to which you want to raise the number: " << std::endl;
    int number, power;
    std::cin >> number >> power;
    long * result = Power(power, number);
    std::cout << "Number: " << number << " to the " << power << " power is: " << *result << std::endl;
    if(result)
    {
        delete result;
        result = nullptr;
    }
    
    return 0;

}
long *Power(const int & p, const int &n)
{
    long *result = new long(1);
    for(long i = 0; i < p; i++)
        *result *= n;
    return result;
}