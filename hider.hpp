#ifndef HIDER_HPP
#define HIDER_HPP
#include <iostream>
#include<cassert>
#include <ctime>
#include <cstdlib>
using namespace std;
int* bynary(int number, int* arr, int& i);
int downcalculate(int matrix[5][5]);
int upcalculate(int matrix[5][5]);
int newmatrix(int matrix[5][5],int* arrdown, int* arrup);
#endif
