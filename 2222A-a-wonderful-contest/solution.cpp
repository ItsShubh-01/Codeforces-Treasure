#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        bool is100 = false;
        for(int i=0; i<n; i++)
        {
            int num; cin >> num;
            if(num==100)
                is100 = true;
        }
        if(is100) cout << "Yes" << '\n';
        else cout << "No" << '\n';
    }
    return 0;
}