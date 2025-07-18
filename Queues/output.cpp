#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    //output
    for(int i=1;i<=q.size();i++){
        int x = q.front();
        cout<<x<<" ";
        q.pop();  //front element pop
        q.push(x);
    }

}