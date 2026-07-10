#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    for(int test=0; test<t; test++)
    {
        int n,x;
        cin >> n >> x;

        int min_fuel = 0;
        int last = 0;
        for(int i=0; i<n; i++)
        {
            int num;
            cin >> num;

            min_fuel = max(min_fuel , num-last);
            last = num;
        }
        min_fuel = max(min_fuel, 2*(x-last));
        cout << min_fuel << endl;
    }
}