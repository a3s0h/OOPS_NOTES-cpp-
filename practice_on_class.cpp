#include<bits/stdc++.h>
using namespace std;

class hello1
{
    int a,b;
    public: 
        void setData(int x,int y)
        {
            a = x;
            b = y;
        }
        void showData();
};
void hello1::showData()
{
    cout<<"values are: "<<a<<b<<endl;
}

int main()
{
    hello1 op1;
    op1.setData(12,23);
    op1.showData();
    return 0;
}