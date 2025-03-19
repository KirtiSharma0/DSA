#include<iostream>
using namespace std;

int fact(int x){
    int f=1;
    for(int i=1;i<=x;i++){
        f = f*i;
    }
    return f;
}
int main(){
    int n;
    cout<<"Enter n = ";
    cin>>n;
    int r;
    cout<<"Enter r = ";
    cin>>r;

    int nfact = fact(n);
    int rfact = fact(r);
    int nrfact = fact(n-r);

    int nCr = nfact/(rfact*nrfact);
    cout<<nCr;

    int nPr = nfact/rfact;
    cout<<nPr<<endl;
    
    return 0;
}