#include <iostream>
using namespace std;

int main(){
    int a = 2;
    int* b = &a;
    *b = 4;

    cout<<*b<<endl;
    cout<<b<<endl;
    cout<<&a<<endl;
    cout<<a;
}