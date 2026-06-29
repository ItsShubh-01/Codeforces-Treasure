#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> arr;
        for(int i=0; i<n; i++)
        {
            int num; cin >> num;
            arr.push_back(num);
        }

        for(int i = 0; i < n - 1; i++){
            if(arr[i]==1){
                arr[i]++;
                if(i>0) while(arr[i]%arr[i-1]==0) arr[i]++;
            }
            while(arr[i+1] % arr[i] == 0)
                arr[i+1]++;
        }

        for(int i=0; i<n; i++)
            cout << arr[i] << " ";
        cout << '\n';
    }
    return 0;
}