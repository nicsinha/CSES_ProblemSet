#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    ll n;
    cin>>n;
    ll ans = 0;
    ll m = 10000000;
    vector<ll> v(m,0);
    vector<ll> prefix(m,0);


    for(ll i=1,a,b;i<=n;i++) {
        cin>>a>>b;
        v[a] += 1;
        v[b+1] -= 1; 
    }

    for(ll i=1;i<=m;i++) {
        prefix[i] = prefix[i-1] + v[i];
    }

    for(ll i=1;i<=m;i++) {
        ans = max(ans,prefix[i]);
    }
    cout<<ans;
}
