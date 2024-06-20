// frnd function  doing operation between private members of 2 classes

#include<bits/stdc++.h>
using namespace std;

class B;          // pehele hi declare krdiya ki koi class b ha aage kuki jo pehele fun function bnega usko bhi to pata chale ki class b bhi ha koi nhi to ek fun function to b se pehele hi declare krr diya ha na . A class ke andr
class A
{
 private:
    int a;
public: 
    void setData(int x)
    {
        a = x;
    }
    friend void fun(A,B);
};
class B
{
 private:
    int b;
public: 
    void setData(int y)
    {
        b = y;
    }
    friend void fun(A,B);
};
void fun(A c1,B c2)
{
    cout<<"The sum of two number is: "<<c1.a+c2.b<<endl;
}
main()
{
    A obj1;
    B obj2;
    obj1.setData(2);
    obj2.setData(4);
    fun(obj1,obj2);
    return 0;
}