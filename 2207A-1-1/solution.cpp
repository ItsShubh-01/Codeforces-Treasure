#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string s; cin >> s;

        string temp = s;
        for(int i=2; i<n; i++)
            if(temp[i]=='1' && temp[i-2]=='1')
                temp[i-1]='1';
        
        int count_max=0;
        for(char ch:temp)
            if(ch=='1') count_max++;
        
        for(int i=2; i<n; i++)
            if(temp[i]=='1' && temp[i-2]=='1')
                temp[i-1]='0';
        int count_min = 0;
        for(char ch:temp)
            if(ch=='1') count_min++;

        cout << count_min << " " << count_max << '\n';
    }
    return 0;
}