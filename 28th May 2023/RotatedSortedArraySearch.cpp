#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll binarySearch(vector<ll>& v, ll t)
{
    ll low = 0;
    ll high = v.size() -1;
    
    while(low<=high)
    {
        ll mid = low + (high -low)/2;
        if(v[mid] == t) return mid;
        else if( v[low] <= v[mid])
        {
            // left side sorted
            if(v[low] <= t && v[mid] >= t) high = mid - 1;
            else low = mid + 1;
        }
        else
        {
            // right side sorted
            if(v[mid] <= t && v[high] >= t) low =  mid + 1;
            else high = mid -1;
        }
    }
    return -1;
}

int main()
{
    ll n, q; cin >> n >> q;
    vector<ll> v(n, 0);
    for(auto &x : v) cin >> x;
    while(q--)
    {
        ll t; cin >> t;
        ll res = binarySearch(v, t);
        cout << res << "\n";
    }
    return 0;
}