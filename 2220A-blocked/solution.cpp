#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> arr;
        for(int i=0; i<n; i++)
        {
            int num; cin >> num;
            arr.push_back(num);
        }
        sort(arr.begin(),arr.end(),greater<int>());

        bool isSame = false;
        for(int i=1; i<n; i++)
            if(arr[i]==arr[i-1])
            {
                isSame = true;
                break;
            }
        if(isSame) cout << -1 << endl;
        else{
            for(int i:arr) cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}