#include<bits/stdc++.h>
using namespace std;

// globally new ko overload krna mtlb globally uski functionaly alter krna 
// if kisi class ke andr overload kroge to uska mtlb hoga uss class ke new ki functionality change baaki uske bahar same rhegi 
// .. here we doing globally 
void* operator new(size_t size)          // void* is generic because we dont know wht type of memeory user want us to allocate 
{
    cout<<"memory is being allocated "<<endl;
    void* ptr = (int*)malloc(size);
    if (!ptr) {
        throw std::bad_alloc();
    }
    return ptr;
}

void operator delete(void* ptr)
{
    free(ptr) ;           // this is the way we delete or free up space allocated using malloc/calloc
}

class temp 
{
    private : int data ;
    public : 
        temp(): data(0) {
            cout<<"object created"<<endl;
        }

        ~temp()
        {
            cout<<"destructor called "<<endl;
        }
};


int main()
{
    try {
        // Allocating object using overloaded new operator
        temp* obj = new temp;
        // std::cout << "Object created with a = " << obj->a << ", b = " << obj->b << std::endl;
        // Deallocating object using overloaded delete operator
        delete obj;
    } catch (const std::bad_alloc& e) {
        std::cerr << "Allocation failed: " << e.what() << std::endl;
    }
    return 0;
}
