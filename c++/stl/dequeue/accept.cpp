#include <iostream>
#include <deque>
#include <vector>
using namespace std;
int main()

{
    deque<int> d = {1, 2, 3, 4};
    vector<int> v = {2, 3, 4};
    deque<int>::iterator it = d.begin();
    it = it + 1;
    it = d.insert(it, 10);
    for (auto it = d.begin(); it != d.end(); it++)
    {
        cout << *it << " " ;
    }
    cout << endl;
    d.insert(d.begin(), 5, 10);
    for (auto it = d.begin(); it != d.end(); it++)
    {
        cout << *it << " " ;
    }
    cout << endl;
    d.insert(d.begin(), v.begin(), v.end());
    for (auto it = d.begin(); it != d.end(); it++)
    {
        cout << *it << " " ;
    }
    cout << endl;
    return 0;
}
