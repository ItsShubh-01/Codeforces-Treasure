#include<bits/stdc++.h> 
using namespace std;

int main()
{
    int num; cin >> num;
    vector<vector<int>> arr(num);
    for(int j=0 ; j<num ; j++)
    {
        int n,s,x;
        cin >> n >> s >> x;
        int sum = 0;
        for(int i=0 ; i<n ; i++)
        {
            int number;cin >> number;
            sum += number;
            arr[j].push_back(number);
        }
        arr[j].push_back(n);
        arr[j].push_back(s);
        arr[j].push_back(x);
        arr[j].push_back(sum);
    }

    for(int i=0 ; i<num ; i++)
    {
        int size = arr[i].size();
        if(arr[i][size-1] > arr[i][size-3]) cout << "NO\n";
        else if(((arr[i][size-1] - arr[i][size-3])%arr[i][size-2])==0) cout << "YES\n";
        else cout << "NO\n";
    }
}