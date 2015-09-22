//
//  InsertSort.cpp
//  SortTest
//
//  Created by 王曙光 on 23/8/15.
//  Copyright (c) 2015 Alex. All rights reserved.
//

#include "InsertSort.h"
#include <iostream>
CInsertSort::CInsertSort(){}
CInsertSort::~CInsertSort(){}

void CInsertSort::Sort(int *arr, const int size){
    
}

void CInsertSort::directInsertSort(int *arr, const int size){
    int temp_index = 0;
    int max = 0;
    for(int i = 0; i < size; i++){
        temp_index = i;
        max = arr[i];
        for(int j = i; j < size; j++)
            if(arr[j] > max){
                temp_index = j;
                max = arr[j];
            }
        for(int z = temp_index; z >= i + 1; z--){
            arr[z] = arr[z-1];
        }
        arr[i] = max;
    }
    
}

void CInsertSort::shellInsertSort(int *arr, const int size){
    int gap, group;
    int temp_index = 0;
    int max = 0;
    std::cout << "shellInserSort" << std::endl;
    for(gap = size/2; gap > 0; gap /= 2){
        for(group = 0; group < gap; group++){
            for(int i = group; i < size; i += gap){
                temp_index = i;
                max = arr[i];
                for(int j = i; j < size; j+= gap){
                    if(arr[j] > max){
                        temp_index = j;
                        max = arr[j];
                    }
                }
                for(int z = temp_index; z >= i+gap; z -= gap){
                    arr[z] = arr[z-gap];
                }
                arr[i] = max;
            }
        }
    }

}