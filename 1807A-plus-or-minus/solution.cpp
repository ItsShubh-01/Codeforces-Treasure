#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, m, l;
        cin >> n >> m >> l;
        if(n+m==l) cout << '+';
        else cout << '-';
        cout << '\n';
    }
    return 0;
}