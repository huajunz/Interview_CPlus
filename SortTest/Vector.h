//
//  Vector.h
//  SortTest
//
//  Created by 王曙光 on 24/8/15.
//  Copyright (c) 2015 Alex. All rights reserved.
//
// reference http://www.faceye.net/search/133597.html
// reference http://www.cppblog.com/lwch/archive/2012/06/17/179179.html
// reference http://blog.csdn.net/silangquan/article/details/19151879

#ifndef SortTest_Vector_h
#define SortTest_Vector_h

#include <stddef.h>
#include <algorithm>
#include <memory>

template <typename T>
class Vector
{
public:
    typedef T value_type;
    typedef T* iterator;
    typedef const T *const_iterator;
//  typedef T& reference;
//  typedef const T& const_reference;
    typedef size_t size_type;
//  typedef ptrdiff_t difference_type;
//  typedef reverse_iterator<iterator, value_type, size_type,difference_type> reverse_iterator;
//  typedef reverse_iterator<const_iterator, value_type, size_type, difference_type> const_reverse_iterator;
    
    
    //构造析构函数
    Vector();
    explicit Vector(size_type n, const T );
    Vector(const Vector &v);
    ~Vector();
    
    //运算符重载
    Vector &operator = (const Vector &other);
    T &operator[] (size_type i);
    const T &operator[] (size_type i) const { return data_[i]; }
    
    void push_back (const T &t);
    size_type size() const  { return avail_ - data_; }
    
private:

    
    void create();
    void create(size_type, const T &);
    void create(const_iterator, const_iterator);
    
    void uncreate();
    
    void grow();
    void uncheckedAppend(const T &);

protected:
    iterator data_; //首元素
    iterator avail_; //末尾元素的下一个位置
    //这里为什么是最后一个的后一个位置，是因为stl从begin 到 end 总是一个前闭后开的形式形如[begin, end)这样可以使代码更简洁
    iterator limit_; //内存的后面一个位置
    
    typedef Vector<T> self;
    std::allocator<T> alloc_; //内存分配器
};




#endif
