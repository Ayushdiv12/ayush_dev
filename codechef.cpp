// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
#include<string.h>
using namespace std;

char getMaxOccurringChar(string str)
{ 
	
	unordered_map<char,int>mp;
	
	
	int n = str.length();
	
	 
	char ans;
	
	
	int cnt=0;
	for(int i=0 ;i<n ; i++){
		 
		mp[str[i]]++;
		
		
		if(cnt < mp[str[i]]){
			ans = str[i];
			cnt = mp[str[i]];
			
		}
	}
	cout<<cnt<<" ";
	//return ans;
	
}

int main() {
    int t;
    cin>>t;
    while(t--){
   int n,q;
   cin>>n>>q;
   string str;
   cin>>str;
   char c[q];
   string s[q];
   for(int i=0;i<q;i++){
       cin>>c[i];
       cout<<endl;
       
   }
   for(int i=0;i<q;i++){
   	s[i]=str + c[i];
   }
getMaxOccurringChar(str);
for(int i=0;i<q;i++){
    getMaxOccurringChar(s[i]);
}
}
    return 0;
}