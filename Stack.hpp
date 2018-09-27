//
// Created by benzh on 2018-09-27.
//

#ifndef LAB3_STACK_HPP
#define LAB3_STACK_HPP
#include <array>
#include <iostream>

constexpr int max_size = 10;

using namespace std;

class Stack {
    array<int, max_size> list;
    int top_index;

public:
    Stack() {
        top_index = -1;
    }

    bool push(int value) {
        if(top_index == 9){
            return false;
        }
        else {
            top_index++;
            list[top_index] = value;
            return true;
        }
    }

    void pop() {
        top_index--;
    }

    int top() {
        return list[top_index];
    }

    bool empty() {
        if(top_index == -1) {
            return true;
        }
        else {
            return false;
        }
    }

    bool full() {
        if(top_index == 9) {
            return true;
        }
        else {
            return false;
        }
    }

    void print() {
        cout << "Stack: ";
        for (int i = 0; i <= top_index; i++) {
             cout << list[i] << " ";
        }
        cout << endl;
    }
};


#endif //LAB3_STACK_HPP
