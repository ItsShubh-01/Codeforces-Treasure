#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m;
    cin >> m;

    int max_num = INT_MIN;
    for(int i=0 ; i<m ; i++)
    {
        int n;
        cin >> n;
        if(n>max_num)
        {
            int root = sqrt(n);
            if(root*root != n)
                max_num = n;
        }
        else 
            continue;
    }
    cout << max_num << endl;
}

// Not submitted