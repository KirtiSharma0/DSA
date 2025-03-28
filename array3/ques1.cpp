//move all negative numbers to beginning and positive nos. to end with constant extra space
#include <iostream>
#include <vector>
using namespace std;

void movenum(vector<int>& v){
    int n = v.size();
    int i = 0;
    int j = n-1;
    while(i!=j){
        if(i>0) i++;
        if(j<0) j--;
        if(i<0 && j>0){
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        }
    }
}

int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(-2);
    v.push_back(3);
    v.push_back(-4);
    v.push_back(-5);
    v.push_back(6);
    v.push_back(8);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    movenum(v);
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
    return 0;
}