// Given an array of n integers, your task is to find for each array position the nearest position to its left having a smaller value.

// Input:
// 8
// 2 5 1 4 8 3 2 5

// Output:
// 0 1 0 3 4 3 3 7

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ar array

int main() {
 
    ll n;
    cin>>n;

    ar<ll,2> a[n];

    for(ll i=0,x;i<n;i++) {

        cin>>x;
        a[i] = {x,i+1};

    }

    stack<ar<ll,2>> st;

    for(ll i=0;i<n;i++) {

        while(!st.empty() && st.top()[0] >= a[i][0]) {
            st.pop();
        }

        if(st.empty()) {cout<<0<<" ";}
        else {
            cout<<st.top()[1]<<" ";
        }
        st.push(a[i]);
    }
    return 0;

   

}