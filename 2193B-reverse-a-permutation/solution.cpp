#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int j;
        cin >> j;
        vector<int> arr(j);
        for (int x = 0; x < j; x++)
            cin >> arr[x];

        int start, end, numm;
        bool gotstart = false;
        bool gotend = false;
        for (int m = 0; m < arr.size(); m++)
        {
            if (!gotstart && arr[m] != j - m)
            {
                start = m;
                gotstart = true;
                numm = j - m;
            }
            else if (gotstart && !gotend && arr[m] == numm)
            {
                end = m;
                gotend = true;
                break;
            }
        }
        if (gotstart && gotend)
            reverse(arr.begin() + start, arr.begin() + end + 1);
        for (int num : arr)
            cout << num << " ";
        cout << endl;
    }
}

// Not submitted