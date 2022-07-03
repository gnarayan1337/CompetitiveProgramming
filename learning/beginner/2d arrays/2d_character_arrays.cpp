#include <iostream>
using namespace std;
//represent an array of strings as a 2D Character Array

int main() {

    //number of rows is optional if youre giving an initialization list like this
    char numbers[][10] = {
        "one",
        "two",
        "three",
        "forty",
        "eight",
        "hundred",
    };
    int i = 3;
    cout << numbers[i] << endl; //forty


    return 0;
}

