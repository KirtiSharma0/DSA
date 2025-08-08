#include<iostream>
using namespace std;

int pow (int x, int n){
   //if(n==0) return 1;
   if(n==1) return x;

   //return x*pow(x,n-1);  basic format
   //log format , dividing power into halfs
   if(n&2==0){
    int ans = pow(x,n/2);
    return ans*ans;
   }

   else {
    //odd power
    int ans = pow(x,n/2);
    return ans*ans*x;
   }
}
    
int main(){
    cout<<pow(3,8); //3 ki power 8
}