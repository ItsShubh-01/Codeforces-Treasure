#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    for(int i=0; i<t; i++)
    {
        int n,k; cin >> n >> k;
        int arr[n];
        for(int j=0; j<n; j++)
            cin >> arr[j];
        
        if(k>1)
            cout << "YES" << endl;
        else  {
            bool isSorted = true;
            for(int num=1; num<n; num++)
            {
                if(arr[num]<arr[num-1]){
                    isSorted = false;
                    break;
                }
            }
            if(isSorted)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}