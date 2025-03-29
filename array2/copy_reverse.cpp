//write a program to copy elements and paste it to another array in reverse order
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v1;
    int q;
    cin>>q;
    v1.push_back(q); //array input
    int j ;
    int new;
    vector<int>v2;
    for(int i=0;i<v2.size();i++){
        for(int i=0;i<v2.size();i++)
         // i+j = size-1
         j = v1.size()-1-i;
         new = v2[i]= v1[j];
    }  
     cout<<new;
    return 0;
}