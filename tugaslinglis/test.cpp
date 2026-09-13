#include <iostream>
using namespace std;

int main() {
    int a = 7;
    int *pointera = &a;
    cout << a << endl;
    cout << pointera << endl;
    (*pointera)++;
    cout << a <<endl;
    return 0;
}
