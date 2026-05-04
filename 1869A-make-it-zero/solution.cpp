#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    for(int test=0; test<t; test++)
    {
        int n; cin >> n;
        bool notZero = false;
        int last;
 
        for(int i=0; i<n; i++)
        {
            int num; cin >> num;
            if(num!=0)
                notZero=true;
            if(i==n-1)
                last = num;
        }
        if(!notZero)
            cout << 0 << endl;
        else{
            if(n%2==0)
            {
                cout << 2 << endl;
                cout << 1 << " " << n << endl << 1 << " " << n << endl;
            }
            else if(last == 0)
            {
                cout << 2 << endl
                    << 1 << " " << n-1 << endl
                    << 1 << " " << n-1 << endl;
            }
            else
            {
                cout << 4 << endl
                    << 1 << " " << n-1 << endl
                    << 1 << " " << n-1 << endl
                    << n-1 << " " << n << endl
                    << n-1 << " " << n << endl;
            }
        }
    }
}