#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int n;
    cin>>n;
    ll sum = 0,ans = 0;
    vector<ll> v(n,0);

    for(ll i=0,x;i<n;i++) {
        cin>>x;
        v[i] = x;
        sum+=x;
    }
   
    for(ll i=0;i<(1<<n);i++) {

        ll cs = 0;
        for(ll j=0;j<n;j++) {

            if((i>>j) & 1) {
                cs += v[j];
            }

        }
        if(cs <= (sum/2)) {
            ans = max(ans,cs);
        }

    }
  cout<<sum-2*ans;


}