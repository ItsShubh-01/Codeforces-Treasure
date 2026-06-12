#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int m=0; m<t; m++)
    {
        int a,b,n;
        cin >> a >> b >> n;
        
        long long count = b;
        for(int i=0; i<n; i++)
        {
            int num; cin >> num;
            if(num<a)
                count+=num;
            else
                count+=(a-1);
        }
        cout << count << '\n';
    }
    return 0;
}

// Not submitted