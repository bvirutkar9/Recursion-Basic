// factorial of n numbers 


// parametrized way 
#include<bits/stdc++.h>
using namespace std;
void factorial(int n,int fact){
    if(n<1){
        cout<<fact;
        return;
    }
    factorial(n-1,fact*n);
}
int main(){
    int n;
    cin>>n;
    cout<<"factorial of n using recursion(parametrized way) is:"<<endl;
    factorial(n,1);
    return 0;
}


// functional way 
#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    if(n==0){
        return 1;   //by this condition factorial(0)=1;(if we return 0 then our value become 0 as 5*4*3*2*1*0=0)
    }
    return n*factorial(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<"factorial of n using recursion(functional way) is:"<<endl;
    cout<<factorial(n);
    return 0;
}