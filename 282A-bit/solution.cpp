//282A. Bit++
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,x = 0;
    string op;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        getline(cin >> ws, op);
        if(op[0] == '+' || op[2] == '+') ++x;
        if(op[0] == '-' || op[2] == '-') --x;;
    }
    cout << x;
}