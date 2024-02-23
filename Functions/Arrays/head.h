#ifndef HEAD_H_
#define HEAD_H_
#include<iostream>
#include<cstring>
#include<ctime>
//leaks -atExit -- ./temp check for leaks
//make compile code
//./temp start code

void Show(int *_arr, const int &_size);
void Show(double *_arr, const int &_size);
void Show(char *_arr, const int &_size);

void Show(int **_arr, const int &_lines, const int &_columns);
void Show(double **_arr, const int &_lines, const int &_columns);
void Show(char **_arr, const int &_lines, const int &_columns);

//Random
void RandomArray(int *_arr, const int &_size);
void RandomArray(double *_arr, const int &_size);
void RandomArray(char *_arr, const int &_size);
/*The Two Dimensinal array  isallocating memory for columns and 
is filled wtiht random integer numbers DONT'T FORGET FREE UP MEMORY EVGENII!!!*/
void RandomArray(int **_arr, const int &_lines, const int &_colums);  
void RandomArray(double **_arr, const int &_lines, const int &_columns);
void RandomArray(char **_arr, const int &_lines, const int &_columns);

//Sum
int *Sum(int *_arr, const int &_size);
int *Sum(char *_arr, const int & size);
double *Sum(double *_arr, const int &_size);

int *Sum(int **_arr, const int &_lines, const int &_columns);
double *Sum(double **_arr, const int &_lines, const int &_columns);
int *Sum(char **_arr, const int &_lines, const int &_columns);

//Avg
int *Avg(int *_arr, const int &_size);
double *Avg(double *_arr, const int &_size);
int *Avg(char *_arr, const int &_size);

int *Avg(int **_arr, const int &_lines, const int &_columns);
double *Avg(double **_arr, const int &_lines, const int &_columns);
int *Avg(char **_arr, const int &_lines, const int &_columns);

//Min
int *MinValueIn(int *_arr, const int &_size);
double *MinValueIn(double *_arr, const int &_size);
int *MinValueIn(char *_arr, const int &_size);

int *MinValueIn(int **_arr, const int &_lines, const int &_columns);
double *MinValueIn(double **_arr, const int &_lines, const int &_columns);
int *MinValueIn(char **_arr, const int &_lines, const int &_columns);

//Max
int *MaxValueIn(int *_arr, const int &_size);
double *MaxValueIn(double *_arr, const int &_size);
int *MaxValueIn(char *_arr, const int &_size);

int *MaxValueIn(int **_arr, const int &_lines, const int &_columns);
double *MaxValueIn(double **_arr, const int &_lines, const int &_columns);
int *MaxValueIn(char **_arr, const int &_lines, const int &_columns);

//SORT
void Sort(int *_arr, const int &s_ize);
void Sort(double *_arr, const int &_size);
void Sort(char *_arr, const int &_size);

void Sort(int **_arr, const int &_lines, const int &_columns);
void Sort(double **_arr, const int &_lines, const int &_columns);
void Sort(char **_arr, const int &_lines, const int &_columns);


void ShiftLeft(int *_arr, const int &_size);
void ShiftLeft(double *_arr, const int &_size);
void ShiftLeft(char *_arr, const int &_size);

void ShiftLeft(int **arr, const int &_lines, const int &_column);

void ShiftRight(int *_arr, const int &_size);
void ShiftRight(double *_arr, const int &_size);
void ShiftRight(char *_arr, const int &_size);


#endif