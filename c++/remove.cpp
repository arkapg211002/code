#include <bits/stdc++.h>
using namespace std;
string remove(string s)
{
    stringstream ss(s);
    string tmp,str=" ";
    while(getline(ss,tmp,','))
    {
        str=str+" "+tmp;
    }return str;
}
int main()
{
    string str="geeks,for,geeks";
    cout<<remove(str)<<endl;
    return 0;

}