#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){
int t;
cin>>t;
for(int i=0;i<t;i++){
	int n;
	cin>>n;
	string s;
	string f;
	getline(cin,s);
	getline(cin,f);
	
	int a=0;
	int b=0;
	int d;
	d=s.length();
for(int i=0;i<d;i++){
	
	
     if(s[i]==1 && f[i]==0){
		a++;
	}
	else if(s[i]==0 && f[i]==1) {
		b++;
	}
// }
}
int c=max(a,b);
cout<<c<<endl;
}



	return 0;
}