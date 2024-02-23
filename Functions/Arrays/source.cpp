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
void Show(char *_arr, const int &_size)
{
    for(int i = 0; i < _size; i++)
    {
         std::cout << _arr[i] << "    ";
    }
    std::cout << std::endl;
}

void Show(int **_arr, const int &_lines, const int &_columns)
{
    for(int x = 0; x < _lines; x++)
    {
        for(int y = 0; y < _columns; y++)
        {
            std::cout << _arr[x][y] << "   ";
        }
        std::cout << std::endl << std::endl;
    }
}
void Show(double **_arr, const int &_lines, const int &_columns)
{
    for(int i = 0; i < _lines; i++)
    {
        for(int j = 0; j < _columns; j++)
        {
            std::cout << _arr[i][j] << "   ";
        }
        std::cout << std::endl << std::endl;
    }
}
void Show(char **_arr, const int &_lines, const int &_columns)
{
    for(int i = 0; i < _lines; i++)
    {
        for(int j = 0; j < _columns; j++)
        {
            std::cout << _arr[i][j] << "   ";
        }
        std::cout << std::endl << std::endl;
    }
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
void RandomArray(char *_arr, const int &_size)
{
    srand(time(0));
    for(int i = 0; i < _size; i++)
    {
        int random = rand() % 2;
        if(random == 0)
        {
            _arr[i] = static_cast<char>(rand() % (90 - 65 + 1) + 65);
        }
        else
        {
            _arr[i] = static_cast<char>(rand() % (122 - 97 + 1) + 97);
        }
    }
}

void RandomArray(int **_arr, const int &_lines, const int &_columns)
{
    srand(time(0));
    for(int i = 0; i < _lines; i++)
    {
        _arr[i] = new int[_columns];
        for( int y = 0; y < _columns; y++)
        {
           _arr[i][y] = rand() % 100;
        }
    }
}
void RandomArray(double **_arr, const int &_lines, const int &_columns)
{
    srand(time(0));
    for(int i = 0; i < _lines; i++)
    {
        _arr[i] = new double[_columns];
        for(int j = 0; j < _columns; j++)
        {
            _arr[i][j] = static_cast<double>(rand()) / 
                  static_cast<double>(RAND_MAX);
        }
    }
}
void RandomArray(char **_arr, const int &_lines, const int &_columns)
{
    srand(time(0));
    for(int i = 0; i < _lines; i++)
    {
        _arr[i] = new char[_columns];
        for(int j = 0; j < _columns; j++)
        {
            int random = rand() % 2;           
            if(random == 0)
                {
                    _arr[i][j] = static_cast<char>(rand() % (90 - 65 + 1) + 65);
                }
                else
                {
                    _arr[i][j] = static_cast<char>(rand() % (122 - 97 + 1) + 97);
                }            
        }

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
int *Sum(char *_arr, const int &_size)
{
    int *result = new int(0);
    for(int i = 0; i < _size; i++)
    {
        *result += static_cast<int>(_arr[i]);
    }
    return result;
}

int *Sum(int **_arr, const int &_lines, const int &_columns)
{
    int *result = new int(0);
    for(int i = 0; i < _lines; i++)
    {
        for(int y = 0; y < _columns; y++)
        {
            *result += _arr[i][y];
        }
    }
    return result;
}
double *Sum(double **_arr, const int &_lines, const int &_columns)
{
    double *result = new double(0);
    for(int i = 0; i < _lines; i++)
    {
        for(int y = 0; y < _columns; y++)
        {
            *result += _arr[i][y];
        }
    }
    return result;
}
int *Sum(char **_arr, const int &_lines, const int &_columns)
{
    int *result = new int(0);
    for(int i = 0; i < _lines; i++)
    {
        for(int j = 0; j < _columns; j++)
            {
                *result += static_cast<int>(_arr[i][j]);  
            }
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
int *Avg(char *_arr, const int &_size)
{
    int *result = new int(0);
    for(int i = 0; i < _size; i++)
    {
        *result += static_cast<int>(_arr[i]);
    }
    return &(*result /= _size);
}

int *Avg(int **_arr, const int &_lines, const int &_columns)
{
    int *result = new int(0);
    for(int i = 0; i < _lines; i++)
    {
        for(int j = 0; j < _columns; j++)
        {
            *result += _arr[i][j];
        }
    }
    return &(*result /= _lines * _columns);
}
double *Avg(double **_arr, const int &_lines, const int &_columns)
{
    double *result = new double(0);
    for(int i = 0; i < _lines; i++)
    {
        for(int j = 0; j < _columns; j++)
        {
            *result += _arr[i][j];
        }
    }
    return &(*result /= _lines * _columns);
}
int *Avg(char **_arr, const int &_lines, const int &_columns)
{
    int *result = new int(0);
    for(int i = 0; i < _lines; i++)
    {
        for(int j = 0; j < _columns; j++)
        {
            *result += static_cast<int>(_arr[i][j]);
        }
    }
    return &(*result /= _lines * _columns);
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
int *MinValueIn(char *_arr, const int &_size)
{
    int *result = new int(static_cast<int>(_arr[0]));
    for(int i = 0; i < _size; i++)
    {
        if(*result >= static_cast<int>(_arr[i]))
        {
            *result = static_cast<int>(_arr[i]);
        }
    }
    return result;
}

int *MinValueIn(int **_arr, const int &_lines, const int &_columns)
{
    int *result = new int(_arr[0][0]);
    for(int i = 0; i < _lines; i++)
    {
        for(int j = 0; j < _columns; j++)
        {
            if(*result >= _arr[i][j])
            {
                *result = _arr[i][j];
            }
        }
    }
    return result;
}
double *MinValueIn(double **_arr, const int &_lines, const int &_columns)
{
    double *result = new double(_arr[0][0]);
    for(int i = 0; i < _lines; i++)
    {
        for(int j = 0; j < _columns; j++)
        {
            if(*result >= _arr[i][j])
            {
                *result = _arr[i][j];
            }
        }
    }
    return result; 
}
int *MinValueIn(char **_arr, const int &_lines, const int &_columns)
{
    int *result = new int(static_cast<int>(_arr[0][0]));
    for(int i = 0; i < _lines; i++)
    {
        for(int j = 0; j < _columns; j++)
        {
            if(*result >= static_cast<int>(_arr[i][j]))
            {
                *result = static_cast<int>(_arr[i][j]);
            }
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
int *MaxValueIn(char *_arr, const int &_size)
{
    int *result = new int(static_cast<int>(_arr[0]));
    for(int i = 0; i < _size; i++)
    {
        if(*result <= static_cast<int>(_arr[i]))
        {
            *result = static_cast<int>(_arr[i]);
        }
    }
    return result;
}

int *MaxValueIn(int **_arr, const int &_lines, const int &_columns)
{
    int *result = new int(_arr[0][0]);
    for(int i = 0; i < _lines; i++)
    {
        for(int j = 0; j < _columns; j++)
        {
            if(*result <= _arr[i][j])
            {
                *result = _arr[i][j];
            }
        }
    }
    return result;
}
double *MaxValueIn(double **_arr, const int &_lines, const int &_columns)
{
    double *result = new double(_arr[0][0]);
    for(int i = 0; i < _lines; i++)
    {
        for(int j = 0; j < _columns; j++)
        {
            if(*result <= _arr[i][j])
            {
                *result = _arr[i][j];
            }
        }
    }
    return result;
}
int *MaxValueIn(char **_arr, const int &_lines, const int &_columns)
{
    int *result = new int(static_cast<int>(_arr[0][0]));
        for(int i = 0; i < _lines; i++)
    {
        for(int j = 0; j < _columns; j++)
        {
            if(*result <= static_cast<int>(_arr[i][j]))
            {
                *result = static_cast<int>(_arr[i][j]);
            }
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
void Sort(char *_arr, const int &_size)
{
    int temp;
    for(int i = 0; i < _size; i++)
    {
        for(int y = 0; y < _size; y++)
        {
            if(static_cast<int>(_arr[i]) < static_cast<int>(_arr[y]))
            {
                temp = static_cast<int>(_arr[i]);
                _arr[i] = _arr[y];
                _arr[y] = static_cast<char>(temp);
            }
        }
    }
    Show(_arr, _size);
}

void Sort(int **_arr, const int &_lines, const int &_columns)
{
    int temp = 0;
    for(int inext = 0; inext < _lines; inext++)
    {
        for(int jnext = 0; jnext < _columns; jnext++)
        {
            for(int i = 0; i < _lines; i++)
                {
                    for(int j = 0; j < _columns; j++)
                        {
                            if(_arr[i][j] > _arr[inext][jnext])
                                {
                                    temp = _arr[i][j];
                                    _arr[i][j] = _arr[inext][jnext];
                                    _arr[inext][jnext] = temp;
                                }
                        }                
                }
        }
    }
    Show(_arr, _lines, _columns);
}
void Sort(double **_arr, const int &_lines, const int &_columns)
{
    double temp = 0.0;
    for(int inext = 0; inext < _lines; inext++)
    {
        for(int jnext = 0; jnext < _columns; jnext++)
        {
            for(int i = 0; i < _lines; i++)
                {
                    for(int j = 0; j < _columns; j++)
                        {
                            if(_arr[i][j] > _arr[inext][jnext])
                                {
                                    temp = _arr[i][j];
                                    _arr[i][j] = _arr[inext][jnext];
                                    _arr[inext][jnext] = temp;
                                }
                        }                
                }
        }
    }
    Show(_arr, _lines, _columns);
}
void Sort(char **_arr, const int &_lines, const int &_columns)
{
    int temp = 0;
    for(int inext = 0; inext < _lines; inext++)
    {
        for(int jnext = 0; jnext < _columns; jnext++)
        {
            for(int i = 0; i < _lines; i++)
                {
                    for(int j = 0; j < _columns; j++)
                        {
                            if(static_cast<int>(_arr[i][j]) > static_cast<int>(_arr[inext][jnext]))
                                {
                                    temp = static_cast<int>(_arr[i][j]);
                                    _arr[i][j] = _arr[inext][jnext];
                                    _arr[inext][jnext] = static_cast<char>(temp);
                                }
                        }                
                }
        }
    }
    Show(_arr, _lines, _columns);
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
void ShiftLeft(char *_arr, const int &_size)
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
                char shiftarray[_size];
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

void ShiftLeft(int **_arr, const int &_lines, const int &_columns)
{
    std::cin.clear();
    std::cin.ignore();
    int shift = 0;
    int shiftarray[_lines][_columns];
    while(std::cin >> shift)
    {
        if(shift == 0 || shift == _lines * _columns)
            {
                Show(_arr, _lines, _columns);
            }
        else
            {
                int tempshift = shift;
                int rightprart = 0;
                int row = 1;
                int buffer[shift];
                for(int i = 0; i < _lines; i++)
                {
                    for(int j = 0; j < _columns; j++)
                        {
                            if(shift < _columns) 
                                {
                                    if(i == 0 && j < tempshift)
                                    {
                                        buffer[j] = _arr[i][j];
                                        shiftarray[i][j] = _arr[i][shift++];
                                        
                                    }
                                    else
                                        shiftarray[i][j] = _arr[i][shift++];
                                }
                            else if(i == _lines - 1 && j >= _columns - shift - 1)
                                {
                                    std::cout << "bufer[] " << buffer[rightprart] << std::endl;
                                    shiftarray[i][j] = buffer[rightprart++];
                                }
                            else 
                                {   
                                    ///Problema tut!!!!
                                     shiftarray[i][j] = _arr[row][rightprart++];
                                }
                        
                        }
                    rightprart = 0;
                    shift = tempshift;
                    if(row < _lines - 1)
                    {
                        row++;
                    }
                    
                 }
            }
            for(int i = 0; i < _lines; i++)
                for(int j = 0; j < _columns; j++)
                    _arr[i][j] = shiftarray[i][j];
            Show(_arr, _lines, _columns);
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
void ShiftRight(char *_arr, const int &_size)
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
            char shiftarray[_size];
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
            char shiftarray[_size];
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