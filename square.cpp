#include <iostream> 
 
  
using namespace std; 
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int x[4],y[4];
		for(int i=0;i<4;i++){
			cin>>x[i]>>y[i];
			cout<<endl;
		}
		int min1=x[0];
		int min2=y[0];
		int max1=x[3];
		int max2=y[3];
		for(int i=1;i<4;i++){
			if(x[i]<min1){
				min1=x[i];
			}
		}
        for(int i=0;i<3;i++){
			if(x[i]>max1){
				max1=x[i];
			}
		}

        for(int i=1;i<4;i++){
			if(y[i]<min2){
				min2=y[i];
			}
		}
        for(int i=0;i<3;i++){
			if(y[i]>max2){
				max2=y[i];
			}
		}
		int a,b;
		a=max1-min1;
		b=max2-min2;
		int c;
		c=a*b;
		cout<<c<<endl;


	}
	return 0;
}