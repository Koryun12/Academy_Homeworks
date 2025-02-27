#ifndef VECTOR_IMPL_H
#define VECTOR_IMPL_H

#include <iostream>

class Vector 
{
  private:
    int* m_data;
    size_t m_size;
    size_t m_capacity;
    void reallocate(int new_capacity);

    public:
    Vector() : m_size(0), m_capacity(0), m_data(nullptr) {}
    Vector(size_t size) : m_size(0), m_capacity(size) {
      m_data = new int[size];
    }

    Vector (const Vector& other);
    int at(size_t index) const;
    void push_back(int value);
    void pop_back();
    size_t get_size() const;
    size_t get_cap() const;
    void resize (size_t newSize);
    void reserve(size_t cap);
    int front () const;
    int back () const;
    bool isEmpty() const;
    void shrink_to_fit();
    void insert (size_t index, int value);
    void erase (size_t index);
    void clear ();
    ~Vector (){
      delete[] m_data;
    }
};

#endif
