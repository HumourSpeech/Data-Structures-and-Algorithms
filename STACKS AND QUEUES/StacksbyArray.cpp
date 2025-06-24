#include <iostream>
using namespace std;

#define MAX 100 // Maximum size of the stack

class Stack{
    private:
        int arr[MAX];
        int top;

    public:
        Stack(){
            top = -1; // initialize top to -1 indicating stack is empty
        }

        void push(int x){
            if(isFull()){
                cout << "Stack Overflow" << endl;
                return;
            }
            arr[++top] = x; // increment top and add element
        }

        int pop(){
            if(isEmpty()){
                cout << "Stack Underflow" << endl;
                return -1;
            }
            return arr[top--]; // retrun top element and decrement top
        }

        int Top(){
            if(isEmpty()){
                cout << "Stack is empty" << endl;
                return -1;
            }
            return arr[top]; // return top element without removing it
        }


        int size(){
            return top+1; // return the number of elements in the stack
        }

        void display(){
            if(isEmpty()){
                cout << "Stack is empty" << endl;
                return;
            }
            cout << "Stack elements are: ";
            for(int i = 0; i<=top; i++){
                cout << arr[i] << " ";
            }
        }

        bool isEmpty(){
            return top == -1;
        }

        bool isFull(){
            return top == MAX  - 1;
        }
};

int main(){
    Stack s;
    s.push(6);
    s.push(3);
    s.push(7);
    s.display();
    cout << endl;
    cout << "Top of stack is before deleting any element " << s.Top() << endl;
    cout << "Size of stack before deleting any element " << s.size() << endl;
    cout << "The element deleted is " << s.pop() << endl;
    cout << "Size of stack after deleting an element " << s.size() << endl;
    cout << "Top of stack after deleting an element " << s.Top() << endl;
    return 0;
}