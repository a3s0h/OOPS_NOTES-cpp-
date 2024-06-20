#include<bits/stdc++.h>
using namespace std;
class hello;
class calculate
{
    public:
        int sumOfNumbers(hello,hello);
};
class hello
{
    int a,b;
    
    public: 
        void setData(int x , int y)
        {
            a = x;
            b = y;
        }
    friend int calculate::sumOfNumbers(hello,hello);

    
};

int calculate::sumOfNumbers(hello c1, hello c2)
{
    hello temp;
    temp.a = c1.a + c2.a;
    temp.b = c1.b + c2.b;
    cout<<temp.a<<" : sum of real part \n"<<temp.b<<" : sum of imaginary part "<<endl;
    return 0;
}


int main()
{
    hello op1;
    hello op2;
    op1.setData(1,3);
    op2.setData(5,4);
    calculate calc;
    calc.sumOfNumbers(op1,op2);
    return 0;
}