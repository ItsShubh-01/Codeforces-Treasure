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

void process(vi& arr, umap& hash){
    int n = arr.size();
    int freq = 1;
    rep(i,0,n-1){
        if(arr[i]!=arr[i+1]){
            hash[arr[i]] = max(hash[arr[i]],freq);
            freq = 1;
        }else freq++;
    }hash[arr[n-1]] = max(hash[arr[n-1]], freq);
}

void solve() {
	int n; cin >> n;
    vi arr(n), brr(n);
    for(int& i:arr) cin >> i;
    for(int& i:brr) cin >> i;

    umap hash1, hash2;
    process(arr, hash1);
    process(brr, hash2);

    int maxi = 1;
    for(const auto& it:hash1)
        maxi = max(maxi, it.second+hash2[it.first]);
    for(const auto& it:hash2)
        maxi = max(maxi, it.second+hash1[it.first]);

    cout << maxi << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    
	return 0;
}