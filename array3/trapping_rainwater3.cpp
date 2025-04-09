#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n; //size
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //left max
    int maxL=arr[0];
    int ansL[n];
    ansL[0] =-1;
    for(int i=1;i<n;i++){
        if(arr[i]>maxL){
            ansL[i] = -1;
            maxL = arr[i];
        }
        else if(maxL>arr[i]){
            ansL[i] = maxL;
            
        }
    }

    for(int i=0;i<n;i++){
        cout<<ansL[i]<<" ";
    }
     cout<<endl;
    //right max
    int maxR = arr[n-1];
    int ansR[n];
    ansR[n-1] = -1;

    for(int i=(n-2);i>=0;i--){
        if(arr[i]>maxR){
            ansR[i] = -1;
            maxR = arr[i];
        }
        else if(maxR>arr[i]){
            ansR[i] = maxR;
        }
    }

    for(int i=0;i<n;i++){
        cout<<ansR[i]<<" ";
    }

cout<<endl;

    //total water stored in building
    int totalwater=0;
    for(int i=0;i<n;i++){  //heights of bulding
        if(ansL[i]==-1 || ansR[i]==-1){
          totalwater = totalwater+0;  //no water stored
        }
        else if (ansL[i]!=-1 && ansR[i]!=-1) {
           int z = min(ansL[i],ansR[i]) ;  //find min value
            
           //subract the min value from the current height of building
           int sub = z-arr[i];
           totalwater = totalwater+sub;
        }
    }
       cout<<totalwater;
    return 0;
}