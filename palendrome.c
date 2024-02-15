// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int n,m;
        scanf("%d%d",&n,&m);
        int a[n][m];
    for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int sum=0;
        for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(a[i][j]!=a[n-i][m-i]){
            sum++;
        }
       
    }
    }
    printf("%d\n",sum);
    }
    return 0;
}