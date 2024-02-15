#include <bits/stdc++.h>
#include<utility>
using namespace std;



int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    while(x!=0){
	    if(x>y) {
	        swap(x,y);
	    }
	    
	    else{
	        int v;
	        v=x;
	        x=y-t;
	        y=v;
	    }
	    }
	    
	    cout<<y<<endl;
	}

}
