#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    for(int test=0; test<t; test++)
    {
        int n,k;
        cin >> n >> k;

        bool gotk = false;
        for(int i=0; i<n; i++)
        {
            int num;
            cin >> num;
            if(num == k)
                gotk = true;
        }
        if(gotk)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}

// Not submitted