#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>> t;
    for(int m=0; m<t; m++)
    {
        long long num;
        cin >> num;
        bool out = false;
        for(int i=1; i<=num; i++)
        {
            if(num%i!=0)
            {
                cout << i-1 << endl;
                out = true;
                break;
            }
        }
        if(!out)
            cout << num << endl;
    }
    return 0;
}