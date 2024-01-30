#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {

    int n;
    cin>>n;

    if(((n*(n+1))/2) & 1) {
        cout<<"NO";
        return 0;
    }
    vector<int> v1,v2;

    if(!(n&1)) {

        int s = 1, e = n, flag = 1;
        while(s < e) {
            if(flag) {
            v1.push_back(s);
            v1.push_back(e);
            flag = 0;
            }
            else {
                v2.push_back(s);
                v2.push_back(e);
                flag = 0;
            }
            s++;
            e--;
        }
       print_vector(v1,v2);
       return 0;

    }
    
}