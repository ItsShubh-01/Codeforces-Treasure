#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;
        
        if(n<4) cout << 0 << '\n';
        else {
            bool present2026=false;
            bool present2025=false;
            for(int i=0; i<n-3; i++) {
                string t = s.substr(i, 4);
                if(t=="2026") present2026=true;
                if(t=="2025") present2025=true;
            }
            if(present2026) cout << 0 << '\n';
            else if(present2025) cout << 1 << '\n';
            else cout << 0 << '\n';
        }
    }
    return 0;
}