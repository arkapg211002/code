#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v.assign(4, 100);
    cout << "vector size" << v.size() << " " << v.capacity() << endl;
    //v.clear();
    v.erase(v.begin(),v.begin()+1);
    v.emplace(v.begin(),15);
    int *ptr = v.data();
    cout << *ptr << endl;
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }cout<<endl<<endl;
    v.insert(v.end(),v.begin(),v.end());
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    return 0;
}
