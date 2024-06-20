#include<bits/stdc++.h>
using namespace std;

class complex1
{
    private:
        int a,b;
    
    public:
        int setData(int x)
        {
            a = x;
        }
        void showData()
        {
            cout<<"a is "<<a<<endl;
        }
        complex1 operator -()
        {
            complex1 temp;
            temp.a = -a;
        }
        
};

main()
{
    complex1 c1,c2,c3;
    c1.setData(3);
    c2.setData(2);
    c3 = -c1;
    c3.showData();

    return 0;
}
