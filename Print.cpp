#include<iostream>

#define PRINT
int main(){
#if defined PRINT
    std::cout << "\n0)" << std::endl;
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
            {
                std::cout << "*";
            }
        std::cout << "\n";        
    }
    std::cout << std::endl;
    std::cout << "1)";
    for(int i = 0; i < 6; i++)
    {
        for(int j = 0; j < i; j++)
        {
            std::cout << "*";
        }
        std::cout << "\n";
    }
    std::cout << std::endl;
    std::cout << "2)\n";
    for(int i = 0; i < 6; i++)
    {
        for(int j = 5; j > i; j--)
        {
            std::cout << "*";
        }
        std::cout << "\n";
    }
    std::cout << std::endl;
    std::cout << "3)\n";
    for(int i = 1; i < 6; i++)
    {
        for(int j = 1; j < 6; j++)
        {
            if(j >= i)
                std::cout << "*";
            else if(j < i)
            {
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }
    std::cout << std::endl;
    std::cout << "4)\n";
    for(int i = 1; i < 6; i++)
    {
        for(int j = 6; j > 0; j--)
        {
            if(j > i)
                std::cout << " ";
            else if(j <= i)
            {
                std::cout << "*";
            }
        }
        std::cout << "\n";
    }
    std::cout << std::endl;
    std::cout << "5)\n";
  

    #endif
  
    return 0;
}