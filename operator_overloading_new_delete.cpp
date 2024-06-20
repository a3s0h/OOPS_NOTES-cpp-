#include <iostream>
using namespace std;

// Interface IShape
class IShape {
public:
    virtual void draw() = 0;    // Pure virtual function
    virtual void resize() = 0;  // Another pure virtual function
};

// Derived class Circle implementing the interface
class Circle : public IShape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }

    void resize() override {
        cout << "Resizing Circle" << endl;
    }
};

// Derived class Square implementing the interface
class Square : public IShape {
public:
    void draw() override {
        cout << "Drawing Square" << endl;
    }

    void resize() override {
        cout << "Resizing Square" << endl;
    }
};

int main() {
    IShape* shape1 = new Circle();           // shape1 is a pointer of type IShape and there's an object created in heap memeory of type circle 
                                             // so this shape1 is pointing to that object created in the heap memeory 
                                             // this will work if you do like this : Circle* shape1 = new Circle() , then the pointer shape1 is of type Circle this will work 
                                             // but with this you cannot access the methods/functions of parent/base class 
                                             // thats why making pointer of type parent class is fruitfull because you can now access methods of both parent and child 
    IShape* shape2 = new Square();

    shape1->draw();   // Output: Drawing Circle
    shape1->resize(); // Output: Resizing Circle

    shape2->draw();   // Output: Drawing Square
    shape2->resize(); // Output: Resizing Square

    delete shape1;
    delete shape2;

    return 0;
}
