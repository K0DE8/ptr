#include <iostream>
using namespace std;
int main () {
    int a;
    cin >> a;
    int *x=&a;
    cout << *x<< endl<<x;
    return 0;
}