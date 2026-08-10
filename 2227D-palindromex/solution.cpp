#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef unordered_map<int, int> umap;
typedef unordered_set<int> uset;

#define rep(i, a, b) for (int i = (a); i < (b); i++)
#define rrep(i, a, b) for (int i = (b) - 1; i >= (a); i--)
#define srt(arr) sort((arr).begin(), (arr).end());
#define pb push_back
#define eb emplace_back
#define ppb pop_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()
#define yes cout << "Yes" << '\n';
#define no cout << "No" << '\n';
#define dbg(x) cerr << #x << " = " << x << "\n"

const int MOD = 1e9 + 7;
const ll INF = 1e18;

ll binpow(ll base, ll exp, ll mod = MOD)
{
    ll result = 1;
    base %= mod;
    while (exp > 0)
    {
        if (exp & 1)
            result = result * base % mod;
        base = base * base % mod;
        exp >>= 1;
    }
    return result;
}

ll modinv(ll a, ll mod = MOD)
{
    return binpow(a, mod - 2, mod);
}

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

void solve()
{
    int n;
    cin >> n;
    vi arr;
    int start0 = -1, end0 = -1;
    rep(i, 0, 2 * n)
    {
        int num;
        cin >> num;
        arr.pb(num);
        if (num == 0)
        {
            if (start0 == -1)
                start0 = i;
            else
                end0 = i;
        }
    }

    int maxmex = 1;

    bool isPald = true;
    vi nums;
    nums.pb(0);
    rep(i, 1, (end0 - start0 + 1) / 2)
    {
        if (arr[start0 + i] == arr[end0 - i])
            nums.pb(arr[start0 + i]);
        else
        {
            isPald = false;
            break;
        }
    }
    if ((end0 - start0 + 1) % 2)
        nums.pb(arr[start0 + ((end0 - start0 + 1) / 2)]);

    if (isPald)
    {
        rep(i, 1, start0 + 1)
        {
            if (end0 + i >= arr.size())
                break;
            if (arr[start0 - i] == arr[end0 + i])
                nums.pb(arr[start0 - i]);
            else
                break;
        }
        srt(nums);
        bool got = false;
        rep(i, 0, nums.size())
        {
            if (nums[i] != i)
            {
                got = true;
                maxmex = max(maxmex, i);
                break;
            }
        }
        if (!got && nums.size() > maxmex)
            maxmex = nums.size();
    }

    vi nums2;
    nums2.pb(0);
    rep(i, 1, start0 + 1)
    {
        if (start0 + i >= arr.size())
            break;
        if (arr[start0 - i] == arr[start0 + i])
            nums2.pb(arr[start0 - i]);
        else
            break;
    }
    srt(nums2);
    bool got2 = false;
    rep(i, 0, nums2.size())
    {
        if (nums2[i] != i)
        {
            got2 = true;
            maxmex = max(maxmex, i);
            break;
        }
    }
    if (!got2 && nums2.size() > maxmex)
        maxmex = nums2.size();

    vi nums3;
    nums3.pb(0);
    rep(i, 1, end0 + 1)
    {
        if (end0 + i >= arr.size())
            break;
        if (arr[end0 - i] == arr[end0 + i])
            nums3.pb(arr[end0 - i]);
        else
            break;
    }
    srt(nums3);
    bool got3 = false;
    rep(i, 0, nums3.size())
    {
        if (nums3[i] != i)
        {
            got3 = true;
            maxmex = max(maxmex, i);
            break;
        }
    }
    if (!got3 && nums3.size() > maxmex)
        maxmex = nums3.size();

    cout << maxmex << '\n';
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

//Incomplete