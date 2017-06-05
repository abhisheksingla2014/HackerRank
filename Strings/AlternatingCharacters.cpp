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
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        int c =0;
        for(int i=0;i<s.length()-1;i++){
            if(s[i] == s[i+1]){
                c++;
            }
        }
        cout<<c<<"\n";
    }
    return 0;
}
