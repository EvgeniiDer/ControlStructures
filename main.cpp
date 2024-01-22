#include<iostream>
#include<cmath>
//#define RAIS_TO_THE_POWER
//#define ASCII
//#define FIBONACCI_MAX_NUMBER
//#define FIBONACCI_MAX_ROW
//#define PRIME_NUMBERS_FIRST_VARIANT
//#define PRIME_NUMBERS_SECOND_VARIANT //Усложнил код)))
#define PRINT
int main()
{
    #if defined RAIS_TO_THE_POWER
    int number = 0;
    int power = 0;
    int result = 1;
    std::cout << "\n\t\t\t\t!!Enter number you would like to rais to the power!! \n";
    std::cin >> number;
    std::cout << "\t\t\t\t\t\t!!Enter number of power!!\n";
    std::cin >> power;
    for(int i = 0; i < power; i++)
    {
        result *= number;
    }
    std::cout << number << " to the power of " << power << " is " << result << std::endl;
    #endif
    #if defined ASCII
    std::cout << "ASKII Symbols" << std::endl;
    for(int i = 32; i < 127; i++)
    {
        std::cout << i << " : " << static_cast<char>(i) << std::endl;
    }
    #endif
    #if defined FIBONACCI_MAX_NUMBER
    std::cout << "Enter Max number" << std::endl;
    int max_number = 0;
    std::cin >> max_number;
    int fib = 1;
    int a = 0;
    if(max_number == 0)
    {
        std::cout << "Pleass enter number more than 1" << std::endl;
        return 0;
    }
    else if(max_number == 1)
    {
        std::cout << 0 << " " << 1 << " " << 1 << std::endl;
        return 0;
    }
    else{
        std::cout << "\n" << std::endl;
        std::cout << a << " " << fib << " ";
        for(int i = 2; ; i++ )
            {
                int temp = a + fib;
                a = fib;
                fib = temp;
                if(fib >= max_number)
                    break;
                std::cout << fib << " ";

            }
        std::cout << std::endl;
    }
    #endif
    #if defined FIBONACCI_MAX_ROW
    std::cout << "Enter the specified number of terms from the Fibonacci series\n";
    int number = 0;
    std::cin >> number;
    int fib = 1;
    int a = 0;
    std::cout << a << " " << fib << " ";
    for(int i = 2;i < number;i++)
    {
        int temp = a + fib;
        a = fib;
        fib = temp;
        std::cout << fib << " ";
    }
    #endif
    #if defined PRIME_NUMBERS_FIRST_VARIANT
    std::cout << "Enter nubmber of series of prime numbers\n";
    int number;
    std::cin >> number;
    int count = 0;
    for(int i = 2; i < number; i++)
    {
        count = 0;
        for(int j = 1; j <= i; j++)
        {
            if((i % j) == 0)
                {
                    count++;
                }
        }
        if(count == 2)
            std::cout << i << " ";

    }
    #endif  
    #if defined PRIME_NUMBERS_SECOND_VARIANT
    std::cout << "Enter nubmber of series of prime numbers\n";
    int number;
    std::cin >> number;
    if(number == 0 || number == 1)
    {
        std::cout << "No Prime numbers\n";
    }
    else if(number == 2)
    {
        std::cout << 2 << std::endl;
    }
    else if(number > 9)
    {
        std::cout << 2 << " ";
        for(int i = 2; i < 9; i++)
            {
                if(i % 2 != 0)
                    std::cout << i << " ";
                else if(i == 8)
                {
                    for(int b = i; b < number; b++)
                    {
                        if((b % 2) != 0 && 
                           (b % 3) != 0 && 
                           (b % 5) != 0 &&
                           (b % 7) != 0 && 
                           (b % 9) != 0 &&
                           (sqrt(b) - static_cast<int>(sqrt(b))) != 0 &&
                           static_cast<double>(b / 2) * 2 != b )
                        {
                            std::cout << b << " ";
                        }
                    }
                }
            }       
    }

    std::cout << "\n";
    #endif
  
    return 0;
}