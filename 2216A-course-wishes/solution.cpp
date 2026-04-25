#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n,k; cin >> n >> k;
        for(int i=0; i<k; i++)
        {
            int num; cin >> num;
        }
        int count = 0;
        bool under1000 = true;
        unordered_map<int,vector<int>> hash;
        for(int i=0; i<n; i++)
        {
            int num; cin >> num;
            hash[num].push_back(i);
            if(num<k+1)
                count+=k+1-num;
            if(count>1000){
                under1000 = false;
                break;
            }
        }
        if(!under1000) cout << -1 << endl;
        else{
            cout << count << '\n';
            for(int i=k; i>0; i--)
                for(int j=0; j<hash[i].size(); j++)
                    for(int m=i; m<k+1; m++)
                        cout << hash[i][j]+1 << " ";
            cout << '\n';
        }
    }
    return 0;
}