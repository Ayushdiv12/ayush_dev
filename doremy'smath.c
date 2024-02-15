// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int t;
   scanf("%d",&t);
   for(int i=0;i<t;i++){
       int n,a[n];
       scanf("%d",&n);
       for(int i=0;i<n;i++){
           scanf("%d",&a[i]);
       }
       int sum=n;
       for(int i=0;i<n;i++){
       for(int j=i;j<n;j++){
        int b=a[j]-a[i];
                if(b>0 && (b!=a[i]) && (b!=a[j])){
                  sum++;  
                }
            }
       }
       printf("%d\n",sum);
   }
  

    return 0;
}