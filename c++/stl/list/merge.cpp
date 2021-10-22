#include <iostream>
#include <list>
using namespace std;
/*bool compare(int a, int b)
{
    return a < b;
}*/
int main(

)
{
    list<int> l1 = {1, 4, 6, 2, 8};
    list<int> l2 = {3, 8, 9, 2};
    l1.merge(l2);
    l1.sort();
    for (auto it = l1.begin(); it != l1.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    l1.unique();
    for (auto it = l1.begin(); it != l1.end(); it++)
    {
        cout << *it << " ";
    }
    return 0;
}