// author: gautam narayan

#include <bits/stdc++.h>
using namespace std;

int main() {

    int num_sects{}, max_jump{}, counter{};
    cin >> num_sects >> max_jump;
    vector<char> arr{};

    for (int i = 0; i < num_sects; i++) {
        char terrain;
        cin >> terrain;
        arr.push_back(terrain);
    }        

    for (int i = 0; i < arr.size(); i++) {
        if (counter >= max_jump) {
            cout << "NO";
            break;
        }
        else if (arr[i] == '#')
            counter++;
        else if (arr[i] == '.')
            counter = 0;
    }

    if (counter < max_jump)
        cout << "YES";

    return 0;
}
