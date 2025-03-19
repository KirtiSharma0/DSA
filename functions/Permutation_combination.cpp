#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n = ";
    cin>>n;
    int r;
    cout<<"Enter r = ";
    cin>>r;

    int nfact = 1; //n!
    for(int i=2;i<=n;i++){
        nfact  = nfact * i;
    } 
    int rfact = 1;  //r!
    for(int i=2;i<=r;i++){
        rfact  = rfact * i;
    } 
    int nrfact = 1; //(n-r)!
    for(int i=2;i<=n-r;i++){
        nrfact  = nrfact * i;
    } 

    int nCr = nfact/(rfact*nrfact);
    cout<<nCr<<endl;

    int nPr = nfact/rfact;
    cout<<nPr<<endl;
    
    return 0;
}