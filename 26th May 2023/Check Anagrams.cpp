#include<bits/stdc++.h>
using namespace std;

void checkAnagrams(string s1, string s2);

int main()
{
    int tc; cin >> tc;
    while(tc--)
    {
        string s1, s2; cin >> s1 >> s2;
        if(s1.length() != s2.length()) 
        {
            cout << "False" << "\n";
            break;
        }
        else if(s1.length() == 0 && s2.length() == 0) 
            cout << "True" << "\n";
        else 
            checkAnagrams(s1, s2);   
    }
    return 0;
}

void checkAnagrams(string s1, string s2)
{
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    if(s1 == s2)
        cout << "True" << "\n";
    else 
        cout << "False" << "\n";
}