#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int sum=0;
        for(int i=0; i<n; i++) {
            int num; cin >> num;
            sum+=num;
        }
        if(sum%4==0) cout << "Yes" << '\n';
        else cout << "No" << '\n';
    }
    return 0;
}