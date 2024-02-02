#include<iostream>
#include<bitset>
#define TAB "\t"
//#define ENTERARRAY
#define BIT
int main()
{
#if defined BIT
int a, b;
std::cin >> a;
std::cin >> b;
std::bitset<16>_aBit(a);
std::bitset<16>_bBit(b);
std::cout << "a: " <<  a << " = " << _aBit << std::endl;
std::cout << "b: " << b << " = " << _bBit << std::endl;
a ^= b;
b ^= a;
a ^= b;

std::cout << "Swapping....." << std::endl;
std::bitset<16>_a(a);
std::bitset<16>_b(b);
std::cout << "a: " << a << " = " << _a << std::endl;
std::cout << "b: " << b << " = " << _b << std::endl;
#endif
#if defined ENTERARRAY
std::cout << "Enter Array's size:" << TAB;
int sz = 0;
std::cin >> sz;
std::cout << "Enter array elements from Keyboard: " << std::endl;
int array[sz];
int * count = new int;
for(int &i: array)
{
    std::cout << ++*count << " element" << TAB << ": ";
    std::cin >> i;
}
std::cout << std::endl;
std::cout << "Elements of your Array" << std::endl;
delete count;
count = nullptr;
count = new int(0);
for(const int &i: array)
{
    std::cout << ++*count << " element is: " << TAB << i << std::endl;
}
delete count;
count = nullptr;
std::cout << std::endl;
std::cout << "Array elements in reverse order" << std::endl;
for(int i = sz - 1; i >= 0; i--)
{
        std::cout << i + 1 << " element is: " << TAB << array[i] << std::endl;   
}
std::cout << std::endl;
std::cout << "Sum array's elements: "; 
count = new int(0);
for(const int &i: array)
{
    *count += i; 
}
std::cout << TAB << *count << std::endl;
std::cout << std::endl;
std::cout << "Average arra's elements value: " << TAB << *count / sz << std::endl;
std::cout << std::endl;
delete count;
count = nullptr;

std::cout << "Min and Max values in the Array" << std::endl;
int min = array[0];
int max = 0;
for(const int &i : array)
{
    if(max < i)
        max = i;
    if(min >= i)
        min = i;
}
std::cout << "Max is: " << TAB << max << std::endl;
std::cout << "Min is: " << TAB << min << std::endl;
std::cout << std::endl;
#endif

    return 0;
}