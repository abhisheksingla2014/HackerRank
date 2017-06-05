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
    for(int i=0;i<n;i++){
        cin>>s;
        int c =0;
        for(int j=0;j<s.length()/2;j++){
            c = c +abs(s[j]-s[s.length()-1-j]);
        }
        cout<<c<<"\n";
    }
    return 0;
}
