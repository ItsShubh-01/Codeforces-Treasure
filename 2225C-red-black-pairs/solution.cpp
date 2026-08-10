#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s, t;
        cin >> s >> t;

        int count = 0;

        int i = 0;
        while (i < n)
        {
            if (i+1 < n) {
                int vertical = (s[i] != t[i]);
                int horizontal = (s[i] != s[i+1]) + (t[i] != t[i+1]);

                if (horizontal < vertical + (s[i+1] != t[i+1])) {
                    count += horizontal;
                    i += 2;
                } else {
                    count += vertical;
                    i++;
                }
            } else {
                count += (s[i] != t[i]);
                i++;
            }
        }
        cout << count << '\n';
    }
    return 0;
}