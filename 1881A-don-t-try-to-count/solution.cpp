#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int j = 0; j < t; j++)
    {
        int n, m;
        cin >> n >> m;

        string x, s;
        cin >> x >> s;

        int count = 0;
        while (x.size() < s.size())
        {
            x += x;
            count++;
        }

        bool gotString = false;
        for (int i = 0; i < x.size() - m + 1; i++)
        {
            if (x.substr(i, m) == s)
            {
                gotString = true;
                break;
            }
        }
        if (gotString)
            cout << count << endl;
        else
        {
            x += x;
            count++;
            bool gotString2 = false;
            for (int i = 0; i < x.size() - m + 1; i++)
            {
                if (x.substr(i, m) == s)
                {
                    gotString2 = true;
                    break;
                }
            }
            if (gotString2)
                cout << count << endl;
            else
                cout << -1 << endl;
        }
    }
    return 0;
}