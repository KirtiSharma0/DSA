//find the last occurence of x in the array
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    int x=3;
    int index= -1;
    for(int i=0;i<v.size();i++){
        if(v[i]==x){
            index = i;
        }
    }
cout<<index;
return 0;
}