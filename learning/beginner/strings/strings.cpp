#include <iostream>
#include <string>

using namespace std;


int main() {

    string first_name;
    cout << "Enter your first name: ";
    getline(cin, first_name);

    //legnth function
    int length = first_name.length();    

    if (length >= 12) 
        cout << "Your name can't be over 12 characters long";
    else
        cout << "Welcome " << first_name;

    //string.empty() function

    if (first_name.empty())
        cout << "You didn't enter a name! >:( ";
    else
        cout << "Welcome " << first_name;
    
    //string.clear() function
    cout << first_name;
    first_name.clear();
    cout << "Your name has been cleared." << endl;

    //string1.append(string2)
    string user_name;
    cout << "Enter your username: ";
    getline(cin, user_name);

    string email = user_name.append("@gmail.com");

    //string.at(int x)
    first_name = "hello";
    char letter1 = first_name.at(0);
    cout << "Your first initial is " << letter1 << ".";



    return 0;
}
