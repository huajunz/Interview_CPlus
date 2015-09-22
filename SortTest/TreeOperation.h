//  二叉树操作基类
//  TreeOperation.h
//  SortTest
//
//  Created by 王曙光 on 24/8/15.
//  Copyright (c) 2015 Alex. All rights reserved.
//

#ifndef __SortTest__TreeOperation__
#define __SortTest__TreeOperation__

#include <stdio.h>

enum Color{red, black};

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    Color color;
    TreeNode(int x) : val(x), left(nullptr),right(nullptr) {}
};

class CTreeOperation
{
public:
    CTreeOperation();
    virtual ~CTreeOperation();
    virtual void treeTravelsal() = 0;
    
private:
    TreeNode* root;
    bool is_empty = true;
};

#endif /* defined(__SortTest__TreeOperation__) */
