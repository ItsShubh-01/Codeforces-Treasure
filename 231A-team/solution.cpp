#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int count=0;
    for(int i=0 ; i<n ; i++)
    {
        int count_1 =0;
        for(int j=0 ; j<3 ; j++)
        {
            int num; cin >> num;
            if(num==1) count_1++;
        }
        if(count_1 > 1) count++;
    }
    cout << count;
}