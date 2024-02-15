#include <iostream>
#include<string.h>
using namespace std;

int main() {
  int t; cin>>t;
while(t--){
  int n;
  cin>>n;
  string s,f;
  cin>>s;
  cin>>f;
  int a=0; int b=0;
  for(int i=0;i<n;i++){
    if(s[i]=='1' && f[i]==0){
    a++;
  }
  else if(s[i]=='0' && f[i]=='1') {
    b++;
  }
  else{
    continue;
  }
  }
 
  int c=max(a,b);
  cout<<c<<endl;
  
}
    return 0;
}