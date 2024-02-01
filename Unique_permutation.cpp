#include<bits/stdc++.h>
using namespace std;

set<string> res;

void permutation(string s,int len,int index) {

    if(index == len) {
        res.insert(s);
        return;
    }

    for(int i=index;i<len;i++) {
        swap(s[i],s[index]);
        permutation(s,len,index+1);
        swap(s[i],s[index]);
    }
}
int main() {

    string s;
    cin>>s;
    int n = s.length();
    sort(s.begin(),s.end());
    permutation(s,n,0);
    cout<<res.size()<<endl;


    for(auto i:res){cout<<i<<endl;}

    return 0;


}