#include<stdio.h>

int gcd(int m,int n){
	if(m!=0)
		return gcd(n%m,m);
	
	else{
		return n;
	}
}

int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	int a=gcd(m,n);
	printf("%d",a);
}
