#include"head.h"

void Show(int *_arr, const int &_size)
{
    for(int i = 0; i < _size; i++)
    {
        std::cout << _arr[i] << "\t";
    }
    std::cout << std::endl;
}
void Show(double *_arr, const int &_size)
{
    for(int i = 0; i < _size; i++)
    {
        std::cout << _arr[i] << "\t";
    }
    std::cout << std::endl;
}

void RandomArray(int *_arr, const int &_size)
{
    srand(time(0));
    for(int i = 0; i < _size; i++)
    {
        _arr[i] = rand() % 100;
    }
}
void RandomArray(double *_arr, const int &_size)
{
    srand(time(0));
    for(int i = 0; i < _size; i++)
    {
        _arr[i] = static_cast<double>(rand()) / 
                  static_cast<double>(RAND_MAX);
    }
}

int *Sum(int *_arr, const int &_size)
{
    int *result = new int(0);
    for(int i = 0 ; i < _size; i++)
    {
        *result += _arr[i];
    }
    return result;
}
double *Sum(double *_arr, const int &_size)
{
    double *result = new double(0.0);
    for(int i = 0; i < _size; i++)
    {
        *result += _arr[i];
    }
    return result;
}

int *Avg(int *_arr, const int &_size)
{
    int *result = new int(0);
    for(int i = 0; i < _size; i++)
    {
        *result += _arr[i];
    }
    return &(*result /= _size);
}
double *Avg(double *_arr, const int &_size)
{
    double *result = new double(0.0);
    for(int i = 0; i < _size; i++)
    {
        *result += _arr[i];
    }
    return &(*result /= _size);
}

int *MinValueIn(int *_arr, const int &_size)
{
    int *result = new int(_arr[0]);
    for(int i = 0; i < _size; i++)
    {
        if(*result >= _arr[i])
        {
            *result = _arr[i];
        }
    }
    return result;
}
double *MinValueIn(double *_arr, const int &_size)
{
    double * result = new double(_arr[0]);
    for(int i = 0; i < _size; i ++)
    {
        if(*result >= _arr[i])
        {
            *result = _arr[i];
        }
    }
    return result;
}

int *MaxValueIn(int *_arr, const int &_size)
{
    int *result = new int(_arr[0]);
    for(int i = 0; i < _size; i++)
    {
        if(*result <= _arr[i])
        {
            *result = _arr[i];
        }
    }
    return result;
}
double *MaxValueIn(double *_arr, const int &_size)
{
    double *result = new double(_arr[0]);
    for(int i = 0; i < _size; i++)
    {
        if(*result <= _arr[i])
        {
            *result = _arr[i];
        }
    }
    return result;
}

void Sort(int *_arr, const int &_size)
{
    int *temp = new int(_arr[0]);
    for(int i = 0; i < _size; i++)
    {
        if(*temp >= _arr[i + 1])
        {
            _arr[i] = *temp;
            *temp = _arr[i + 1];
            _arr[i] 
        }
    }
}