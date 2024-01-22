#include<iostream>

#define PASK
int main()
{
    #if defined PASK
  std::cout << "Введите высоту треугольника:\n";
  int n;
  std::cin >> n;
 
  for (int row = 1; row <= n; ++row) 
    {
        int Cnk = 1; 
        for (int column = 1; column < (n - row + 1); ++column) 
            {
                std::cout << " ";
            }
        for (int k = 1; k <= row; ++k) 
        {
            std::cout << Cnk << " ";
            Cnk = Cnk *  (row - k) / k;
        }
    std::cout << "\n";
    }
#endif
}