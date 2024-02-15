#include <iostream>
#include<math.h>
using namespace std;
int main() {
    long long int n;
    cin>>n;
        long long int b=1e9 + 7;
    long long  mult=1 ;
    // a = (pow(2,n)) % (1000000007);
   for(int i=0 ; i<n ; i++){
       mult = mult*2;
       mult = (mult) % 1000000007;
       
   }

    cout<<mult % 1000000007<<endl;
    return 0;
}