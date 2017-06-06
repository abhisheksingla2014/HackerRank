#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    for(int o=0;o<t;o++){
        string s;
        cin>>s;
        int c =0;
        int count = 0;
        int arr1[26] = {0};
        int arr2[26] = {0};
        for(int i=0;i<s.length();i++){
            for(int j=i+1;j<s.length();j++){
                int l = i;
                int k = j;
                memset(arr1,0,sizeof(arr1));
                memset(arr2,0,sizeof(arr2));
                while(k<s.length()){
                    arr1[s[l] - 'a']++;
                    arr2[s[k] - 'a']++;
                    l++;
                    k++;
                    int p;
                    for(p=0;p<26;p++){
                        if(arr1[p] != arr2[p]){
                            break;
                        }
                    }
                    if(p == 26){
                        count++;
                    }
                }
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}
