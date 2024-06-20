#include <iostream>

class complex1
{
private:
    int a;

public:
    void setData(int x)
    {
        a = x;
    }
    void showData()
    {
        std::cout << "a after post increment is: " << a << std::endl;
    }
    complex1 operator++()
    {
        complex1 temp;
        temp.a = ++a;
        return temp;
    }
    complex1 operator++(int)
    {
        complex1 temp;
        temp.a = a++;
        return temp;
    }

    friend std::ostream &operator<<(std::ostream &os, const complex1 &cp);
};

std::ostream &operator<<(std::ostream &os, const complex1 &cp)
{
    os << "Value is: " << cp.a << std::endl;
    return os;
}

int main()
{
    complex1 c1, c3;
    c1.setData(3);
    c1.showData();
    c3 = ++c1;
    c3.showData();
    std::cout << c3;

    return 0;
}
