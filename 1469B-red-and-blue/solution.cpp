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

ll f(int ind1, int ind2, vi& arr, vi& brr, vvi& dp){
    if(ind1==arr.size() && ind2==brr.size()) return 0;
    if(ind1<arr.size() && ind2<brr.size() && dp[ind1][ind2]!=-1) 
        return dp[ind1][ind2];
    if(ind1==arr.size() || ind2==brr.size()){
        ll maxi = 0, sum = 0;
        while(ind1<arr.size()){
            sum+=arr[ind1++];
            maxi = maxll(maxi, sum);
        } 
        while(ind2<brr.size()){
            sum+=brr[ind2++];
            maxi = maxll(maxi, sum);
        } return maxi;
    }

    ll fromArr = arr[ind1] + f(ind1+1, ind2, arr, brr, dp);
    ll fromBrr = brr[ind2] + f(ind1, ind2+1, arr, brr, dp);
    return dp[ind1][ind2] = maxll(0, maxll(fromArr, fromBrr));
}

void solve() {
    int n, m;
    cin >> n; vi arr(n); for(int& i:arr) cin >> i;
    cin >> m; vi brr(m); for(int& i:brr) cin >> i;

    vvi dp(arr.size(), vi(brr.size(), -1));
    cout << f(0, 0, arr, brr, dp) << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    
    return 0;
}