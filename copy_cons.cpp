#include<bits/stdc++.h>
using namespace std;

class Myclass
{
    private: 
        int a;
        int b;

    public:
        Myclass(int x,int y)
        {
            a = x;b = y;
        }
        Myclass(int x)
        {
            a = x;
        }
        Myclass(Myclass &obj)   // &d is the reference of obj
        {
            a = obj.a;
            b = obj.b;
        }
        
};

main()
{
    Myclass obj(12,13),obj1(12),obj5();
    Myclass obj3 = obj;
    return 0;
}