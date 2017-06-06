#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<stdio.h>
#include <string.h>

using namespace std;


int main() {
    int arr1[26];
    int arr2[26];
    int n;
    cin>>n;
    for(int j=0;j<n;j++){
        string s;
        cin>>s;
        string r;
        cin>>r;
        memset(arr1,0,sizeof(arr1));
        memset(arr2,0,sizeof(arr2));
        for(int i=0;i<s.length();i++){
            arr1[s[i] - 'a'] = 1;
        }
        for(int i=0;i<r.length();i++){
            arr2[r[i] - 'a'] = 1;
        }
        int i;
        for(i=0;i<26;i++){
            if(arr1[i] == 1 && arr2[i] == 1){
                cout<<"YES\n";
                break;
            }

        }
        if(i == 26){
                cout<<"NO\n";
        }

    }
    return 0;
}
