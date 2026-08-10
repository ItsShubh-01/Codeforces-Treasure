#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t; cin >> t;
    while(t--){
        vector<int> arr(7);
        int maxi = INT_MIN;
        long long sum = 0;
        for(int i=0; i<7; i++){
            cin >> arr[i];
            sum+=arr[i];
            maxi = max(maxi, arr[i]);
        }
        cout << (-1)*(sum) + (2*maxi) << '\n';
    }
    return 0;
}