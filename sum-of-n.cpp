
// parameterized way( solved using passing parameters)
#include<bits/stdc++.h>
using namespace std;
void sumofn(int n,int sum){
    if(n<1){
        
        cout<<sum;
        return;
    }
    sumofn(n-1,sum+n);
}
int main(){
    int n;
    cin>>n;
    cout<<"sum of 1 to n using recursion is:"<<endl;
    sumofn(n,0);
    return 0;
}


// functional way( solved using passing functions. It is easy thean parameterized)
#include<bits/stdc++.h>
using namespace std;
int sumofn(int n){
    if(n==0){
        return 0;    //by this condition sum(0)==0
    }
    return n + sumofn(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<"sum of 1 to n using recursion(functinal) is:"<<endl;
    cout<<sumofn(n);  
    return 0;

}
