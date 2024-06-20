#include<bits/stdc++.h>
using namespace std;

class newConst
{
    private:
        int a,b;
    public:
        newConst(int x,int y)
        {
            a = x;
            b = y;
        }
        int getA()
        {
            return a;
        }
        int getB()
        {
            return b;
        }
        newConst(newConst &d)
        {
            a= d.a;
            b = d.b;
        }
        void display()
        {
            cout<<"The value of a: "<<a<<" and b is : "<<b<<endl;
        }

};
int main()
{
    newConst n1(3,4);
    
    newConst n2 = n1;
    n1.display();
    n2.display();
    return 0;
}