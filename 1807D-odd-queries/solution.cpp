#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    for(int test=0; test<t; test++)
    {
        int n,q; cin >> n >> q;
        vector<int> arr;
        int odd = 0;
        for(int i=0; i<n; i++)
        {
            int num; cin >> num;
            if(num%2)
                odd++;
            arr.push_back(odd);
        }

        for(int m=0; m<q; m++)
        {
            int l,r,k;
            cin >> l >> r >> k;
            int oddlr;

            if(l==1)
                oddlr = arr[r-1];
            else
                oddlr = arr[r-1]-arr[l-2];
            if(k%2)
            {
                if((odd-oddlr+(r-l+1))%2)
                    cout << "YES" << '\n';
                else
                    cout << "NO" << '\n';
            }
            else{
                if((odd-oddlr)%2)
                    cout << "YES" << '\n';
                else
                    cout << "NO" << '\n';
            }
        }
    }
    return 0;
}

// Not submitted