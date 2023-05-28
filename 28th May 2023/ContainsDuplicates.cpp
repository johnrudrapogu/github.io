#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool conDups(vector<ll>& v);

int main()
{
    ll tc; cin >> tc;
    while(tc--)
    {
        ll n; cin >> n;
        vector<ll> v(n, 0);
        for(auto &x : v) cin >> x;
        bool res = conDups(v);
        if(res) cout << "true" << "\n";
        else cout << "false" << "\n";
    }
    return 0;
}

bool conDups(vector<ll>& v)
{
    std::unordered_map<ll, ll> mp;
    for(auto x : v) mp[x]++;
    std::pair<ll, ll> max = *mp.begin();
    for(auto it = mp.begin(); it != mp.end(); ++it)
    {
        if(it->second > 1) return true;
    }
    return false;
}