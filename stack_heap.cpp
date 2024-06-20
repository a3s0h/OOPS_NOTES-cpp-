#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of items : "<<endl;
    cin>>n;

    int *item = new int[n];     // this is dma and it is formed in heap
    cout<<"Enter the Items are: "<<endl;
    for(int i=0;i<n;++i)
    {
        cin>> *(item+i);
    }
    cout<<"Items are: "<<endl;
    for(int i=0;i<n;++i)
    {
        cout<< *(item+i)<<endl;
    }

    delete item;     // item wala opinter wala delete bhi krna pdega na heap wala *item isliye nhi kiya kuki items thodi na delete krne ha ....hahahaha!!
    return 0;
}