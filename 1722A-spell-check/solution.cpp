#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    unordered_map<char,int> hash;
    hash['T']++;
    hash['i']++;
    hash['m']++;
    hash['u']++;
    hash['r']++;
    while(t--) {
        int n; cin >> n;
        unordered_map<char,int> hash2;
        string s; cin >> s;
        for(char& ch:s) hash2[ch]++;
        if(hash==hash2) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    return 0;
}