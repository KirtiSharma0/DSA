#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v(5);
    for(int i=0;i<5;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for(int i=0;i<5;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}