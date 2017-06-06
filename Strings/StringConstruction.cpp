#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string.h>
using namespace std;


int main() {
    int n;
    cin>>n;
    int arr[26];
    for(int j=0;j<n;j++){
        memset(arr,0,sizeof(arr));
        string s;
        cin>>s;
        int c =0;
        for(int i=0;i<s.length();i++){
            if(arr[s[i] - 'a'] == 0){
                arr[s[i] - 'a'] = 1;
                c++;
            }
        }
        cout<<c<<"\n";
    }
    return 0;
}
