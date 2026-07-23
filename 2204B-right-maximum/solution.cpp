#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int count=1;
        int max; cin >> max;
        for(int i=1; i<n; i++){
            int num; cin >> num;
            if(num>=max) {count++; max=num;}
        }
        cout << count << '\n';
    }
    return 0;
}