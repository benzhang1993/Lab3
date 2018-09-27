//
// Created by benzh on 2018-09-27.
//

#ifndef LAB3_STACK_HPP
#define LAB3_STACK_HPP
#include <array>
#include <iostream>


constexpr int max_size = 10;

using namespace std;

/**
 * Stack structure with basic push and pop features, where first element in is last element out
 */
class Stack {
    array<int, max_size> list;
    int top_index;

public:
    /**
     * Sets top element index to -1 so it's invalid when stack is empty
     */
    Stack() {
        top_index = -1;
    }

    /**
     * Pushes element to top of the stack
     * int value: value to put on top of the stack
     * @return bool: true if element is successfully pushed onto Stack, false if Stack is full.
     */
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

    /**
     * Points the top index to the second top item.
     */
    void pop() {
        top_index--;
    }

    /**
     * Returns the value of the top element on the Stack
     * @return Value of the top element on the Stack
     */
    int top() {
        return list[top_index];
    }

    /**
     * Checks if Stack is empty
     * @return True if Stack is empty, false if otherwise.
     */
    bool empty() {
        if(top_index == -1) {
            return true;
        }
        else {
            return false;
        }
    }

    /**
     * Checks if Stack is full
     * @return True if Stack is full, false if otherwise.
     */
    bool full() {
        if(top_index == 9) {
            return true;
        }
        else {
            return false;
        }
    }

    /**
     * Prints the Stack out from bottom to top.
     */
    void print() {
        cout << "Stack: ";
        for (int i = 0; i <= top_index; i++) {
             cout << list[i] << " ";
        }
        cout << endl;
    }
};


#endif //LAB3_STACK_HPP
