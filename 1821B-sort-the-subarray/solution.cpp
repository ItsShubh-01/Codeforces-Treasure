#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n), b(n);
        for (int &x : a) cin >> x;
        for (int &x : b) cin >> x;

        int l=0;
        while (l < n && a[l] == b[l]) l++;
        int r=n-1;
        while (r >= 0 && a[r] == b[r]) r--;
        while (l > 0 && b[l - 1] <= b[l]) l--;
        while (r + 1 < n && b[r] <= b[r + 1]) r++;
        cout << l+1 << " " << r+1 << '\n';
    }
    return 0;
}