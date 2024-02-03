#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ll n;
    cin>>n;

    vector<ll> v(n);
    ll cs = 0, fs = INT64_MIN;
    for(ll i=0;i<n;i++) {

        cin>>v[i];
    }
    for(ll i=0;i<n;i++) {
     
        cs += v[i];
        fs = max(fs,cs);

        if(cs < 0) {
            cs = 0;
        }
    
    }
    cout<<fs;

}