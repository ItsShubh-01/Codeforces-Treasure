#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vi>
#define vvll vector<vll>
#define vstr vector<string>
#define vb vector<bool>
#define vvb vector<vector<bool>>
#define vpii vector<pair<int,int>>
#define pll pair<ll, ll>
#define vpl vector<pll>
#define umap unordered_map<int,int>
#define umapll unordered_map<ll,ll>
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define rep(i, a, b) for (int i = (a); i < (b); ++i)
#define rrep(i, a, b) for (int i = (a); i >= (b); --i)
#define forr(i, a, b) for (int i = a; i <= b; i++)
#define pb push_back
#define ppb pop_back
#define ins insert
#define ers erase
#define srt(v) sort(all(v))
#define rsrt(v) sort(rall(v))
#define rev(v) reverse(all(v))
#define sum(v) accumulate(all(v), 0LL)
#define mx(v) *max_element(all(v))
#define mn(v) *min_element(all(v))
#define cnt(v, x) count(all(v), (x))
#define yes cout << "Yes" << '\n'
#define no cout << "No" << '\n'

const int SINF = 1000000000;
const ll INF = 1e18;
const int MOD = 1e9 + 7;
const int MAXN = 4e5 + 5;
const int N = 1e5 + 1;
const int LOG = 20;

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
ll maxll(ll a, ll b) {return a>=b? a:b;}
ll minll(ll a, ll b) {return a>=b? b:a;}

void solve() {
    int n, x;
    cin >> n >> x;
    vi a(n), b(n), c(n);
    for(int& i:a) cin >> i;
    for(int& i:b) cin >> i;
    for(int& i:c) cin >> i;

    if(x==0) {
        {cout << "Yes" << '\n'; return;}
        return;
    }

    int i=0, j=0, k=0, ans=0;
    while(i<n && (a[i]|x)<=x) {
        ans=ans|a[i++];
        if(ans==x) {cout << "Yes" << '\n'; return;}
    }
    while(j<n && (b[j]|x)<=x) {
        ans=ans|b[j++];
        if(ans==x) {cout << "Yes" << '\n'; return;}
    }
    while(k<n && (c[k]|x)<=x) {
        ans=ans|c[k++];
        if(ans==x) {cout << "Yes" << '\n'; return;}
    }
    
    cout << "No" << '\n';
    return;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    
    return 0;
}