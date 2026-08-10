#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> arr_odd;
        vector<int> arr_even;
        long long sum = 0;
        int pos_odd = 0;
        int pos_even = 0;
        for(int i=0; i<n; i++)
        {
            int num; cin >> num;
            if(i%2) arr_even.push_back(num);
            else arr_odd.push_back(num);
            sum+=num;
            if(num>0 && (i+1)%2) pos_odd++;
            else if(num>0 && !(i+1)%2) pos_even++;
        }

        int mark_odd = 0;
        int mark_even = 0;
        for(int i=0; i<m ; i++)
        {
            int num; cin >> num;
            if(num%2) mark_odd++;
            else mark_even++;
        }

        sort(arr_even.begin(),arr_even.end());
        sort(arr_odd.begin(), arr_odd.end());

        int removed_odd = 0, removed_even = 0;
        for(int i=arr_even.size()-1; i>=0; i--)
        {
            if(mark_even>0 && arr_even[i]>0)
            {
                sum-=arr_even[i];
                mark_even--;
                removed_even++;
            }
            else break;
        }
        for(int i=arr_odd.size()-1; i>=0; i--)
        {
            if(mark_odd>0 && arr_odd[i]>0)
            {
                sum-=arr_odd[i];
                mark_odd--;
                removed_odd++;
            }
            else break;
        }

        if(removed_odd==0 && mark_odd>0)
            sum-=arr_odd[arr_odd.size()-1];
        if(removed_even==0 && mark_even>0)
            sum-=arr_even[arr_even.size()-1];
        cout << sum << '\n';
    }
    return 0;
}