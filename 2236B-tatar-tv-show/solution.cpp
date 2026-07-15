#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string s; cin >> s;
        
        for(int i=0; i<n-k; i++){
            if(s[i]=='1') {
                if(s[i+k]=='1') s[i+k]='0';
                else s[i+k]='1';
            }
        }
        
        bool isOK = true;
        for(int i=n-k; i<n; i++) if(s[i]=='1') {isOK = false;break;}
        if(isOK) cout << "Yes" << '\n';
        else cout << "No" << '\n';
    }
    return 0;
}