#include <bits/stdc++.h>
using namespace std;

bool check(int n, vector<int> &arr)
{
    vector<int> count(n, 0), pool;
    for (int x : arr)
    {
        if (x < n && count[x] == 0)
            count[x] = 1;
        else
            pool.push_back(x);
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (count[i] == 0)
        {
            if (pool.empty())
                return false;
            int large = pool.back();
            if (large > 2 * i)
                pool.pop_back();
            else
                return false;
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            arr.push_back(num);
        }
        sort(arr.begin(), arr.end());

        int start = 0, end = n;
        int maxmex = 0;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (check(mid, arr))
            {
                maxmex = mid;
                start = mid + 1;
            }
            else
                end = mid - 1;
        }
        cout << maxmex << '\n';
    }
    return 0;
}

//--------Incomplete--------