#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int temp = n;
        int count = 0;
        while(temp>0) {
            if(temp%10) count++;
            temp/=10;
        }
        cout << count << '\n';
        int cnt=0;
        while(n>0) {
            if(n%10) cout << (n%10)*((int)pow(10, cnt)) << ' ';
            n/=10;
            cnt++;
        } cout << '\n';
    }
    return 0;
}