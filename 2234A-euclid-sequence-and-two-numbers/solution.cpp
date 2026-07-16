#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> arr(n);
        for(int& i:arr) cin >> i;
        sort(arr.begin(), arr.end());
        bool isOK = true;
        for(int i=n-3; i>=0; i--){
            if(arr[i]!=arr[i+2]%arr[i+1]){
                isOK = false;
                break;
            }
        }
        if(isOK) cout << arr[n-1] << " " << arr[n-2] << '\n';
        else cout << -1 << '\n';
    }
    return 0;
}