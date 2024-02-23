#include"head.h"

//#define Array
#define Two_dimensional_array
int main()
{
#if defined Two_dimensional_array
    std::cout << "Enter Integer Two_dimensional_array! " << std::endl;
    int line, column;
    std::cout << "Enter line and column separated by space: " << std::endl;
    std::cin >> line >> column;
    std::cout << "---------------------------------" << std::endl;
    int **TwoArrayInt = new int *[line];
    double **TwoArrayDouble = new double *[line];
    char **TwoArrayChar = new char *[line];
    //DON'T FORGET FREE UP MEMORY!!!!!!!!!!!!  leaks -atExit -- ./temp!!!!!!!  
    RandomArray(TwoArrayInt, line, column);
    Show(TwoArrayInt, line, column);
    RandomArray(TwoArrayDouble, line, column);
    Show(TwoArrayDouble, line, column); 
    RandomArray(TwoArrayChar, line, column);
    Show(TwoArrayChar, line, column); 
    
    std::cout << "Sum TwoArrayInt: ";
    int *SumResultTwoIntArray = Sum(TwoArrayInt, line, column);
    std::cout << *SumResultTwoIntArray << "\n";
    std::cout << "Sum TwoArrayDouble: ";
    double *SumResultTwoDoubleArray = Sum(TwoArrayDouble, line, column);
    std::cout << *SumResultTwoDoubleArray << "\n";
    std::cout << "Sum TwoArrayChar according ASKII: ";
    int *SumResultTwoCharArray = Sum(TwoArrayChar, line, column);
    std::cout << *SumResultTwoCharArray << "\n";
    delete SumResultTwoIntArray ;
    delete SumResultTwoDoubleArray ;
    delete SumResultTwoCharArray ;
    SumResultTwoIntArray  = nullptr;
    SumResultTwoDoubleArray  = nullptr;
    SumResultTwoCharArray  = nullptr;
    std::cout << std::endl;

    std::cout << "Avg TwoArrayInt: ";
    int *AvgResultTwoInt = Avg(TwoArrayInt, line, column);
    std::cout << *AvgResultTwoInt << "\n";
    delete AvgResultTwoInt;
    AvgResultTwoInt = nullptr;

    std::cout << "Avg TwoArrayDouble: ";
    double *AvgResultTwoDouble = Avg(TwoArrayDouble, line, column);
    std::cout << *AvgResultTwoDouble << "\n";
    delete AvgResultTwoDouble;
    AvgResultTwoDouble = nullptr;

    std::cout << "Avg TwoArrayChar according ASKII: ";
    int *AvgResultTwoChar = Avg(TwoArrayChar, line , column);
    std::cout << *AvgResultTwoChar << "\n";
    delete AvgResultTwoChar;
    AvgResultTwoChar = nullptr;
    std::cout << std::endl;

    std::cout << "MinValueIn TwoArrayInt: ";
    int *MinValueInTwoInt = MinValueIn(TwoArrayInt, line, column);
    std::cout << *MinValueInTwoInt << "\n";
    std::cout << "MaxValueIn TwoArrayInt: ";
    int *MaxValueInTwoInt = MaxValueIn(TwoArrayInt, line, column);
    std::cout << *MaxValueInTwoInt << "\n";
    delete MinValueInTwoInt;
    delete MaxValueInTwoInt;
    MinValueInTwoInt = nullptr;
    MaxValueInTwoInt = nullptr;
    std::cout << std::endl;

    std::cout << "MinvalueIn TwoArrayDouble: ";
    double *MinValueInTwoDouble = MinValueIn(TwoArrayDouble, line, column);
    std::cout << *MinValueInTwoDouble << "\n";
    std::cout << "MaxValueIn TwoArrayDouble: ";
    double *MaxValueInTwoDouble = MaxValueIn(TwoArrayDouble, line, column);
    std::cout << *MaxValueInTwoDouble << "\n";
    delete MinValueInTwoDouble;
    delete MaxValueInTwoDouble;
    MinValueInTwoDouble = nullptr;
    MaxValueInTwoDouble = nullptr;
    std::cout << std::endl;

    std::cout << "MinvalueIn ArrayChar according ASCII: ";
    int *MinValueTwoChar = MinValueIn(TwoArrayChar, line, column);
    std::cout << *MinValueTwoChar << ": " << static_cast<char>(*MinValueTwoChar) <<  "\n";
    std::cout << "MaxValueIn ArrayChar according ASCII: ";
    int *MaxValueTwoChar = MaxValueIn(TwoArrayChar, line, column);
    std::cout << *MaxValueTwoChar << ": " << static_cast<char>(*MaxValueTwoChar) <<  "\n";
    delete MinValueTwoChar;
    delete MaxValueTwoChar;
    MinValueTwoChar = nullptr;
    MaxValueTwoChar = nullptr;
    std::cout << std::endl;

    std::cout << "Bubble sort TwoArrayInt: " << "\n";
    Sort(TwoArrayInt , line, column);
    std::cout << "Bubble sort TwoArrayDouble: " << "\n";
    Sort(TwoArrayDouble, line, column);
    std::cout << std::endl;
    std::cout << "Bubble sort TwoArrayChar according ASCII: " << "\n";
    Sort(TwoArrayChar, line, column);
    std::cout << std::endl;

    std::cout << "Enter how much to shift to the left ArrayInt: " << std::endl;
    std::cout << "Click on any symbol to Exit the loop" << std::endl;
    ShiftLeft(TwoArrayInt, line, column);







#endif

    #if defined Array
    std::cout << "Enter Array's size: " << std::endl;
    int size;
    std::cin >> size;
    char ArrayChar[size];
    int ArrayInt[size];
    double ArrayDouble[size];

    RandomArray(ArrayInt, size);
    RandomArray(ArrayDouble, size);
    RandomArray(ArrayChar, size);  

    std::cout << "Show ArrayInt: " << "\n";
    Show(ArrayInt, size);
    std::cout << "Show ArrayDouble: " << "\n";
    Show(ArrayDouble, size);
    std::cout << "Show ArrayChar: " << "\n";
    Show(ArrayChar, size);   
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

    std::cout << "Sum ArrayChar according ASCII: ";
    int *SumResultChar = Sum(ArrayChar, size);
    std::cout << *SumResultChar << std::endl;
    delete SumResultChar;
    SumResultChar = nullptr;
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

    std::cout << "Avg ArrayChar: ";
    int *AvgResultChar = Avg(ArrayChar, size);
    std::cout << *AvgResultChar << "\n";
    delete AvgResultChar;
    AvgResultChar = nullptr;
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

    std::cout << "MinvalueIn ArrayChar: ";
    int *MinValueChar = MinValueIn(ArrayChar, size);
    std::cout << *MinValueChar << ": " << static_cast<char>(*MinValueChar) <<  "\n";
    std::cout << "MaxValueIn ArrayChar: ";
    int *MaxValueChar = MaxValueIn(ArrayChar, size);
    std::cout << *MaxValueChar << ": " << static_cast<char>(*MaxValueChar) <<  "\n";
    delete MinValueChar;
    delete MaxValueChar;
    MinValueChar = nullptr;
    MaxValueChar = nullptr;
    std::cout << std::endl;

    std::cout << "Bubble sort ArrayInt: " << "\n";
    Sort(ArrayInt , size);
    std::cout << "Bubble sort ArrayDouble: " << "\n";
    Sort(ArrayDouble, size);
    std::cout << std::endl;
    std::cout << "Bubble sort ArrayChar: " << "\n";
    Sort(ArrayChar, size);
    std::cout << std::endl;

    std::cout << "Enter how much to shift to the left ArrayInt: " << std::endl;
    std::cout << "Click on any symbol to Exit the loop" << std::endl;
    ShiftLeft(ArrayInt, size);
    std::cout << "Enter how much to shift to the left ArrayDouble: " << std::endl;
    std::cout << "Click on any symbol to Exit the loop" << std::endl;
    ShiftLeft(ArrayDouble, size);
    std::cout << "Enter how much to shift to the left ArrayChar: " << std::endl;
    std::cout << "Click on any symbol to Exit the loop" << std::endl;
    ShiftLeft(ArrayChar, size);
    std::cout << std::endl;

    std::cout << "Enter how much to shift to the right ArrayInt: " << std::endl;
    std::cout << "Click on any symbol to Exit the loop" << std::endl;
    ShiftRight(ArrayInt, size);
    std::cout << "Enter how much to shift to the right ArrayDouble: " << std::endl;
    std::cout << "Click on any symbol to Exit the loop" << std::endl;
    ShiftRight(ArrayDouble, size);
    std::cout << "Enter how muc to shift to the right ArrayChar: " << std::endl;
    std::cout << "Click on any symbol to Exti the loop" << std::endl;
    ShiftRight(ArrayChar, size);
    std::cout << std::endl;
    #endif

    return 0;
}