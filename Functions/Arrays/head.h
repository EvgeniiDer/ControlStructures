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
double *MinValueIn(double *arr, const int &size);

int *MaxValueIn(int *arr, const int &size);
double *MaxValueIn(double *arr, const int &size);

void Sort(int *arr, const int &size);
void Sort(double *arr, const int &size);

void ShiftLeft(int *arr, const int &size);
void ShiftLeft(double *arr, const int &size);

void ShiftRight(int *arr, const int &size);
void ShiftRight(double *arr, const int &size);


#endif