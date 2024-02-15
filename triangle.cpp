// Online C++ compiler to run C++ program online
#include <iostream>
#include<string.h>
#include<math.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i]=pow(2,a[i]);
        }
        int c=0;
        for(int k=0;k<n;k++){
        for(int j=k;j<n-1;j++){
        for(int i=j;i<n-2;i++){
            if(b[k]+b[j+1]>b[i+2]){
                c++;
            }
        }
        }
    }

        cout<<c<<endl;
    }

    return 0;
}