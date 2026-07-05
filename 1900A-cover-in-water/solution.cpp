#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    for(int test=0; test<t; test++)
    {
        int n; cin >> n;
        string s; cin >> s;
        
        int count = 0;
        int number = 0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='#')
            {
                if(count >= 3)
                {
                    number = 2;
                    count = 0;
                    break;
                }
                else if(count < 3)
                {
                    number+=count;
                    count = 0;
                }
            }
            else
                count++;

            if(count >= 3)
            {
                number = 2;
                count = 0;
                break;
            }
        }
        if(count != 0)
            number+=count;
        cout << number << endl;
    }
    
    return 0;
}