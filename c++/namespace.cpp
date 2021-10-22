#include <iostream>
using namespace std;
namespace first
{
    int val = 50;
}
int val = 100;
int main()
{
    int val = 200;
    cout << val << endl
         << ::val << endl
         << first::val << endl;
    return 0;
}