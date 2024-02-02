#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {

    ll n,k;
    cin>>n>>k;

    vector<array<ll,2>> v(n);

    for(ll i=0,x;i<n;i++) {

        cin>>x;
        v[i][0] = x;
        v[i][1] = i+1;
    }

    sort(v.begin(),v.end());

    // for(auto i:v) {
    //     cout<<i[0]<<" "<<i[1]<<endl;
    // }

    int s = 0, e = n-1;

    while(s < e) {

        int sum = v[s][0] + v[e][0];

        if(sum == k) {
            cout<<v[s][1]<<" "<<v[e][1];
            return 0;
        } 
        else if(sum > k) {
            e--;
        }
        else {
            s++;
        }

    }
   cout<<"IMPOSSIBLE";
   return 0;

}