#include <bits/stdc++.h>
using namespace std;

class car
{
private:
    int tyres;
    int km;

public:
    car(int x, int y)
    {
        tyres = x;
        km = y;
    }
    int getx(int x) { return x; }
    int gety(int y) { return y; }
    void showd()
    {
        cout << "No of tyres are: " << tyres << " and kilo meter : " << km << endl;
    }
};

int main()
{
    car c1(4, 12);
    c1.showd();
    return 0;
}