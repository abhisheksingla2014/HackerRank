#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string.h>
using namespace std;


int main() {
    string s;
    cin>>s;
    int n = s.length();
    int x = 0;
    int y =1;
    int flag = 1;
    while(flag && n!=0)
        {
        flag = 0;
        x = 0;
        y =1;
        while(y<n){
            if(s[x] == s[y]){
                flag = 1;
                for(int i=y+1;i<n;i++){
                    s[i-2] = s[i];}
                n = n-2;
            }
            else{
                x=y;
                y = y+1;
            }
        }

    }
    if(n == 0)
        cout<<"Empty String";
    else
        for(int i=0;i<n;i++){
            cout<<s[i];
        }
    return 0;
}
