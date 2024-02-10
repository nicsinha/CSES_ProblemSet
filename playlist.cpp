#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {

    ll n,count = 0,ans=0;
    cin>>n;

    unordered_set<ll> s;

    for(ll i=0,x;i<n;i++) {

        cin>>x;

        if(s.find(x) == s.end()) {
            s.insert(x);
            count++;
            ans = max(count,ans);
        }
        else {
            ans = max(ans,count);
            s.clear();
            s.insert(x);
            count = 1;
        }

    }
    cout<<ans;

}