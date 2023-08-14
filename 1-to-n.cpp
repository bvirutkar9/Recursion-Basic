#include<bits/stdc++.h>
using namespace std;
void Rec(int i,int n){
    if(i>n){
        return;
    }
    cout<<i<<endl;
    Rec(i+1,n);
}
int main(){
    int n;
    cin>>n;
    cout<<"1 to n using recursion is:"<<endl;
    Rec(1,n);
    return 0;
}