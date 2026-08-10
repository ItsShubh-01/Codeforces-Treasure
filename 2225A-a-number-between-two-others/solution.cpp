#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        long long x, y;
        cin >> x >> y;

        long long div = y/x;
        bool exist = false;
        for(int i=2; i<div; i++)
        {
            if(div%i!=0){
                exist = true;
                break;
            }
        }
        if(exist) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}