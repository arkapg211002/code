#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int> p;
    p.push(1);p.push(7);p.push(3);
    cout<<p.top()<<endl;
    cout<<p.size()<<endl;
    while(!p.empty())
    {
        cout<<p.top()<<" ";
        p.pop();
    }
    return 0;
}