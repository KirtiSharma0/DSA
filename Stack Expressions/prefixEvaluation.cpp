//reverse traversing

#include<iostream>
#include<stack>
using namespace std;

int solve(int val1,int val2, char op){
    if(op=='+') val1+val2;
    else if(op=='-') val1-val2;
    else if(op=='*') val1*val2;
    else if(op=='/') val1/val2;
}
int main(){
string s = "-/*+79483";
stack<int>st;
   for(int i=0;i<s.length();i++){
    if(s[i]==(s[i]-48)){  //digit
      st.push(s[i]);
    }
    if(s[i]=='+' ||s[i]=='-'|| s[i]=='*'||s[i]=='/'){  //perform calculation
        char op = s[i];
        int val1 = st.top();
        st.pop();
        int val2 = st.top();
        st.pop();

        int ans = solve(val1,val2,op);
        st.push(ans);     //push value of ans in stack
    }
   }
   cout<<st.top(); //answer
}