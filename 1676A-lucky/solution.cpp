#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        int count1=0;
        for(int i=0; i<6; i++) {
            if(i<3) count1+=s[i]-'0';
            else count1-=s[i]-'0';
        }
        if(count1) cout << "No" << '\n';
        else cout << "Yes" << '\n';
    }
    return 0;
}