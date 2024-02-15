// Online C compiler to run C program online

#include <stdio.h>
#define ll long long
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int n;
        scanf("%d",&n);
        ll a[n];
        for(int i=0;i<n;i++){
            scanf("%lld",&a[i]);
        }
        ll sum=0;
        for(int i=0;i<n-1;i++){
          if(a[i]!=0){
              int b=i;
              for(int j=b;j<n-1;j++){
                  sum+=a[j];
                  if(a[j]==0){
                      sum+=1;
                  }
                  
              } break; 
          }
            
        }
        printf("%lld\n",sum);
        
        
        
        
        
        
    }
    return 0;
}
   