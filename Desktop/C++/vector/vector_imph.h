Vector (const vector);
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
  delate[] data;
  }
};
#endif
