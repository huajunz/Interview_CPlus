//
//  Sort.h
//  SortTest
//
//  Created by 王曙光 on 23/8/15.
//  Copyright (c) 2015 Alex. All rights reserved.
//

#ifndef SortTest_Sort_h
#define SortTest_Sort_h


class CSort
{
public:
    CSort();
    virtual ~CSort();
    
    virtual void Sort(int* arr, const int size) = 0;
};

#endif
