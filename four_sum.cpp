#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {

    ll n,target;
    cin>>n>>target;
    vector<pair<ll,ll>> v;

    for(ll i=0,x;i<n;i++) {

        cin>>x;
        v.push_back({x,i});

    }

    sort(v.begin(),v.end());

    for(ll c=0;c<n-3;c++) {

        for(ll i=c+1;i<n-2;i++) {

            ll s = i+1, e = n-1;

            while(s < e) {

                ll sum = v[c].first + v[c].first + v[e].first + v[i].first;

                if(sum == target) {
                    cout<<v[s].second+1<<" "<<v[i].second+1<<" "<<v[e].second+1<<" "<<v[c].second+1;
                    return 0;
                }

                else if(sum > target) e--;
                else s++;

            }

        }

    }

   
    cout<<"IMPOSSIBLE";
    return 0;

   
}