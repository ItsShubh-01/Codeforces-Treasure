#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int test = 0; test < t; test++)
    {
        int n;
        cin >> n;
        unordered_map<int, int> hash;
        int first = -1;
        int second = -1;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            hash[num]++;
            if (first == -1)
                first = num;
            else if (num != first && second == -1)
                second = num;
        }
        if (hash.size() == 1)
            cout << "YES" << endl;
        else if (hash.size() == 2)
        {
            if (abs(hash[first] - hash[second]) <= 1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}

// Not submitted