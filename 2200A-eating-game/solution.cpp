#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        unordered_map<int,int> hash;
        int maxi=INT_MIN;
        for(int i=0; i<n; i++) {
            int num; cin >> num;
            hash[num]++;
            maxi=max(maxi, num);
        }
        cout << hash[maxi] << '\n';
    }
    return 0;
}