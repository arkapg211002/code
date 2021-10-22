#include <iostream>
#include<list>
using namespace std;
int main()
    {
            list<int> l;
            //l.push_back(1);
            //l.push_back(4);
            //l.push_back(0);
            l.insert(l.begin(),6,100);
            //cout<<l.front();
            cout<<l.front();
            l.unique();
            
            for(auto it=l.begin();it!=l.end();it++)
            {
                cout<<*it<<" "<<endl;
            }
            return 0;

    }
