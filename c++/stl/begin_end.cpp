#include <iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v{2,5,1,4};
    for(auto it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<endl;
    }
    return 0;
}