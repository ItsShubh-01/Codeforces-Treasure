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

ll f(string &s, string &t)
{
    vll indxa1;
    for (int i = 0; i < s.size(); i++)
        if (s[i] == '1')
            indxa1.pb(i);

    ll count = 0, ind = 0;
    for (ll i = 0; i < t.size(); i++)
        if (t[i] == '1')
            count += abs(indxa1[ind++] - i);
    return count;
}

void solve()
{
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    string odda, oddb, evena, evenb;

    int cntodda = 0, cntoddb = 0, cntevena = 0, cntevenb = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2)
        {
            odda += a[i];
            oddb += b[i];
            if (a[i] == '1')
                cntodda++;
            if (b[i] == '1')
                cntoddb++;
        }
        else
        {
            evena += a[i];
            evenb += b[i];
            if (a[i] == '1')
                cntevena++;
            if (b[i] == '1')
                cntevenb++;
        }
    }
    if (cntodda != cntoddb || cntevena != cntevenb)
    {
        cout << -1 << '\n';
        return;
    }
    cout << f(odda, oddb) + f(evena, evenb) << '\n';
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