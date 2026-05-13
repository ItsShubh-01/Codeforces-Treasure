#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int m = 0; m < t; m++)
    {
        int n;
        cin >> n;

        int ans = -1;
        for(int i=1; i<=n; i++)
        {
            int num; cin >> num;
            int j = abs(num-i);
            if(j>0)
            {
                if(ans==-1)
                    ans = j;
                else if(j>ans && j%ans!=0)
                    ans = __gcd(ans,j);
                else if(j<ans && ans%j==0)
                    ans = j;
                else if(j<ans && ans%j!=0)
                    ans = __gcd(ans,j);
            }
        }
        cout << ans << endl;
    }
    return 0;
}

// Not submitted