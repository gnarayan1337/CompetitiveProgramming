#include <iostream>
using namespace std;

int recursive_sum(int m, int n) {
    //base case - breaks recursion so that we do not end up with an infinite recursion
    if(m == n)
        return m;
    //recursive case
    return m + recursive_sum(m + 1, n); 
}

/* first we check is m == n (2 == 4) and in this case it's not
so we return (m + recursive_sum(m + 1, n). then we go to the base case and check is 3 == 4, no it is not so we go back to recursive case
now current value of m is 3 so 2+(3+()) now m is 4
is n == m and the answer is yes so we return the value of m which is 4
2+(3+(4))

now we go backwards
2+(3+(4))
2+(3+4)
2+(7)
9 is the result of our recursive sum function
*/

//sum numbers between m and n
int main() {

    int m = 2, n = 4;
    cout << "Sum = " << recursive_sum(m, n);

    return 0;
}
