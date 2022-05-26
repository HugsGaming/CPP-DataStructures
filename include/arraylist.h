//
// Created by Mark Joven Reyes on 5/26/2022.
//

#ifndef DATASTRUCTURES_ARRAYLIST_H
#define DATASTRUCTURES_ARRAYLIST_H

template<typename T>
class ArrayList
{
private:
    int count = 0;
    T *list;
    int max_size;
public:
    ArrayList();
    explicit ArrayList(int size);
    T get_value(int index);
    bool is_full();
    bool is_empty();
    void print_values();
    int get_count();
    int index_of(T data);
    void add(T data, int pos);
    void remove(int pos);
};

#include "../src/arraylist.cpp"
#endif //DATASTRUCTURES_ARRAYLIST_H
