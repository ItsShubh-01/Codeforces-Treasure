#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int num; cin >> num;
        for(int i=0; i<num; i++)
        {
            int num; cin >> num;
        }
        if(num<3)
        {
            for(int i=0; i<num; i++)
                cout << num << " ";
            cout << endl;
        }
        else{
            for(int i=0; i<num; i++)
                cout << 2 << " ";
            cout << endl;
        }
    }
    return 0;
}