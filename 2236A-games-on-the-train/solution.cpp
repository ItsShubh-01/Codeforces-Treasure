#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int maxi=INT_MIN, mini=INT_MAX;
        for(int i=0; i<n; i++){
            int num; cin >> num;
            mini = min(mini, num);
            maxi = max(maxi, num);
        }
        cout << maxi-mini+1 << '\n';
    }
    return 0;
}