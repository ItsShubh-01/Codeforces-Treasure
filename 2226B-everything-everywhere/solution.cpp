#include <bits/stdc++.h>
#include<numeric>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int count = 0;
        int last; cin >> last;
        for(int i=1; i<n; i++)
        {
            int num; cin >> num;
            if(max(num,last)-min(num,last)==gcd(num,last))
                count++;
            last = num;
        }
        cout << count << '\n';
    }
    return 0;
}