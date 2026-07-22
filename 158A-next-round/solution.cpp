#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k; cin >> n >> k;
    int count = 0;
    int std;
    for(int i=0 ; i<n ; i++)
    {
        int score; cin >> score;
        if(i+1<=k && score!=0) count++;
        if(i+1==k) std=score;
        if((i+1>k && score<std) || score==0) break;
        if(i+1>k && score>=std) count++;
    }
    cout << count;
}