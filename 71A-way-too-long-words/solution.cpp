#include<iostream>
using namespace std;

void Long_Word(string str)
{
    if(str.length() <= 10)
    {
        cout << str << endl;
    }
    else
    {
        string A = (string(1,str[0]) + to_string(str.length()-2) + string(1,str[str.length()-1]));
        cout << A << endl;
    }
}

int main()
{
    int n;
    cin >> n;

    string line;
    for (int i = 0; i < n; i++)
    {
        cin >> line;
        Long_Word(line);
    }
}