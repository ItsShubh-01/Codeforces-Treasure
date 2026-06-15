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
#define vpii vector<pair<int, int>>
#define pll pair<ll, ll>
#define vpl vector<pll>
#define umap unordered_map<int, int>
#define umapll unordered_map<ll, ll>
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
ll maxll(ll a, ll b) { return a >= b ? a : b; }
ll minll(ll a, ll b) { return a >= b ? b : a; }

void solve()
{
    ll a, b, c, m;
    cin >> a >> b >> c >> m;

    ll cnta = m / a, cntb = m / b, cntc = m / c;
    ll cntab = m / lcm(a, b), cntbc = m / lcm(b, c), cntac = m / lcm(a, c);
    ll cntabc = m / lcm(lcm(a, b), c);

    ll count_a = 6 * cnta, count_b = 6 * cntb, count_c = 6 * cntc;
    count_a -= 3 * (cntab + cntac);
    count_b -= 3 * (cntab + cntbc);
    count_c -= 3 * (cntac + cntbc);
    count_a += 2 * cntabc;
    count_b += 2 * cntabc;
    count_c += 2 * cntabc;

    cout << count_a << " " << count_b << " " << count_c << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--)
        solve();

    return 0;
}