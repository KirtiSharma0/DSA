#include<iostream>
#include<vector>
using namespace std;

    void display(vector<int>& a){
        for(int i=0;i<a.size();i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    
    void reversepart(int i,int j,vector<int>&a){
        while(i<=j){
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;
            j--;
        }
        return ;
    }

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int start;
    cout<<"start index = ";
    cin>>start;
    int end;
    cout<<"end index = ";
    cin>>end;
    
    reversepart(start,end,a);
    display(a);
}