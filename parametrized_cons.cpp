#include<bits/stdc++.h>
using namespace std;

class Myclass
{
    private:
        int a;
        int b;
    public:
        Myclass(int x,int y)       // importat ***  we can also use set meathod to give value ...so why this contructor ...?  this is because this const. is initializing value to the private members but by set meathod we can change the value whenever we want
        {
            a = x;
            b = y;
            // cout<<"The value of first number is: "<<x<<endl;
            // cout<<"The value of second number is: "<<y<<endl;
            // cout<<"The value of sum of two numbers is: "<<x+y<<endl;
        }
        int getA()
        {
            return a;
        }
        int getB()
        {
            return b;
        }
        
};

main()
{
    Myclass obj1(10,20);      // isi time pe isliye di kuki constructor sirf tbhi call hota ha jb object bnta ha uske baad uski koi value nhi reheti ... really sad :(
    
    //this is how we get value by para. const. 
    cout<<"first number: "<<obj1.getA()<<"\nsecond number: "<<obj1.getB()<<endl;
    return 0;
}