#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int a;cin>>a;
        v.push_back(a);
    }  
    int b;cin>>b;
    v.erase(v.begin()+(b-1));
    int d,c;cin>>d>>c;
    v.erase(v.begin()+(d-1),v.begin()+(c-1));
    cout<<v.size();
    for(auto it =v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}