//
//  QuickSort.h
//  SortTest
//
//  Created by 王曙光 on 23/8/15.
//  Copyright (c) 2015 Alex. All rights reserved.
//

#ifndef __SortTest__QuickSort__
#define __SortTest__QuickSort__

#include <stdio.h>
#include "Sort.h"

class CQuickSort : public CSort
{
public:
    CQuickSort();
    virtual ~CQuickSort();
    virtual void Sort(int* arr, const int size);
    void quickSort(int* arr, const int left, const int right);
};

#endif /* defined(__SortTest__QuickSort__) */
