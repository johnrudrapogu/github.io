#include<bits/stdc++.h>
using namespace std;

bool solve();

int main()
{
    int tc; cin >> tc;
    while(tc--)
    {
        bool res = solve();
        if(res) cout << "Yes" << "\n";
        else cout << "No" << "\n";
    }
    return 0;
}

bool solve()
{
    string pr; cin >> pr;
    stack<char> blpr;
    if(pr.size() % 2 != 0)
        return false;
    for(int i = 0; i < pr.size(); i++)
    {
        if(blpr.empty()) blpr.push(pr[i]);
        else if(pr[i] == ')' && blpr.top() == '(' || pr[i] == '}' && blpr.top() == '{' || pr[i] == ']' && blpr.top() == '[')
            blpr.pop();
        else blpr.push(pr[i]);
    }
    if(blpr.empty()) return true;
    else return false;
}