//find element x in array. take array and x as input from user

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array = ";
    cin>>n; 
    int arr[n];  //take input
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    
    int x; 
    cout<<"enter element for searching = ";
     cin>>x;

    //search

     for(int i=0;i<=n-1;i++){
         if(arr[i]==x) cout<<"element Found"; 
     }
    return 0;
}