#include <iostream>
using namespace std;

int main() {
    int T;
	cin>>T;
	for(int i=0;i<T;i++){
	    int N,X;
	    cin>>N>>X;
	    if(X<=N){
	    	cout<<'0'<<endl;
	    }
else if(X>N && X<2*N){
	cout<<(2*X-2*N)<<endl;
}

	        	}
	return 0;
	    
}
