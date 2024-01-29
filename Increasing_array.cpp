// You are given an array of n integers. You want to modify the array so that it is increasing, i.e., every element is at least as large as the previous element.
// On each move, you may increase the value of any element by one. What is the minimum number of moves required?

// Input: 5
// 3 2 5 1 7
// Output: 5

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll n,k,res = 0;
    cin>>n;
    cin>>k;
    ll ans = 0;
    for(ll i=1,x;i<n;i++) {
        cin>>x;
        k = max(k,x) ; 
        if(x<k) {
          res = res + ( k - x); 
          k = max(k,x) ; 
        }
    } 
}