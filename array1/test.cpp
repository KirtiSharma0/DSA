#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"size of array = ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max = arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i]) {
            max = arr[i];
        }
    }
    cout<<max<<endl;
    
    int second;
    second = arr[0];
    for(int i=0;i<n;i++){
        if(second<arr[i] && arr[i]!=max){
             second = arr[i];
        }
    }
    cout<<second;
    return 0;
}