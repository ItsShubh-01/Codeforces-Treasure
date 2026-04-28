#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int count = 0, sum=0;
        int last = 0;
        for(int i=0; i<n; i++)
        {
            int num; cin >> num;
            sum+=num;
            if(num==1) count++;
            if(i==n-1) last = num;
        }
        if(sum>count)
        {
            if(last!=1) cout << sum-count << '\n';
            else cout << sum - count + 1 << '\n';
        }
        else cout << 1 << '\n';
    }
    return 0;
}