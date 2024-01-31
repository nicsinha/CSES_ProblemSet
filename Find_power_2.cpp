#include<bits/stdc++.h>
using namespace std;
#define m 1000000007
#define ll long long int

int main() {

    ll a=2,n,res=1;
    cin>>n;

    while(n) {

        if(n&1) {
            res = (res*a)%m;
        }

        a = (a*a)%m;
        n = n/2;
    }
    cout<<res;
}