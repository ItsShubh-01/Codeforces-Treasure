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
#define pll pair<ll, ll>
#define vpl vector<pll>
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

void solve()
{
    int n;
    cin >> n;
    vi arr(n);
    bool zero = false;
    int maxi = 0;
    for (int &i : arr)
    {
        cin >> i;
        if (i == 0)
            zero = true;
        maxi = max(maxi, i);
    }
    srt(arr);
    vi mark(n, 0);

    vi make;
    make.pb(arr[n - 1]);
    mark[n - 1] = 1;
    rep(i, 0, n - 1)
    {
        if (arr[i] != arr[i + 1])
        {
            make.pb(arr[i]);
            mark[i] = 1;
        }
    }
    rep(i, 0, n) if (mark[i] == 0)
        make.pb(arr[i]);

    vi freq(n + 1, 0);
    int mex = 0, maxim = 0;

    ll sum = 0;
    rep(i, 0, n)
    {
        if (make[i] <= n)
            freq[make[i]]++;
        while (freq[mex] > 0)
            mex++;
        maxim = max(maxim, make[i]);
        sum += mex;
        sum += maxim;

    }
    cout << sum << '\n';
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