#include<iostream>
#include<stack>
using namespace std;
int pr(char ch){
    if(ch=='+' || ch=='-') return 1;  //priority power 1
    if(ch=='/' || ch=='*') return 2;  //priority power 2
}

int solve(int n1, int n2, int ch){
    if(ch=='+') return n1+n2;
    else if(ch=='-') return n1-n2;
    else if(ch=='/') return n1/n2;
    else if(ch=='*') return n1*n2;
}
int main(){
    string s = "2+6*4/8-3";
    stack<int>st;   //digit stack
    stack<char>op;  //operator stack

    //traverse string
    for(int i=0;i<s.length();i++){

        //check s[i] is digit
        int ascii = (int)(s[i]);
        if(ascii>=48 && ascii<=57){  //ascii value of 0 to 9
            st.push(s[i]-48);        //ascii value - int = actual value
        }
        else { //it is character +*/-
            //priority of s[i] > priority of op.top()
        if(op.size()==0 || pr(s[i])>pr(op.top()) ) op.push(s[i]);
        
        else {   //solve calculation  priority of (s[i]) <= priority of (op.top())
          while(op.size()>0 && pr(s[i]) <= pr(op.top())){
          //n1 op n2
          char ch = op.top();
          op.pop();
          int n2 = st.top();
          st.pop();
          int n1 = st.top();
          st.pop();

          int ans  = solve(n1,n2,ch);   //function

          //then push the ans in stack
          st.push(ans);
          }
          op.push(s[i]);
        }
        }
    } 

    //the stack op can have some values so make it empty
    while(op.size()>0){
        //perform the calculation
        char ch = op.top();
          op.pop();
          int n2 = st.top();
          st.pop();
          int n1 = st.top();
          st.pop();
          int ans  = solve(n1,n2,ch);   //function
          //then push the ans in stack
          st.push(ans);
    }

    cout<<st.top();
    
}