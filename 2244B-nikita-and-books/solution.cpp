#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t; cin >> t;
    while(t--) {
        long long n; cin >> n;
        long long sum=0;
        bool isOK = true;
        for(long long i=1; i<=n; i++) {
            int num; cin >> num;
            sum+=num;
            if(2*sum<i*(i+1)) isOK = false;
        }
        if(!isOK) {cout << "No" << '\n';}
        else cout << "Yes" << '\n';
    }
    return 0;
}