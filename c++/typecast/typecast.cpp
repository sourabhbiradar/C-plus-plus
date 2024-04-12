#include <iostream>
using namespace std;

int main(){
    // type casting
    cout << "\ttype casting\n";

    int x =5 ;
    cout << x/2 << endl; // 2 as x is int
    cout << (float)x/2 << endl; // 2.5 as x type casted to float

    char chr = 'u';
    cout << "chr :" << chr << endl; // u
    cout << "ASCII of 'u' :" << (int)chr << endl; // 117

    cout << "ASCII to char :" << char(38) << endl; // &
}