//check the given array sorted or not
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n; //size
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //dec order
    bool flag = true; //sorted
    for(int i=0;i<n-1;i++){
        if(arr[i]<arr[i+1]){
            flag = false;
            break;
        }
    }
    // if(flag==true) cout<<"sorted";
    // else if (flag==false) cout<<"Not sorted";

    //inc
    bool flag2 = true; //sorted
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            flag2 = false;
            break;
        }
    }
    if(flag==true || flag2==true) cout<<"sorted";
    else if (flag==false && flag2==false) cout<<"Not sorted";
    return 0;
}