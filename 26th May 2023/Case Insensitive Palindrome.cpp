#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc; cin >> tc;
    while(tc--)
    {
        string st; cin >> st;
        int n = st.length(), cnt = 0;
        transform(st.begin(), st.end(), st.begin(), ::tolower);
        string re = st;
        reverse(re.begin(), re.end()); 
        if(st == re) cout << "Yes" << "\n";
        else cout << "No" << "\n";
    }
    return 0;
}