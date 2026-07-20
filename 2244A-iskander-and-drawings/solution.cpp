#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        
        int maxi=0, count=0;
        for(char& ch:s) {
            if(ch=='#') {count++;} 
            else {count=0;} 
            maxi=max(maxi, count);
        }
        cout << (maxi+1)/2 << '\n';
    }
    return 0;
}
