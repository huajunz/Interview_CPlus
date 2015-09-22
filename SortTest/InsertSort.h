//
//  InsertSort.h
//  SortTest
//
//  Created by 王曙光 on 23/8/15.
//  Copyright (c) 2015 Alex. All rights reserved.
//

#ifndef __SortTest__InsertSort__
#define __SortTest__InsertSort__

#include <stdio.h>
#include "Sort.h"

class CInsertSort : public CSort
{
public:
    CInsertSort();
    virtual ~CInsertSort();
    //CInsertSort(){}; 如果这样写在cpp中就不应该定义构造函数了，出现重构造错误
    virtual void Sort(int* arr, const int size);
    void directInsertSort(int* arr,const int size);
    void shellInsertSort(int* arr, const int size);
};



#endif /* defined(__SortTest__InsertSort__) */
