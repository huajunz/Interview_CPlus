//
//  BubbleSort.h
//  SortTest
//
//  Created by 王曙光 on 23/8/15.
//  Copyright (c) 2015 Alex. All rights reserved.
//

#ifndef SortTest_BubbleSort_h
#define SortTest_BubbleSort_h

#include "Sort.h"

class CBubbleSort : public CSort
{
public:
    CBubbleSort();
    virtual ~CBubbleSort();
    
    virtual void Sort(int* arr, const int size);
    
};


#endif
