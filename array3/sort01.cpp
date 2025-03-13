//sort array of 0 and 1 by method
//sort the array of 0 and 1;
#include<iostream>
#include<vector>
using namespace std;

 void sort01(vector<int>& v){
    int n = v.size();
    int numZ = 0;
    int numO = 0;
    for(int i=0;i<n;i++){
        if(v[i]==0) numZ++;
        else numO++;
    }
    for(int i=0;i<n;i++){
        if(i<=numZ){
           v[i]=0;
        }
        else v[i]=1;
   }
 }
  
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    //two pass method
    sort01(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}