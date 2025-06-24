#include<iostream>
using namespace std;
class Stack { //user defined
public:
      int arr[5];
      int idx = -1;
      void push(int val){
        idx++;
        arr[idx] = val;
      }
      void pop(){
        idx--;
      }
      int top(){
        return arr[idx];
      }
      int size(){
        return idx+1;
      }
};
int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
    st.pop(); //removed element
    cout<<st.size()<<endl;
    cout<<st.top()<<endl;
}