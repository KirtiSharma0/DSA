#include<iostream>
#include<vector>
using namespace std;
int main(){ 
    int n; //array size
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    
//reverse
    int i =0;
    int j = v.size()-1;
    while(i<=j){
        //swapping of v[i] and v[j];
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;  
        
    } 
    for(int k=0 ; k<v.size();k++){
        cout<<v[k];
    }
    return 0;
}