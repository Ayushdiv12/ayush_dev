#include <stdio.h>
#define ll long long
int main()
{
   int t;
   scanf("%d",&t);
   for(int i=0;i<t;i++){
       ll n,k;
       scanf("%lld%lld",&n,&k);
       if(n%2==0){
           if(n>k){
               printf("%d\n",k);
           }
           else if(k>n){
            if(k%n==0){
              printf("%d\n",n);
           }
           else{
           printf("%d\n",k%n);
       }
       }
           else if(k==n){
           printf("%d\n",k);
            }
       }


       else if(n%2!=0){
        
           if((n/2)>=k){
               printf("%d\n",k);
           }
           else if(k>(n/2) && (k<n)){
               printf("%d\n",k+1);
           } 
           else if(k>n){
           int gap=(n/2)*((k-k%n)/n)-2;
           int ans=(gap+k);
           if(ans%n==0){
            printf("%d\n",n);
           }
           else{
           printf("%d\n",ans%n);
           
       }       
   }
}
}
    return 0;
}
