#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    for(int test=0; test<t; test++)
    {
        int n,k;
        cin >> n >> k;

        string s; cin>> s;
        unordered_map<char,int> hash;
        for(const char& ch:s)
            hash[ch]++;

        int odd = 0;
        for(auto it:hash)
            if(it.second%2)
                odd++;

        if(odd - k > 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}

// Not submitted