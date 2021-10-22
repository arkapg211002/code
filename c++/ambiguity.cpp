#include <iostream>
using namespace std;
class Base1
{
    int a;

public:
    void input();
    void display();
};
void Base1::input()
{
    a = 10;
}
void Base1::display()
{
    cout << a << endl;
}
class Base2
{
public:
    void display()
    {
        cout << "hello world" << endl;
    }
};
class Derived : public Base1, public Base2
{
public:
    void greet()
    {
        Base2::display();
    }
};
int main()
{
    Base1 ob;
    ob.display();
    Base2 ob2;
    ob2.display();
    Derived d;
    d.greet();
    return 0;
}