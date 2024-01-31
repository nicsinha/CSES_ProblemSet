#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void print_vector(vector<int> v1,vector<int> v2) {
    cout<<v1.size()<<endl;
    for(auto i:v1) {cout<<i<<" ";}

    cout<<endl<<v2.size()<<endl;
    for(auto i:v2) {cout<<i<<" ";}  
}

int flag = 1;
vector<int> ans;
void findSubsequencewithSum_k(vector<int> v, vector<int> &v1, int i, int sum, int k, int n) {

    
    if(i == n) {
        cout<<"Sum = "<<sum<<endl;
        if(k == sum) {
            if(flag) {ans = v1;flag = 0;}
            return;
        }
        return;
    }

    v1.push_back(v[i]);
    
    findSubsequencewithSum_k(v,v1,i+1,sum+=v[i],k,n);
    
    v1.pop_back();

    findSubsequencewithSum_k(v,v1,i+1,sum-=v[i],k,n);

}

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
                flag = 1;
            }
            s++;
            e--;
        }
       print_vector(v1,v2);
       return 0;
    }
    else {

        int k = (n*(n+1))/4;
        // vector<bool> v3(n+1,false);
        cout<<" k = "<<k;
        // for(int i=n;i>0;i--) {
        //     if(i <= sum) {
        //         v1.push_back(i);
        //         v3[i] = true;
        //         sum -= i;
        //     }
        // }

        // for(int i=1;i<=n;i++) {
        //     if(!v3[i]) {
        //         v2.push_back(i);
        //     }
        // }
        // print_vector(v1,v2);

        vector<int> v(n+1,0),v1;
        for(int i=1;i<=n;i++) {v[i-1] = i;}
        
        findSubsequencewithSum_k(v,v1,0,0,k,n);

        for(auto i:ans) {cout<<i<<" ";}

    }


}