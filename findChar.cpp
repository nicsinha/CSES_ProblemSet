/*
Finding character whose all capital letter is rightmost and small letter is leftmost.
Input = aaAbBbBcC
Output = A,C
*/


#include<bits/stdc++.h>
using namespace std;

int main() {

    string input;
    cin>>input;

    int l = input.length() - 1;

    set<char> s;
    set<char> ans;

    while(l > 0) {
        if(input[l] >= 'a' && input[l] <= 'z') {

            char x = input[l] - 32;
            s.insert(x);
           
        }
        else {
            
            int Capitalindex = l;
            int SmallIndex = -1;
            char ch = input[l];
            
            for(int i=l-1;i>=0;i--) {
                char tempch = input[i] - 32;

                if(ch == input[i]) {
                    Capitalindex = i;
                }
                
                if(ch == tempch) {
                    SmallIndex = max(SmallIndex,i);
                }      
            }
            if(SmallIndex!=-1 && Capitalindex > SmallIndex && s.find(ch) == s.end()) {
                ans.insert(ch);
            }
        }
        l--;
    }
    for(auto i:ans) {
        cout<<i<<" ";
    }
}