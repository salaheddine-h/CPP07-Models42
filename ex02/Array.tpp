#include "Array.hpp"

template<typename T>
Array<T>::Array() : data(NULL), _size(0)
{
}

template<typename T>
Array<T>::Array(unsigned int n) : data(new T[n]()), _size(n)
{
}


template <typename T>
Array<T>::~Array()
{
    delete[] data;
}

template<typename T>
unsigned int Array<T>::size() const
{
    return(_size);
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T> &other)
{
    if (this == &other)
        return *this;

    delete[] data;

    _size = other._size;
    data = new T[_size];

    for (unsigned int i = 0; i < _size; i++)
        data[i] = other.data[i];

    return *this;
}

template<typename T>
Array<T>::Array(const Array &other)
{
    _size = other._size;
    data = new T[_size];
    for (unsigned int i = 0; i < _size; i++)
        data[i] = other.data[i];
}

template <typename T>
T& Array<T>::operator[](unsigned int index)
{
    if (index >= _size)
        throw std::exception();
    return data[index];
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const
{
    if (index >= _size)
        throw std::exception();
    return data[index];
}

























// template<typename T>
// Array<T>::Array(const Array& other) : _data(NULL), _size(0) {
//     if (other._size) {
//         _data = new T[other._size];
//         for (unsigned int i = 0; i < other._size; ++i)
//             _data[i] = other._data[i];
//     }
//     _size = other._size;
// }

// template<typename T>
// Array<T>& Array<T>::operator=(const Array& other) {
//     if (this != &other) {
//         delete[] _data;
//         _data = NULL;
//         _size = 0;
//         if (other._size) {
//             _data = new T[other._size];
//             for (unsigned int i = 0; i < other._size; ++i)
//                 _data[i] = other._data[i];
//             _size = other._size;
//         }
//     }
//     return *this;
// }

// template <typename T>
// Array<T>::~Array() {
//     delete[] _data;
// }

// template<typename T>
// T& Array<T>::operator[](unsigned int idx) {
//     if(idx >= _size)
//         throw std::out_of_range("Index out of bounds");
//     return _data[idx];
// }

// template<typename T>
// const T& Array<T>::operator[](unsigned int idx) const {
//     if(idx >= _size)
//         throw std::out_of_range("Index out of bounds");
//     return _data[idx];
// }

// template<typename T>
// unsigned int Array<T>::size() const {
//     return _size;
// }