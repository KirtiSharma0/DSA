#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[] = {5,3,1,4,2};
    int n = 5;
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<endl;

    //selection sort
    for(int i=0;i<n;i++){
        int min=INT16_MAX;
        int mindx = -1;
        for(int j=i;j<n;j++){  //mininum element calculation 
           if(arr[j]<min){   
            min = arr[j];
            mindx = j;
           }
        }
        //swap first index element with min
        swap(arr[i],arr[mindx]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }

return 0;
}