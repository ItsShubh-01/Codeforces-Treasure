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
#define yes			cout << "Yes" << '\n';
#define no 			cout << "No" << '\n';
#define dbg(x)      cerr << #x << " = " << x << "\n"

const int MOD = 1e9 + 7;
const ll  INF = 1e18;

ll binpow(ll base, ll exp, ll mod = MOD) {
    ll result = 1;
    base %= mod;
    while (exp > 0) {
        if (exp & 1) result = result * base % mod;
        base = base * base % mod;
        exp >>= 1;
    }
    return result;
}

ll modinv(ll a, ll mod = MOD) {
    return binpow(a, mod - 2, mod);
}

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

void solve() {
	int n; cin >> n;
    string s; cin >> s;
    int counta = 0, countb = 0;
    for(const char& ch:s)
    {
        if(ch==')') countb++;
        else counta++;
    }
    if(counta==countb) {yes;}
    else no;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    
	return 0;
}