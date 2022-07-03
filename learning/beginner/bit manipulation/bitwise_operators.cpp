#include <iostream>
using namespace std;

// The & (bitwise AND) in C or C++ takes two numbers as operands and does AND on every bit of two numbers. The result of AND is 1 only if both bits are 1.  
// The | (bitwise OR) in C or C++ takes two numbers as operands and does OR on every bit of two numbers. The result of OR is 1 if any of the two bits is 1. 
// The ^ (bitwise XOR) in C or C++ takes two numbers as operands and does XOR on every bit of two numbers. The result of XOR is 1 if the two bits are different. 
// The << (left shift) in C or C++ takes two numbers, left shifts the bits of the first operand, the second operand decides the number of places to shift. 
// The >> (right shift) in C or C++ takes two numbers, right shifts the bits of the first operand, the second operand decides the number of places to shift. 
// The ~ (bitwise NOT) in C or C++ takes one number and inverts all bits of it. 

// the left and right shift operators are equivalent to multiplication/division by 2 respectively

int main() {
    // a = 5(00000101), b = 7(00000111)
    int a = 5, b = 9;

    /*
       00000101
     & 00000111
    -----------
       00000101
    */

    // The result is 00000101
    cout<<"a = " << a <<","<< " b = " << b <<endl;
    cout << "a & b = " << (a & b) << endl;

    /*
       00000101
     | 00000111
    -----------
       00000111
    */

    // The result is 00000111
    cout << "a | b = " << (a | b) << endl;
  
    /*
       00000101
     ^ 00000111
    -----------
       00000010
    */
       
    // The result is 000000010
    cout << "a ^ b = " << (a ^ b) << endl;

    /*
       00000101
     ~ 
    -----------
       11111010
    */

    // The result is 11111010
    cout << "~a = " << (~a) << endl;

    /*
    << 00000101
    -----------
       00001010
    */

    // The result is 00001010 - multiplying by 2^(number you shifted by)
    cout<<"a << 1" <<" = "<< (a << 1) <<endl;

    /*
    >> 00000101
    -----------
       00000010
    */

    // The result is 00000010 - divides by 2^(number you shifted by)
    cout<<"a >> 1 "<<"= " << (a >> 1 )<<endl;
  
    return 0;
}
