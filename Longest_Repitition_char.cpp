#include<bits/stdc++.h>
using namespace std;

// Input: ATTCGGGA
// Output: 3

int main() {

    string s;
    cin>>s;
    int final_count = 1;
    int temp_count = 1;
    for(int i=1;i<s.length();i++) {

        if(s[i] == s[i-1]) {
            temp_count++;
            final_count = max(temp_count,final_count);
        }
        else {
            final_count = max(temp_count,final_count);
            temp_count = 1;
        }
    }
    cout<<final_count;
}