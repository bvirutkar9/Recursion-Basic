// printing fibonacci upto n using naive and recursion 

// #include<bits/stdc++.h>
// using namespace std;
// vector<int> fibo(int n){
//     vector<int>ans;
//     int i=0;
//     while(ans.size()<=n){
//         if(i==0){
//             ans.push_back(i);
//         }
//         else if(i==1){
//             ans.push_back(i);
//         }
//         else{
//             ans.push_back(ans[i-1]+ans[i-2]);
//         }
//         i++;
//     }
//     for(int i=0;i<ans.size();i++){
//         cout<<ans[i]<<" ";
//     } 
    
// }
// int main(){
//     int n=5;
//     cout<<"fibonacci upto n using recursion is:"<<endl;
//     fibo(n);  
//     return 0;

// }




// this approach is using recursion (0th index) 

#include<bits/stdc++.h>
using namespace std;
void fibo(int n,int current,int aageWala){
    if(n<0) return;
    cout<<current<<" ";
    fibo(n-1,aageWala,current+aageWala);
}
int main(){
    int n=5;
    cout<<"fibonacci upto n using recursion is:"<<endl;
    fibo(n,0,1);  
    return 0;

}