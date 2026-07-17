#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    for(int test=0; test<t; test++)
    {
        int n; cin >> n;
        int first;
        for(int i=0; i<n; i++)
        {
            int num;
            cin >> num;
            if(i==0)
                first = num;
        }
        if(first==1)
            cout << "YES" << endl;
        else  
            cout << "NO" << endl;
    }
    return 0;
}

// Not submitted