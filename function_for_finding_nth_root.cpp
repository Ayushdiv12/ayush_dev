// Online C++ compiler to run C++ program online
#include <iostream>
#include<math.h>
using namespace std;
int fun(int n,int k){
    float a=1.0/k;
    return pow(n,a);
}



int main() {
    int n,k;
    cin>>n>>k;
    cout<<fun(n,k)<<endl;
   
    return 0;
}