#include <iostream>
using namespace std;

void fn();
void take(int n);
void print(int n);

int main(){
    // void functions

    fn(); // call void func

    print(5);
    take(99);

}

void fn(){
    cout << "void fn()\n"; 
   //  return 0; // will give error
}

void print(int n){
    cout << "print() :" << n << endl;
}

// using function in function
void take(int n){
    print(n); 
}