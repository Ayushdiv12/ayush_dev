
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int a,s;
        cin>>a>>s;
        int b;
        for(int i=1;i<sizeof(s);i++){
            if((s%pow(10,i))<(a%pow(10,i)){
              b+=(s%pow(10,i+1))-(a%pow(10,i));
              s=s-(s%pow(10,i+1));
              a=a-(a%pow(10,i));
            }
            else if((s%pow(10,i))>=(a%pow(10,i))){
                b+=(s%pow(10,i))-(a%pow(10,i));
                 s=s-(s%pow(10,i));
                 a=a-(a%pow(10,i));
            }
       //     else if(s%pow(10,i)<a%pow(10,i) && sizeof(a)==sizeof(s)){
        //        printf("%d",-1);
         //   }
        
        else if((s%10)<(a%10) && sizeof(a)==sizeof(s)){
            cout<<-1<<endl;
                
        }
    }
}
    return 0;
}