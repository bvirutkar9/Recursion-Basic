// checking if string is a Plaindrom or not using recursion 

#include<bits/stdc++.h>
using namespace std;

bool isPalindrom(string str,int left,int right){
    int n=str.length();
    if(str[left]!=str[right]){
        return false;
    }
    if(left>right) return true;
    return isPalindrom(str,left+1,right-1);
}
int main(){
    

    string str="arahh";

    int n=str.length()-1;
    if(isPalindrom(str,0,n)){
        cout<<"string is palindrom";
    }
    else{
        cout<<"string is not palindrom";
    }

    

    return 0;
}