#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    for(int w=0; w<t; w++)
    {
        int a,b,x,y,p,q;
        cin >> a >> b >> x >> y >> p >> q;

        int delx = abs(x-p);
        int dely = abs(y-q);

        if((delx==0 && (dely==2*a || dely==2*b)) || 
            (dely==0 && (delx==2*a || delx==2*b)))
            cout << 2 << '\n';
        else if(a!=b)
        {
            if((delx==2*a && dely==2*b) || 
                (dely==2*a && delx==2*b))
                cout << 1 << '\n';
            else if((delx==b+a && dely==a+b) ||
                    (delx==abs(a-b) && dely==abs(a-b)) ||
                    (delx==abs(a-b) && dely==a+b) ||
                    (delx==a+b && dely==abs(a-b)))
                cout << 2 << '\n';
            else
                cout << 0 << '\n';
        }
        else{
            if((delx==2*a && dely==2*b))
                cout << 1 << '\n';
            else
                cout << 0 << '\n';
        }
    }
    return 0;
}

// Not submitted