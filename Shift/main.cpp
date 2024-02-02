#include<iostream>

//#define SHIFTLEFT
//#define SHIFTRIGHT

constexpr int SIZE = 10;

int main()
{
#if defined SHIFTLEFT

int array[SIZE];
array[0] = 0;
array[1] = 1;
array[2] = 1;

for(int i = 3; i < SIZE; ++i)
{
    
    array[i] = array[i - 1] + array[i - 2];
}

int shift = 0;
int rightpart = 0;
std::cout << "Enter how much to shift to the left: " << std::endl;
std::cout << "Click on any symbol to Exit the loop" << std::endl;
while(std::cin >> shift)
{
    if(shift == 0)
        {
            for(const int &i: array)
                {
                    std::cout << i << " ";
                }
            std::cout << "\n";  
        }
    else if(shift >= 10)
        {
            shift %= 10;
            int shiftarray[shift];
            for(int i = 0; i < SIZE; i++)
                {
                    if(i + shift < SIZE)
                        {
                            shiftarray[i] = array[i];
                            array[i] = array[i + shift];
                        }
                    else{
                        array[i] = shiftarray[rightpart++];
                    } 
                }
            for(const int &i: array)
                {
                    std::cout << i << " ";
                }
            rightpart = 0;
        }
    else
    {
        int shiftarray[shift];
            for(int i = 0; i < SIZE; i++)
                {
                    if(i + shift < SIZE)
                        {
                            shiftarray[i] = array[i];
                            array[i] = array[i + shift];
                        }
                    else{
                        array[i] = shiftarray[rightpart++];
                    } 
                }
            for(const int &i: array)
                {
                    std::cout << i << " ";
                }
            rightpart = 0;
    }    
}
    std::cout << std::endl;

#endif
    #if defined SHIFTRIGHT
int array[SIZE];
array[0] = 0;
array[1] = 1;
array[2] = 1;

for(int i = 3; i < SIZE; ++i)
{
    
    array[i] = array[i - 1] + array[i - 2];
}

int shift = 0;
//int rightpart = 0;
std::cout << "Enter how much to shift to the left: " << std::endl;
std::cout << "Click on any symbol to Exit the loop" << std::endl;
while(std::cin >> shift)
{
    if(shift == 0)
        {
            for(const int &i: array)
                {
                    std::cout << i << " ";
                }
            std::cout << "\n";  
        }
    else if(shift >= 10)
        {
        shift %= 10;
        int shiftarray[SIZE];
        int count = shift;
            for(int i = 0; i < SIZE; i++)
                {

                  if(shift > 0)
                        {
                            shiftarray[i] = array[i];
                            array[i] = array[SIZE - shift--];
                        }
                    else{
                        shiftarray[i] = array[i];
                        array[i] = shiftarray[i - count];
                    } 
                }
            for(const int &i: array)
                {
                    std::cout << i << " ";
                }
        }
    else
    {
        int shiftarray[SIZE];
        int count = shift;
            for(int i = 0; i < SIZE; i++)
                {

                  if(shift > 0)
                        {
                            shiftarray[i] = array[i];
                            array[i] = array[SIZE - shift--];
                        }
                    else{
                        shiftarray[i] = array[i];
                        array[i] = shiftarray[i - count];
                    } 
                }
            for(const int &i: array)
                {
                    std::cout << i << " ";
                }
    }    
}
    std::cout << std::endl;

    #endif
}