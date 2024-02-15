#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char ch[10];
    for(int i=0;i<10;i++){
        cin>>ch[i];
        cout<<ch[i];
    }
    cout<<endl;
    ch[0]='b';
    for(int i=0;i<10;i++){
        if(i%2==0){
            ch[i]='a';
        }
        
    }
    for(int i=0;i<10;i++){
        cout<<ch[i];
    }
    return 0;
}