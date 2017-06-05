#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin>>t;
    string s;
    for(int j=0;j<t;j++){
        cin>>s;
        int y = s.length()-1;
        int i;
        for(i=0;i<s.length()/2;i++){
            if(abs(s[i+1]-s[i]) != abs(s[y]- s[y-1])){
                cout<<"Not Funny\n";
                break;
            }
            else{
                y--;
            }
        }
        if(i == s.length()/2)
            cout<<"Funny\n";
    }
    return 0;
}
