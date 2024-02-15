// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
   int t;
   cin>>t;
   for(int i=0;i<t;i++){
       int a,b;
       cin>>a>>b;
       if(((max(a,b)/2)<=min(a,b)) && (a+b)%3==0){
           cout<<"YES"<<endl;
       }
       else{
           cout<<"NO"<<endl;
       }
   }

    return 0;
}