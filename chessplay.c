// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int T;
    scanf("%d",&T);
    for(int i=0;i<T;i++){
    int N,X;
    scanf("%d%d",&N,&X);
    if(N>=X){
        printf("%d",0);
    }
    else if(N<X && X<2*N){
        printf("%d",2*X-2*N);
    }
    }
    return 0;
}