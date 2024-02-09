#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {

    ll n,sum=0,avg,ans=0;
    cin>>n;

    vector<ll> v(n);

    for(ll i=0,x;i<n;i++) {
        cin>>x;
        v[i] = x;
        sum+=x;
    }
    avg = sum/n;

    for(auto &i:v)
        ans += abs(avg-i);

    cout<<ans;

    return 0;
}