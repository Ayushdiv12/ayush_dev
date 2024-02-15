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

int n,q;
   cin>>n>>q;
   string str;
   cin>>str;
   char c[q];
   string s[q];
   s[0]=str;
   for(int i=0;i<q;i++){
       cin>>c[i];
       cout<<endl;
       s[i+1]=s[i]+ c[i];
   	
   }

   // for(int i=0;i<q;i++){
   // 	s[i]=str + c[i];
   // 	cout<<s[i]<<endl;
   // }
//getMaxOccurringChar(str);
for(int i=0;i<(q+1);i++){
    getMaxOccurringChar(s[i]);
}


}