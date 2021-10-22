#include<iostream>
using namespace std;
int main()
{
    int a,b,s=0;
    cin>>a>>b;
    int* arr[a];
    while(a--)
    {
        int n;cin>>n;
         arr[s]=new int[n];
         for(int i=0;i<n;i++)
         cin>>arr[s][i];
         cout<<endl;s++;
    }
    while(b--)
    {
        int x,y;
        cin>>x>>y;
        cout<<arr[x][y]<<endl;
    }
    return 0;
}