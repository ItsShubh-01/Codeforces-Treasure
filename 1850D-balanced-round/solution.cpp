#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    for(int m=0; m<t; m++)
    {
        int n,k;
        cin >> n >> k;

        vector<int> arr;
        for(int i=0; i<n; i++)
        {
            int num; cin >> num;
            arr.push_back(num);
        }
        sort(arr.begin(),arr.end());

        int max_count = 1;
        int count = 1;
        for(int i=1; i<n; i++)
        {
            if(arr[i]-arr[i-1] > k){
                max_count = max(max_count,count);
                count = 1;
            }
            else
                count++;
        }
        max_count = max(max_count,count);
        cout << n-max_count << endl;
    }
}

// Not submitted