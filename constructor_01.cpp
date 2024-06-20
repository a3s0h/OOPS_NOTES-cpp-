#include<bits/stdc++.h>
using namespace std;

class Myclass
{
    private:
        int a;
    public:
        Myclass()
        {
            cout<<"Hello World"<<endl;
        }
};
main()
{
    Myclass myclass;
    cout<<myclass.Myclass()<<endl;        // error ,cuz object ban ne tk hi kaam hota ha default constructor ka uske baad wo nhi rehete ....so sad..!! 
    return 0;
}