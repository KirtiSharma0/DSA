//largest three elements in array
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Array size = ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int L = -1;
    int S = -1;
    int T = -1; 

    for(int i=0;i<n;i++){
        if(L<arr[i]){
            L = arr[i];
        }
    }
        cout<<L<<" ";

        for(int i=0;i<n;i++){
         if(S<arr[i] && arr[i]!=L){
            S = arr[i];
         }
        }
        cout<<S<<" ";
        for(int i=0;i<n;i++){
        if(T<arr[i] && arr[i]!=L && arr[i]!=S){
            T = arr[i];
        }
    }
        cout<<T;
return 0;
}