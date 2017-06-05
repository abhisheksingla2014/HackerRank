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
    int k;
    cin>>k;
    for(int i=0;i<s.length();i++){
        if((int)s[i]<=90 && (int)s[i]>=65)
        {
            s[i] = (char)(((int)s[i] -65 +k)%26 + 65);
        }
        else if((int)s[i]<=122 && (int)s[i]>=97){
            s[i] = (char)(((int)s[i] -97 +k)%26 + 97);
        }
    }
    cout<<s;
    return 0;
}
