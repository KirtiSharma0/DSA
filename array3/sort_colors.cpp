//leetcode 75 : sort the colors in order RWB represented by 0,1,2
//ip {2,0,2,1,1,0}  op {0,0,1,1,2,2}

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n0=0 ;
    int n1=0 ; 
    int n2=0 ;
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<endl;

    for(int i=0;i<n;i++){
       if(v[i]==0) n0++;
       else if(v[i]==1) n1++;
       else if(v[i]==2) n2++;
    } 
    
    for(int i=0;i<n;i++){
        if(i<n0) v[i]=0;
        else if(i<(n0+n1)) v[i]=1;
        else if(i<(n0+n1+n2)) v[i]=2;
        cout<<v[i]<<" ";
    }
    return 0;
}