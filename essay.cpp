
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,c,q;
        cin>>n>>c>>q;
        string s;
        cin>>s;

        for(int i=0;i<c;i++){
        long long l,r;
        cin>>l >>r;
         s=s+s.substr(l-1,r-l+1);
        }
    
        
        for(int i=0;i<q;i++){
            int k;
            cin>>k;
            cout<<s[k-1]<<endl;
           
        }
    }
    return 0;
}