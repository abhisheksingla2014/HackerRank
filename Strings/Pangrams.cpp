#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string s;
    getline(cin,s);
    int arr[26] = {0};
    for(int i=0;i<s.length();i++){
        if(s[i]<=90 && s[i]>=65){
            arr[(int)s[i] - 65]++;
        }
        else if(s[i]<=122 && s[i]>=97){
            arr[(int)s[i] - 97]++;
        }
    }
    for(int i=0;i<26;i++){
        if(arr[i]==0){
            cout<<"not pangram";
            return 0;
        }
    }
    cout<<"pangram";
    return 0;
}
