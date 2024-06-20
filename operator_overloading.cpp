#include<bits/stdc++.h>
using namespace std;


class complex1
{
    private:
        int a,b;
    public: 
        void setData(int x,int y)
        {
            a = x; b = y;
        }
        void showData()
        {
            cout<<"a "<<a<<" \nb "<<b<<endl;
        }
        complex1 operator +(complex1 c)
        {
            complex1 temp;
            temp.a = a + c.a;
            temp.b = b + c.b;
            return temp;
        }

};

main()
{
    complex1 c1,c2,c3;
    c1.setData(1,3);
    c2.setData(5,7);
    c3 = c1+c2;
    c3.showData();
}