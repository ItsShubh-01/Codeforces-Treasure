#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int m=0; m<t; m++)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int max_count = 0;
        int count = 1;
        for(int i=1; i<n; i++)
        {
            if(s[i]==s[i-1])
                count++;
            else{
                max_count = max(max_count,count);
                count = 1;
            }
        }
        max_count = max(max_count,count);
        cout << max_count + 1 << endl;
    }
}