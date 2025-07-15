//pop ans push
#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
    int n = 10;
    int arr[n] = {4,1,2,5,4,3,4,4,8,2,7};
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    stack<int>st; 
    int ans[n];
    ans[n-1] = -1;
    st.push(arr[n-1]);

    for(int i=n-2;i>=0;i--){
        while(st.size()>0 && arr[i]>=st.top()){
            st.pop();  //pop smaller elements than arr[i]
        } 
        if(st.size()==0) { //stack empty
            ans[i] = -1;
        }
        if(arr[i]<st.top())  ans[i] = st.top();
            st.push(arr[i]);
        
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}