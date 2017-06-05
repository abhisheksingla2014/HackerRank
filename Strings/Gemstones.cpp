#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    int arr2[26];
    int arr[26] = {0};

    for(int j=0;j<n;j++){
        for(int i=0;i<26;i++){
            arr2[i] = 0;
        }
        string s;
        cin>>s;
        for(int i=0;i<s.length();i++){
            if(arr2[(int)s[i] -97] !=1){
                arr2[(int)s[i] -97] =1;
            }
        }
        for(int i=0;i<26;i++){
            arr[i] += arr2[i];
        }
    }
    int c=0;
    for(int i=0;i<26;i++){
            if(arr[i] == n){
                c++;
            }
        }
    cout<<c;
    return 0;
}
