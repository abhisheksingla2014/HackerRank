#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {

    string s;
    int arr[26],d=0;
    for(int i=0;i<=25;i++)
{
        arr[i]=0;
    }
    cin>>s;
      for(int i=0;i<s.size();i++)
{
       int a=s[i];
          arr[a-97]++;
    }
    for(int i=0;i<=25;i++){
        if(arr[i]%2==1)
            d++;
    }
    if(d==0||d==1)
      cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
