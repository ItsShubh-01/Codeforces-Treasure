#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int m = 0; m < t; m++)
    {
        int n;
        cin >> n;

        bool isSorted = true;
        int min_diff = INT_MAX;
        int last;

        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            if (i == 0)
                last = num;
            else if (num < last)
                isSorted = false;
            else
                min_diff = min(min_diff, num - last);

            last = num;
        }
        if (!isSorted)
            cout << 0 << endl;
        else
            cout << (min_diff / 2) + 1 << endl;
    }
    return 0;
}