//
//  BubbleSort.cpp
//  SortTest
//
//  Created by 王曙光 on 23/8/15.
//  Copyright (c) 2015 Alex. All rights reserved.
//
#include <iostream>
#include "BubbleSort.h"

CBubbleSort::CBubbleSort()
{
    std::cout << "construction bubble" <<std::endl;
}
CBubbleSort::~CBubbleSort()
{
    std::cout << "destruction bubble" << std::endl;
}

void CBubbleSort::Sort(int* arr, const int size)
{
    int tmp = 0;
    for(int i = size; i > 0 ; i--){
        for(int j = 0; j < i; j++){
            if(arr[j] > arr[j+1]){
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
}