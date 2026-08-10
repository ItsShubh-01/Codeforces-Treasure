#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    for(int a=0; a<t; a++)
    {
        int score = 0;
        for(int i=1; i<=10; i++)
        {
            for(int j=1; j<=10; j++)
            {
                char ch; cin >> ch;
                if(ch=='X')
                    score+=min(min(i,11-i),min(j,11-j));
            }
        }
        cout << score << endl;
    }
    return 0;
}

// Not submitted