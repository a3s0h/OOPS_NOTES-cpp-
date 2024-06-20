#include<bits/stdc++.h>
using namespace std;

// globally new ko overload krna mtlb globally uski functionaly alter krna 
// if kisi class ke andr overload kroge to uska mtlb hoga uss class ke new ki functionality change baaki uske bahar same rhegi 
// .. here we doing globally 
void* operator new(size_t size)          // void* is generic because we dont know wht type of memeory user want us to allocate 
{
    void* ptr = (int*)malloc(size);
    if (!ptr) {
        throw std::bad_alloc();
    }
    return ptr;
    return ptr;
}


int main()
{
    return 0;
}