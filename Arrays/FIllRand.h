#pragma once
#include"stdaf.h"
#include"Constants.h"
void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);//заполняем массив случайными числами 
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);//заполняем массив случайными числами 

void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);
