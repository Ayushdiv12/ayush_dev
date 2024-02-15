// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int min=a[0];
    
    for(int i=0;i<n;i++){
        if(a[0]>a[i]) {
            min=a[i];
        }
        
    }
    
    if(min==a[0]){
    printf("bob\n");
    }
    else{
     printf("alice\n");
        }
    }
    return 0;
}