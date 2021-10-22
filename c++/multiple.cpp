#include <iostream>
using namespace std;
class Base1
{
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
    }
    void printdata()
    {
        cout << data1 << endl;
    }
};
class Base2
{
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
    }
    void printdata2()
    {
        cout << data2 << endl;
    }
};
class Derived : public Base2, public Base1
{
    int d1, d2;

public:
    Derived(int a, int b, int c, int d) : Base2(b), Base1(a)
    {
        d1 = c;
        d2 = d;
    }
    void display()
    {
        cout << d1 << endl
             << d2 << endl;
    }
};
int main()
{
    Derived ob;
    ob.printdata();
    ob.printdata2();
    ob.display();
    return 0;
}
