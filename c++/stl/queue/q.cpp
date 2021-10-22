#include <iostream>
#include<queue>
using namespace std;
int main()
{
    queue <char> q1,q2;
    int v=97;
    for(int i=0;i<5;i++)
    {
        q1.push((char)v);
        v++;
    }
    cout<< q1.front()<<endl;
    for(int i=0;i<5;i++)
    {
        q2.push((char)v);
        v++;
    }cout<<q2.front()<<endl;
    q1.swap(q2);
    while(!q1.empty())
    {
        cout<<q1.front()<<" ";q1.pop();

    }
    return 0;
}
    

