#include <iostream>
using namespace std;
int main()
{
    int x=10;
    try{
        throw x;
    }
    catch(char ch)
    {
        cout<<"exception caught"<<endl;
    }
    catch(...)
    {
        cout<<"default exception"<<endl;
    }return 0;
}