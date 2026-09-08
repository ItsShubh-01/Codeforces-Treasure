#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int first = 0, last = 0;
        for(int i=0; i<n; i++) {
            int num; cin >> num;
            if(i==0) first = num;
            if(i==n-1) last = num;
        }
        cout << gcd(first, last) << '\n';
    }
    return 0;
}