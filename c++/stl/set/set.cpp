#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> s={9,2,3,6,5};
    for(auto it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}