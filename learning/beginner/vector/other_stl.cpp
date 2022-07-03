#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

//https://www.cplusplus.com/reference/algorithm/find/ 

int main() {

    vector<int> vec { 1, 2, 3, 4, 5};
    vector<int> vec2 {1, 2, 3, 4};

    for (int i = 0; i < vec2.size(); i++)
    {
        vector<int>::iterator it = find(vec2.begin(), vec2.end(), vec[i]);
        if (it != vec2.end())
            cout << "element found in arr: " << *it << endl;
        else
            cout << "element " << vec[i] << " not found in vector" << endl;

    }
    return 0;
}


