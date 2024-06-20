#include<iostream>
using namespace std;
class hello2;
class hello1
{
    int a;
    public:
        void setData(int x)
        {
            a = x;
        }
        friend int operator *(hello1,hello1);
};
// class hello2
// {
//     int b;
//     public:
//         void setData(int y)
//         {
//             b = y;
//         }
//         friend void operator *(hello1,hello2);
// };

int operator *(hello1 c,hello1 d) 
{
    // printf("The multiplication is %d",c.a * d.a);
    return c.a * d.a ;
}

int main()
{
    hello1 op1;
    op1.setData(12);
    hello1 op2;
    op2.setData(12);

    // both are right below approaches 
    cout << op1 * op2;
    // cout << operator*(op1,op2);
    return 0;
}