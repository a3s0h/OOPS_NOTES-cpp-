/*
Write a C++ program for overloading > and < operator for two strings by using operator 
overloading. Simply compare two strings by their length only. Handle 0, 1 and -1 as return 
values for your overloading.
*/
#include<bits/stdc++.h>
using namespace std;

class opOver
{
    private:
        
        string s1[50];
        string s2[50];
    public:
        opOver(string x[],string y[])
        {
            strcpy(this->s1 , x);
            strcpy(this->s2 , y);
        }
        string getS1()
        {
            return s1;
        }
        string getS2()
        {
            return s2;
        }

};

int main()
{
    string s1[50] = "Hello";
    string s2[50] = "Hello My frnd";
    opOver o1(s1,s2);
    
}