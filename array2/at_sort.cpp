#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    cout<<v[1]<<endl;
    //print using at
    cout<<v.at(2)<<endl;

    for(int i=0; i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;

    // sort operation 
    // sort(v.begin(),v.end());
    // for(int i=0;i<v.size();i++){
    //     cout<<v.at(i)<<" ";

    // }
}