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
        vector<int> arr(n);
        for(int i=0 ; i<n ; i++)
            cin >> arr[i];

        sort(arr.begin(),arr.end());
        int max_stk = 0;
        int count = 1;
        for(int i=1 ; i<arr.size() ; i++)
        {
            if(arr[i] == arr[i-1]+1)
                count++;
            else if(arr[i] == arr[i-1])
                continue;
            else
            {
                max_stk = max(max_stk , count);
                count = 1;
            }
        }
        max_stk = max(max_stk , count);

        cout << max_stk << endl;
    }
}