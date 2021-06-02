#include<bits/stdc++.h>
#include <string>
using namespace std;

bool isMatching(char a,char b) {
    if((a=='[' && b==']') || (a=='(' && b==')' )||( a=='{' && b=='}')){
        return true;
    } 
    else return false;
}
bool check(string s) {
    stack<char> st;
    for(int i=0;i<s.length();i++) {
        if(s[i]=='{'||s[i]=='[' || s[i]=='('){
            st.push(s[i]);
        }
        else {
            if(!st.empty()) 
            {
                if(isMatching( st.top(),s[i])==false)
                return false;
                else 
                st.pop();
            }
        }
        
    }
   return st.empty();
}
int main() {
    string s;
    cin>>s;
    cout<<check(s);
}