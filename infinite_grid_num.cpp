// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long int y,x;
        cin>>y>>x;
        long long int a=(max(x,y)-1)*(max(x,y)-1) + min(x,y);
        cout<<a<<endl;
    }
        

    return 0;
}