//
//  QuickSort.cpp
//  SortTest
//
//  Created by 王曙光 on 23/8/15.
//  Copyright (c) 2015 Alex. All rights reserved.
//

#include "QuickSort.h"

CQuickSort::CQuickSort(){}
CQuickSort::~CQuickSort(){}
void CQuickSort::Sort(int *arr, const int size){}

void CQuickSort::quickSort(int *arr, const int left, const int right){
    int low = left, high = right;
    int pivot = arr[low];
    if(left > right) return;
    while(low < high){
        while(low < high && arr[high] >= pivot)
            high--;
        arr[low] = arr[high];
        while(low < high && arr[low] <= pivot)
            low++;
        arr[high] = arr[low];
    }
    arr[low] = pivot;
    quickSort(arr,left,low-1);
    quickSort(arr, low+1, right);
}