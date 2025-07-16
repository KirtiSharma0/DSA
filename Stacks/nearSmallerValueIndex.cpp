//ip = 2 5 1 4 8 3 2 5
//op = -1 0 -1 2 3 2 2 6

#include<iostream>
#include<stack>
using namespace std;
int main(){
    int n = 8;
    int arr[n] = {2, 5, 1, 4, 8, 3, 2, 5};
    int ans[n];
    ans[0] = -1 ; 
    stack<int>st;

    for(int i=1;i<n;i++){
        while(st.size()>0 && arr[i]<st.top()){
           st.pop();
        }
        if(st.size()==0){
            ans[i] = -1;
        }
        if(arr[i]>st.top()){
            ans[i] = i;
            st.push(arr[i]);
        }
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}