#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    string cf="codeforces";
    while(t--) {
        string s; cin >> s;
        int count=0;
        for(int i=0; i<10; i++) if(s[i]!=cf[i]) count++;
        cout << count << '\n';
    }
    return 0;
}