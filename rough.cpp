#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    int &ref = x;
    cout << x << endl;
    cout << ref;
    return 0;
}