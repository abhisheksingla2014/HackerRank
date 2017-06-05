#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int check_alternate(string s,int k,int l){
    int flag = 0;
    int count =0;
    int curr;
    for(int i=0;i<s.length();i++){
        if((int)s[i] == k+'a'){
            if(flag == 0){
                curr = s[i];
                flag = 1;
                count++;
            }
            else{
                if(curr == l+'a'){
                    curr = s[i];
                    count++;
                }
                else if(curr == k+'a'){
                    return -1;
                }
            }
        }
        else if((int)s[i] == l+'a'){
            if(flag == 0){
                curr = s[i];
                flag = 1;
                count++;
            }
            else{
                if(curr == k+'a'){
                    curr = s[i];
                    count++;
                }
                else if(curr == l +'a'){
                    return -1;
                }
            }

        }
    }
    return count;
}
int main() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int arr[26];
    int max = 0;
    for(int i=0;i<26;i++){
        arr[i] = 0;
    }
    for(int i=0;i<s.length();i++){
        arr[s[i]-'a'] = 1;
    }
    for(int i=0;i<26;i++){
        if(arr[i]!=1){
            continue;
        }
        for(int j=i+1;j<26;j++){
            if(arr[j] != 1){
                continue;
            }
            else{
                int x = check_alternate(s,i,j);
                if(x > max){
                    max = x;
                }
            }
        }
    }
    cout<<max;
    return 0;
}
