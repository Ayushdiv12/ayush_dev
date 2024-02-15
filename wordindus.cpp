// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
#include<string.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string str;
        cin>>str;
        int a=str.size();
        if(a>10){
            cout<<str[0]<<a-2<<str[a-1]<<endl;
        }
        else{
            cout<<str<<endl;
        }
    }

    return 0;
}