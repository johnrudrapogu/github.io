#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void twoSum(vector<ll>& v, ll n, ll k)
{
    unordered_map<int, int> mp;
    for(int i = 0; i < n; i++)
    {
        if(mp.find(k - v[i]) == mp.end()) mp[v[i]] = i;
        else cout << mp[k - v[i]] << " " << i;
    }
    cout << "\n";
}

int main()
{
    int tc; cin >> tc;
    while(tc--)
    {
        ll n, k; cin >> n >> k;
        vector<ll> v(n, 0);
        for(auto &x : v)
            cin >> x;
        twoSum(v, n, k);
    }
    return 0;
}

