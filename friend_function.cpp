// it is frnd of member function
// mtlb class keliye ye ha to non member function but ye class ka frnd ha jisse ki ise aise kayi adhikar mil jaate ha jisse ye member functions ko kbhi bhi use krr paye
// ye class ke bahar define krte ha   
//it can access private members also of a class 
// but note it can't directly access the member of a class unlike mebers of a class

// ** frnd function kitti bhi class ka frnd ho skta ha
// ye member function nhi ha therefore ise khi bhi declare kro (i.e.,  inside private ya public ya protected )

#include<bits/stdc++.h>
using namespace std;

class Myclass
{
    private:
        int x,y;
    public:
        void setData(int a,int b)
        {
            x = a; y = b;
        }
        void showData()
        {
            cout<<"a is "<<x<<endl;
        }
        friend void fun(Myclass);
        

};
void fun(Myclass c)
{
    cout<<"The sum of two number is: "<<c.x+c.y<<endl;
}
main()
{
    Myclass obj1;
    obj1.setData(1,2);

    // obj1.fun(obj2);        this can't be used cuz class ka member function ko hi aise krte ha baaki normal function ko to simply bhi kr skte ha
    // therefore 

    fun(obj1);
    return 0;
}