#include"head.h"

int main()
{
    std::cout << "Enter Array's size: " << std::endl;
    int size;
    std::cin >> size;

    int ArrayInt[size];
    double ArrayDouble[size];

    RandomArray(ArrayInt, size);
    RandomArray(ArrayDouble, size);

    std::cout << "Show ArrayInt: " << "\n";
    Show(ArrayInt, size);
    std::cout << "Show ArrayDouble: " << "\n";
    Show(ArrayDouble, size);
    std::cout << std::endl;

    std::cout << "Sum ArrayInt: ";
    int *SumResultInt = Sum(ArrayInt, size);
    std::cout << *SumResultInt << "\n";
    delete SumResultInt;
    SumResultInt = nullptr;
    
    std::cout << "Sum ArrayDouble: ";
    double *SumResultDouble = Sum(ArrayDouble, size);
    std::cout << *SumResultDouble << "\n";
    delete SumResultDouble;
    SumResultDouble = nullptr;
    std::cout << std::endl;

    std::cout << "Avg ArrayInt: ";
    int *AvgResultInt = Avg(ArrayInt, size);
    std::cout << *AvgResultInt << "\n";
    delete AvgResultInt;
    AvgResultInt = nullptr;

    std::cout << "Avg ArrayDouble: ";
    double *AvgResultDouble = Avg(ArrayDouble, size);
    std::cout << *AvgResultDouble << "\n";
    delete AvgResultDouble;
    AvgResultDouble = nullptr;
    std::cout << std::endl;

    std::cout << "MinValueIn ArrayInt: ";
    int *MinValueInInt = MinValueIn(ArrayInt, size);
    std::cout << *MinValueInInt << "\n";
    std::cout << "MaxValueIn ArrayInt: ";
    int *MaxValueInInt = MaxValueIn(ArrayInt, size);
    std::cout << *MaxValueInInt << "\n";
    delete MinValueInInt;
    delete MaxValueInInt;
    MinValueInInt = nullptr;
    MaxValueInInt = nullptr;
    std::cout << std::endl;

    std::cout << "MinvalueIn ArrayDouble: ";
    double *MinValueInDouble = MinValueIn(ArrayDouble, size);
    std::cout << *MinValueInDouble << "\n";
    std::cout << "MaxValueIn ArrayDouble: ";
    double *MaxValueInDouble = MaxValueIn(ArrayDouble, size);
    std::cout << *MaxValueInDouble << "\n";
    delete MinValueInDouble;
    delete MaxValueInDouble;
    MinValueInDouble = nullptr;
    MaxValueInDouble = nullptr;
    std::cout << std::endl;

    std::cout << "Bubble sort ArrayInt: " << "\n";
    Sort(ArrayInt , size);
    std::cout << "Bubble sort ArrayDouble: " << "\n";
    Sort(ArrayDouble, size);
    std::cout << std::endl;

    std::cout << "Enter how much to shift to the left ArrayInt: " << std::endl;
    std::cout << "Click on any symbol to Exit the loop" << std::endl;
    ShiftLeft(ArrayInt, size);
    std::cin.get();
    std::cout << "Enter how much to shift to the left ArrayDouble: " << std::endl;
    std::cout << "Click on any symbol to Exit the loop" << std::endl;
    ShiftLeft(ArrayDouble, size);
    std::cout << std::endl;

    std::cout << "Enter how much to shift to the right ArrayInt: " << std::endl;
    std::cout << "Click on any symbol to Exit the loop" << std::endl;
    ShiftRight(ArrayInt, size);
    std::cout << "Enter how much to shift to the right ArrayDouble: " << std::endl;
    std::cout << "Click on any symbol to Exit the loop" << std::endl;
    ShiftRight(ArrayDouble, size);
    std::cout << std::endl;


    return 0;
}