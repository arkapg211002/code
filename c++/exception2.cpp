#include <iostream>
using namespace std;
class a
{   public:
    void getdata();
    
};
class b:public a{};
int main()
{
    b d;
    try{
        throw d;
    }
    catch(a c)
    {
        cout<<"base exception"<<endl;
    }
    catch(b d)
    {
        cout<<"derived class exception"<<endl;

    }return 0;
}