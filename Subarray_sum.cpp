// Given an array of n positive integers, your task is to count the number of subarrays having sum x.
// Input:

// 5 7
// 2 4 1 2 7

// Output: 3

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {

  ll n,k,sum=0,ans = 0;
  cin>>n>>k;
  
  unordered_map<ll,ll> mp;
  

  for(ll i=0,x;i<n;i++) {

    cin>>x;
    sum += x;

    if(sum == k) {
        ans++;
    }

    if(mp.find(sum - k)!=mp.end()) {
        ans += mp[sum-k];
    }
    mp[sum]++;
  }


 cout<<ans;


    
}

