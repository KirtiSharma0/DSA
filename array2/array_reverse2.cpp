#include<iostream>
#include<vector>
using namespace std;
int main(){  
    int n;
    cin>>n;
    vector<int>v(n);
     
    for(int i=0;i<n;i++){
        cin>>v[i];
    } 
     
    vector<int>v2(n);
    int i = n-1;
    int j = 0;
    while(i>=0 && j<n){
        v2[j] = v[i];
        j++;
        i--;
    }
    for(int i=0;i<n;i++){
        cout<<v2[i];
    } 

     return 0;
}