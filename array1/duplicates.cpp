#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Size of array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int a=arr[0];
    bool flag = false; //No duplicates
    for(int i=1;i<n;i++){
        if(a==arr[i]){
            bool flag = true;
            cout<<"Duplicates";
            break;
        }
        else {
        bool flag = false;
        cout<<"No duplicates";
        break;
        }
    }
return 0;
}