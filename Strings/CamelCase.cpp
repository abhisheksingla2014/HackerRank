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
    cin>>s;
    int c =1;
    for(int i=0;i<s.length();i++){
        if((int)s[i]<=90 && (int)s[i]>=65){
            c++;
        }
    }
    cout<<c;
    return 0;
}
