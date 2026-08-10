#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        long long n, c, k;
        cin >> n >> c >> k;

        vector<int> arr(n);
        for(int &i:arr) cin >> i;
        sort(arr.begin(), arr.end());

        for(int i=0; i<n; i++){
            if(arr[i]>c) break;
            if(arr[i]+k>=c){
                k-=c-arr[i];
                c+=c;
            }
            else if(arr[i]+k<c){
                c+=arr[i]+k;
                k=0;
            }
        }
        cout << c << '\n';
    }
    return 0;
}