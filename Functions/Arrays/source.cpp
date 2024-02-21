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
        std::cout << _arr[i] << "     ";
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
    int temp;
    for(int i = 0; i < _size; i++)
    {
        for(int y = 0; y < _size; y++)
        {
            if(_arr[i] < _arr[y])
            {
                temp = _arr[i];
                _arr[i] = _arr[y];
                _arr[y] = temp;
            }
        }
    }
    Show(_arr, _size);
}
void Sort(double *_arr, const int &_size)
{
    double temp;
    for(int i = 0; i < _size; i++)
    {
        for(int y = 0; y < _size; y++)
        {
            if(_arr[i] < _arr[y])
            {
                temp = _arr[i];
                _arr[i] = _arr[y];
                _arr[y] = temp;
            }
        }
    }
    Show(_arr, _size);
}

void ShiftLeft(int *_arr, const int &_size)
{
    int shift = 0;
    int rightpart = 0;
    while(std::cin >> shift)
    {
        if(shift == 0 || shift == _size)
        {
            Show(_arr, _size);
        }
        else if(shift > _size)
            {
                shift %= _size;
                int shiftarray[_size];
                for(int i = 0; i < _size; i++)
                {
                    if(shift < _size)
                    {
                        shiftarray[i] = _arr[shift++];
                    }
                    else{
                        shiftarray[i] = _arr[rightpart++];
                    }
               }
                for(int i = 0; i < _size; i++)
                {
                    _arr[i] = shiftarray[i];
                }
                rightpart = 0;
                Show(_arr, _size);
            }
        else
            {
                int shiftarray[_size];
                for(int i = 0; i < _size; i++)
                {
                    if(shift < _size)
                    {
                        shiftarray[i] = _arr[shift++];
                    }
                    else{
                        shiftarray[i] = _arr[rightpart++];
                    }
               }
                for(int i = 0; i < _size; i++)
                {
                    _arr[i] = shiftarray[i];
                }
                rightpart = 0;
                Show(_arr, _size);
            }
    
    }    
}
void ShiftLeft(double *_arr, const int &_size)
{
    
    int shift = 0;
    int rightpart = 0;
    std::cin.clear();
    std::cin.ignore();
    while(std::cin >> shift)
    {
        if(shift == 0 || shift == _size)
        {
            Show(_arr, _size);
        }
        else if(shift > _size)
            {
                shift %= _size;
                double shiftarray[_size];
                for(int i = 0; i < _size; i++)
                {
                    if(shift < _size)
                    {
                        shiftarray[i] = _arr[shift++];
                    }
                    else{
                        shiftarray[i] = _arr[rightpart++];
                    }
               }
                for(int i = 0; i < _size; i++)
                {
                    _arr[i] = shiftarray[i];
                }
                rightpart = 0;
                Show(_arr, _size);
            }
        else
            {
                double shiftarray[_size];
                for(int i = 0; i < _size; i++)
                {
                    if(shift < _size)
                    {
                        shiftarray[i] = _arr[shift++];
                    }
                    else{
                        shiftarray[i] = _arr[rightpart++];
                    }
               }
                for(int i = 0; i < _size; i++)
                {
                    _arr[i] = shiftarray[i];
                }
                rightpart = 0;
                Show(_arr, _size);
            }
    
    }    
}

void ShiftRight(int *_arr, const int &_size)
{
    std::cin.clear();
    std::cin.ignore();
    int shift = 0;
    int leftpart = 0;
    while(std::cin >> shift)
    {
        if(shift == 0 || shift == _size)
        {
            Show(_arr, _size);
        }
        else if(shift > _size)
        {
            shift %= _size;
            int shiftarray[_size];
            for(int i = 0; i < _size; i++)
            {
                if(shift > 0)
                {
                    shiftarray[i] = _arr[_size - shift--];
                }
                else
                {
                    shiftarray[i] = _arr[leftpart++];
                }
            }
            for(int i = 0; i < _size; i++)
            {
                _arr[i] = shiftarray[i];
            }
            leftpart = 0;
            Show(_arr, _size);
        }
        else{
            int shiftarray[_size];
            for(int i = 0; i < _size; i++)
            {
                if(shift > 0)
                {
                    shiftarray[i] = _arr[_size - shift--];
                }
                else
                {
                    shiftarray[i] = _arr[leftpart++];
                }
            }
            for(int i = 0; i < _size; i++)
            {
                _arr[i] = shiftarray[i];
            }
            leftpart = 0;
            Show(_arr, _size);
        }
    }
}
void ShiftRight(double *_arr, const int &_size)
{
    std::cin.clear();
    std::cin.ignore();
    int shift = 0;
    int leftpart = 0;
    while(std::cin >> shift)
    {
        if(shift == 0 || shift == _size)
        {
            Show(_arr, _size);
        }
        else if(shift > _size)
        {
            shift %= _size;
            double shiftarray[_size];
            for(int i = 0; i < _size; i++)
            {
                if(shift > 0)
                {
                    shiftarray[i] = _arr[_size - shift--];
                }
                else
                {
                    shiftarray[i] = _arr[leftpart++];
                }
            }
            for(int i = 0; i < _size; i++)
            {
                _arr[i] = shiftarray[i];
            }
            leftpart = 0;
            Show(_arr, _size);
        }
        else{
            double shiftarray[_size];
            for(int i = 0; i < _size; i++)
            {
                if(shift > 0)
                {
                    shiftarray[i] = _arr[_size - shift--];
                }
                else
                {
                    shiftarray[i] = _arr[leftpart++];
                }
            }
            for(int i = 0; i < _size; i++)
            {
                _arr[i] = shiftarray[i];
            }
            leftpart = 0;
            Show(_arr, _size);
        }
    }
}
