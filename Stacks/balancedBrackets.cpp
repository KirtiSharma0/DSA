#include<iostream>
#include<stack>
using namespace std;
int main(){
    string s = "(())(()";
    int n = s.length();
    stack<char>st;
    for(int i=0;i<n;i++){
      if(s[i]=='('){
        st.push(s[i]);
      }
      if(s[i]==')' && st.top()=='('){
        st.pop();
      }
    }
    if(st.size()>0) cout<<"false";
    else cout<<"true";
}