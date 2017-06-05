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
    string s;
    cin>>s;
    int c =0;
    for(int i=0;i<s.length()-2;i++){
        if(s[i] == '0' && s[i+1] == '1' && s[i+2] == '0' ){
            s[i+2] = '1';
            i = i+2;
            c++;
        }
    }
    cout<<c;
    return 0;
}
