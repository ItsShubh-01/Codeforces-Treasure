#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef unordered_map<int,int> umap;
typedef unordered_set<int> uset;

#define rep(i,a,b)  for(int i=(a);i<(b);i++)
#define rrep(i,a,b) for(int i=(b)-1;i>=(a);i--)
#define srt(arr)	sort((arr).begin(), (arr).end());
#define pb          push_back
#define eb          emplace_back
#define ppb			pop_back
#define mp          make_pair
#define all(x)      (x).begin(),(x).end()
#define rall(x)     (x).rbegin(),(x).rend()
#define sz(x)       (int)(x).size()
#define dbg(x)      cerr << #x << " = " << x << "\n"

void solve() {
	int n; cin >> n;
    vi arr(n);
    for(int& x:arr) cin >> x;

    int cnt = 0;
    rep(i,0,n)
        if(arr[i]>i+1)
            cnt++;
    cout << n-cnt << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    
	return 0;
}