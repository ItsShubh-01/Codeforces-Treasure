#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;
    while(a--)
    {
        int n;
        cin >> n;
        
        int count=0;
        for(int i=0; i<n; i++){
            int num; cin >> num;
            if(num%2) count++;
        }
        
        if(count%2) cout << "NO" << '\n';
        else cout << "YES" << '\n';
    }
}