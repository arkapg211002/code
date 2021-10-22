#include <bits/stdc++.h>
using namespace std;

int main()
{
    array<int, 6> a;
    array<int, 5> a2;
    for (int i = 0; i < 6; i++)
    {
        cin >> a[i];
    }
    cout << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << a[i];
    }
    a2.fill(4) ;
    for (int i = 0; i < 5; i++)
    {
        cout << a2[i] << " ";
    }
    return 0;
}