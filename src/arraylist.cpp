//
// Created by Mark Joven Reyes on 5/26/2022.
//
#include "arraylist.h"

template<typename T>
ArrayList<T>::ArrayList() {
    max_size = 1000;
    list = new T[max_size];
}

template<typename T>
ArrayList<T>::ArrayList(int size) {
    max_size = size;
    list = new T[max_size];
}

template<typename T>
T ArrayList<T>::get_value(int index) {
    return list[index];
}
