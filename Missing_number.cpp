#include<bits/stdc++.h>
using namespace std;

int main() {

    int num,sum=0;
    cin>>num;

    for(int i=1,x;i<num;i++) {
        cin>>x;
        sum+=x;
    }
    
    if(num & 1) cout<<(((num+1)/2)*num) - sum;
    else {
        cout<<((num/2)*(num+1)) - sum;
    }

    return 0;
}