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

// void solve() {
//     long long n, c;
//     cin >> n >> c;

//     vi arr(n);
//     ll sqsum=0, sum=0;
//     for(int& i:arr) {cin >> i; sqsum+=i*i; sum+=i;}

//     cout << (sqrt(sum*sum - n*(sqsum-c))-sum)/2*n << '\n';
// }
void solve() {
    long long n, c;
    cin >> n >> c;

    vll arr(n);
    ll sum = 0, sqsum = 0;
    for (ll &i : arr) {
        cin >> i;
        sum += i;
        sqsum += i * i;
    }

    ll lo = 1, hi = 1000000000;
    while (lo <= hi) {
        ll w = lo + (hi - lo) / 2;
        __int128 total = 0;
        for (ll x : arr) {
            total += (__int128)(x + 2 * w) * (x + 2 * w);
            if (total > c) break;
        }
        if (total == c) {
            cout << w << '\n';
            return;
        }
        if (total < c) lo = w + 1;
        else hi = w - 1;
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    
    return 0;
}