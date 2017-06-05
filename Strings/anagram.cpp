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
    int arr[26];
    for(int j=0;j<n;j++){
        string s;
        cin>>s;

        if(s.length()%2 == 1){
            cout<<"-1\n";
            continue;
        }
        for(int i=0;i<26;i++){
            arr[i] = 0;
        }
        for(int i =0;i<s.length()/2;i++){
            arr[s[i] -'a']++;
        }
        for(int i =s.length()/2;i<s.length();i++){
            arr[s[i] -'a']--;
        }
        int c =0;
        for(int i =0;i<26;i++){
            if(arr[i] > 0){
                c = c+ arr[i];
            }
        }
        int d =0;
        for(int i =0;i<26;i++){
            if(arr[i] < 0){
                d = d+ arr[i];
            }
        }
        cout<<min(c,abs(d))<<"\n";
    }
    return 0;
}
