#include<iostream>
using namespace std;
int main(){
    int arr[8] = {2,3,4,5,1,6,7,3};
    int k = 2;   //window size
    int pro = 1;
    //calculate for first window ; 2 3
    for(int i=0;i<k;i++){
        pro = pro * arr[i];
    }

    //applying sliding window for other pairs
    int maxpro = INT16_MIN;
    int nextproduct = 1;
    int i = 1;
    int j = k;
    while(j<8){
        nextproduct = pro/arr[i-1];  //to remove
        nextproduct = pro * arr[j];  //to add
        i++;
        j++;
    }
    if(maxpro < nextproduct) maxpro = nextproduct;
    cout<<nextproduct;
}