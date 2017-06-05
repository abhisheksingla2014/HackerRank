#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool binary(int* arr,int inp,int i,int j){
    int mid= (i+j)/2;
    if(i<=j){
    if(arr[mid] == inp){
        return true;
    }
    else if(arr[mid] > inp){
        return binary(arr,inp,i,mid-1);
    }
    else{
        return binary(arr,inp,mid+1,j);
    }
    }
    else{
        return false;
    }
}

int main() {
    string s;
    cin>>s;
    int n;
    cin>>n;
    int arr[s.length()];
    int prev = s[0];
    arr[0] = s[0] - 'a' +1;
    for(int i=1;i<s.length();i++){
        if(s[i] == prev){
            arr[i] = arr[i-1] + s[i] - 'a' +1;
        }
        else{
            arr[i] = s[i] - 'a' +1;
            prev = s[i];
        }
    }
    sort(arr,arr+s.length());
    int inp;
    for(int i=0;i<n;i++){
        cin>>inp;
        if(binary(arr,inp,0,s.length()-1)){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
    }
    return 0;
}
