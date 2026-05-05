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

void solve() {
	int n, k; cin >> n >> k;
    if(k!=4){
        int mini = k;
        rep(i,0,n){
            int num; cin >> num;
            if(!(num%k)) mini = 0;
            else mini = min(mini, k - (num%k));
        }
        cout << mini << '\n';
    }
    else{
        if(n==1){
            int num; cin >> num;
            if(!(num%4)) cout << 0 << '\n';
            else cout << 4 - (num%4) << '\n';
        }
        else{
            int count = 2, count2 = 0;
            rep(i,0,n){
                int num; cin >> num;
                if(!(num%4)) count = 0;
                else if(num%4==3) count = min(count, 1);
                else if(num%2==0){
                    count2++;
                    count = min(count, 2 - count2);
                }
            }
            cout << max(count,0) << '\n';
        }
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