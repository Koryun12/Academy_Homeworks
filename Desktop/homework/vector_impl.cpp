#include "vector_impl.h"

void Vector::reallocate(int new_capacity) {
	int* new_data = new int[m_capacity];
	for(int i = 0; i < m_size; i++){
		new_data[i] = m_data[i];
		m_capacity = new_capacity;
	}
	delete[] m_data;
	m_data = new_data;
}

Vector::Vector(const Vector& other){
	m_size = other.m_size;
	m_capacity = other.m_capacity;
	m_data = new int[m_capacity];
	for(int i = 0; i < m_size; i++){
		m_data[i] = other.m_data[i];
	}
}
int Vector::at(size_t index) const {
	if(index > m_size){
		std::cout << "Index Out Of Range!" << std::endl;
        	return -1;
	}
	return m_data[index];

}
void Vector::push_back(int value) {
	if(m_size == m_capacity){
		reallocate(m_capacity * 2);
	}
	if(m_size == 0){
		
		m_data = new int[m_capacity];
	}
	m_data[m_size] = value;
	m_size++;
}
void Vector::pop_back() {
	if(m_size == 0){
		std::cout << "Vector Is Empty!";
	}
	m_size--;
}
size_t Vector::get_size() const {
	return m_size;
}
size_t Vector::get_cap() const {
	return m_capacity;
}
void Vector::resize (size_t newSize) {
	if(newSize > m_capacity){
		reallocate(newSize);
	}
	m_size = newSize;
}
void Vector::reserve(size_t cap) {
	if(cap > m_capacity){
		reallocate(cap);
	}
}
int Vector::front () const {
	if(m_size == 0){
		std::cout << "Vector Is Empty!";
	}
	return m_data[0];
}
int Vector::back () const {
	if(m_size == 0){
		std::cout << "Vector Is Empty!";
	}
	return m_data[m_size - 1];
}
bool Vector::isEmpty() const {
	if(m_size == 0){
		return true;
	}
	return false;
}
void Vector::shrink_to_fit() {
	reallocate(m_size);
}
void Vector::insert (size_t index, int value) {
	if(index > m_size){
		std::cout << "Index Out Of Range!" << std::endl;
	}
	if(m_size == m_capacity){
		reallocate(m_capacity * 2);
	}
	for(int i = m_size; i > index; i--){
		m_data[i] = m_data[i - 1];
	}
	m_data[index] = value;
	m_size++;
}
void Vector::erase (size_t index) {
	if(index > m_size){
		std::cout << "Index Out Of Range!" << std::endl;
	}
	for(int i = index; i < m_size - 1; i++){
		m_data[i] = m_data[i + 1];
	}
	m_size--;
}
void Vector::clear () {
	delete[] m_data;
	m_data = nullptr;
	m_capacity = 0;
	m_size = 0;
}
