#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    for(int q=0; q<t; q++)
    {
        vector<int> a,b,c;
        int n; cin >> n;
        for(int i=0; i<n; i++)
        {
            int num; cin >> num;
            a.push_back(num);
        }
        sort(a.begin(),a.end());
        b.push_back(a[0]);
        for(int i=1; i<a.size(); i++)
        {
            if(a[i]==a[0])
                b.push_back(a[i]);
            else
                c.push_back(a[i]);
        }
        if(b.size()==0 || c.size()==0)
            cout << -1 << endl;
        else{
            cout << b.size() << " " << c.size() << endl;
            for(const int& i:b)
                cout << i << " ";
            cout << endl;
            for(const int& i:c)
                cout << i << " ";
            cout << endl;
        }
    }
}