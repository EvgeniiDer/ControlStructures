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

void RandomArray(int *_arr, const int &_size);
void RandomArray(double *_arr, const int &_size);


int *Sum(int *_arr, const int &_size);
//int Sum(char *ch, const int & size);
double *Sum(double *_arr, const int &_size);
//int Sum(int *arr[], int sizeX, int sizeY);
//double Sum(double *arr[], int sizeX, int sizeY);
//int Sum(char*ch[], int sizeX, int sizeY);

int *Avg(int *_arr, const int &_size);
double *Avg(double *_arr, const int &_size);

int *MinValueIn(int *_arr, const int &_size);
double *MinValueIn(double *_arr, const int &_size);

int *MaxValueIn(int *_arr, const int &_size);
double *MaxValueIn(double *_arr, const int &_size);

void Sort(int *_arr, const int &s_ize);
void Sort(double *_arr, const int &_size);

void ShiftLeft(int *_arr, const int &_size);
void ShiftLeft(double *_arr, const int &_size);

void ShiftRight(int *_arr, const int &_size);
void ShiftRight(double *_arr, const int &_size);


#endif