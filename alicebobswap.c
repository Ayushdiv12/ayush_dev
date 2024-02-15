
#include <stdio.h>

int swap(int *x,int *y){
    int t;
    t=*x;
    *x=*y;
    *y=t;
}

int main() {
    int t;
    scanf("%d",t);
    for(int i=0;i<t;i++){
        int n,a[n];
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        
        for(int i=0;i<n;i++){
        if(i%2==0){
        if(a[0]==0) printf("Bob ");
        else{
        
        a[0]--;
        swap(&a[0],&a[i+1]);
        }
            }
        else if(i%2!=0){
        if(a[0]==0) printf("alice ");
        else{
        a[0]--;
        swap(&a[0],&a[i]);
        }
            }
        
    }
}
}

    return 0;
}