#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;
        
        int countA = a+(c/2)+(c%2), countB = b+(c/2);
        if(countA>countB) cout << "First" << '\n';
        else cout << "Second" << '\n';
    }
    return 0;
}