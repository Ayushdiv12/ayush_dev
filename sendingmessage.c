#include<stdio.h>
int main(){
int t;
printf("enter t :");
scanf("%d",&t);
for(int i=0;i<t;i++){
    int x,y,k;
    printf("\nenter x :");
    scanf("%d",&x);
    printf("\nenter y :");
    scanf("%d",&y);
    printf("\nenter z :");
    scanf("%d",&k);
if(x>y){
    printf("\n%d",0+k+x);
}
else if(y>x){
    if((y-x)>=k){
        printf("\n%d",2*y-x-k);
    }
    else if((y-x)<k){
printf("\n%d",(3*x+3*k-2*y));
    }

}
}

    return 0;
}
