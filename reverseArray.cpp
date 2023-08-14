// reversing array using recursion 

#include<bits/stdc++.h>
using namespace std;
void reverse(vector<int> &arr,int left,int right){
    if(left>right){
        return;
    }
    swap(arr[left],arr[right]);
    reverse(arr,left+1,right-1);
}
int main(){
    int n;
    cin>>n;

    vector<int> arr;

    for(int i=0;i<=n;i++){
        cin>>i;
        arr.push_back(i);
    }

    cout<<"Original array is:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;


    reverse(arr,0,n-1);

    cout<<"Reverse array is:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}