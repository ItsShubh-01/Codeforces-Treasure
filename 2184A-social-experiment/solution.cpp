#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        if(n<=3) cout << n << '\n';
        else if((n%6)%2==0) cout << 0 << '\n';
        else if((n%6)%2==1) cout << 1 << '\n';
    }
    return 0;
}