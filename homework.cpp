#include<iostream>
#include<string>
//#define FP_UROK5_1
//#define FP_UROK5_4
//#define FP_UROK6_1
#define FP_UROK6_2
int main()
{
    #if defined FP_UROK5_1
    int a = 10;
    int b = 20;
    for(int i = a; i < b; i++)
    {
        std::cout << i << ": ";
        for(int j = 1; j <= b; j++)
        {
            if(i % j == 0)
                std::cout << j << " ";
        }
        std::cout << ";\n";
    }
    #endif
    #if defined FP_UROK5_4
    int a = 0;
    int b = 0;
    int c = 0;
    int count = 1;
    for(int i = 100; i < 1000; i++)
    {
        a = i % 10; //std::cout << "a: " << a << ". ";
        b = ((i % 100) - a) / 10; //std::cout << "b: " << b << "\n";
        c = (i - (i % 100)) / 100; 
        if(a != b &&
           a != c &&
           b != c )
           {
               std::cout << i << " ";
                count++;            
           }
    }
    int min = 0;
    int hour = 0;
    int sec = count % 60;
    min = (count - (count % 60)) / 60;
    hour = (min - (min % 60)) / 60;
    std::cout << "\nTotal: " << hour << "." << min << "." << sec << " sec! \n";
    #endif
    #if defined FP_UROK6_1
    const int size = 9;
    double arr[size]={-5.7, 6.0, 2, 0, -4.7, 6, 8.1, -4, 0};
    double positive = 0; 
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {
            positive = arr[i];
        }
    }
    double negative = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            negative = arr[i]; 
        }
    }   

    std::cout << "Last positive number: " << positive << std::endl;
    std::cout << "First negatine number: " << negative << std::endl;
// Give me some water
    #endif
    #if defined FP_UROK6_2
    int a[3] = {2, 4, 6};
    int b[3] = {1, 3, 5};
    int d[6];
    int k = 0;
    for(int i = 0; i < 3; i++)
    {
        d[k++] = b[i];
        d[k++] = a[i];
    }
    for(int i: d)
        std::cout << i << " ";
    #endif
    return 0;
}
// 67