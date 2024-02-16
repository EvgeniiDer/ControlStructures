#include<iostream>


int sum(int *a, int b);
int main()
{
    int ar[4];
    std::cout << sum(ar, 4);
    std::cout << "Hi ALl" << std::endl;
    return 0;
}
int sum(int *a, int b)
{
    a[b - 2] = 3;
    return a[1];
}