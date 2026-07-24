#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> arr;
        unordered_map<int, int> hash;
        int maxi=0;
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                int num; cin >> num;
                arr.push_back(num);
                hash[num]++;
                maxi = max(maxi, hash[num]);
            }
        }
        if(maxi>n*(n-1)) cout << "No" << '\n';
        else cout << "Yes" << '\n';
    }
    return 0;
}