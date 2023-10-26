#include <iostream>
using namespace std;

class stack{
    private:
        int size;
        int top;
        int *arr;
    
    public:
        stack(int size){
            this -> size = size;
            top = -1;
            arr = new int[size];
        }

        void push(int num);
        void pop();
        int peek();
        bool isEmpty();
        bool isFull();
};

void stack::push(int num){
    if(top < size - 1){
        top  ++;
        arr[top] = num;
    }
    else{
        cout << "Stack Overflow!" << endl;
    }
}

void stack::pop(){
    if (top > -1){
        top--;
    }
    else{
        cout << "Stack Underflow!" << endl;
    }
}

int stack::peek(){
    if (top > -1){
        return arr[top];
    }
    else{
        cout << "stack empty" << endl;
        return -1;
    }
}

bool stack::isEmpty(){
    if (top == -1){
        return true;
    }
    else{
        return false;
    }
}

bool stack::isFull(){
    if (top == size - 1){
        return true;
    }
    else{
        return false;
    }

}

int main(){

    return 0;
}


















