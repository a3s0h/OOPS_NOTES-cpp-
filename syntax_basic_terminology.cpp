#include<bits/stdc++.h>
using namespace std;

class MyFirstClass
{
    private: 
        int a;
        int b;
    public:
        int add()
        {
            int sum = a+b;
            return sum;
        }
        int getA()
        {
            return a;
        }
        int getB()
        {
            return b;
        }
        void setValue(int x,int y)
        {
            this->a = x;
            this->b = y;
        }
};

main()
{
    MyFirstClass obj1;
    obj1.setValue(12,12);
    cout<<"sum of 2 nubers is : "<<obj1.add()<<endl;
    cout<<"first nubers is : "<<obj1.getA()<<endl;
    cout<<"second nubers is : "<<obj1.getB()<<endl;
    return 0;
}