#include<bits/stdc++.h>
using namespace std;
bool even(int v)
{
    return (v%2)==0;
}
int main()
{
    forward_list<int > f={1,2,3,4,5};
    auto it=f.begin();
    //f.assign(5,10);//removes the previous elements
    f.insert_after(it,f.begin(),f.end());
    f.push_front(6);
    for(int& a:f)
    {
        cout <<a<<" ";
    }
    f.remove_if(even);
    cout<<endl;
    for(int& a:f)
    {
        cout <<a<<" ";
    }
    return 0;
}