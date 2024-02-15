#include <bits/stdc++.h> 
using namespace std; 
  
// Function to return gcd of a and b 
int gcd(int a, int b) 
{ 
  if (a == 0) 
    return b; 
  return gcd(b % a, a); 
} 
  
// Function to find gcd of array of 
// numbers 
int findGCD(int arr[], int n) 
{ 
  int result = arr[0]; 
  for (int i = 1; i < n; i++) 
  { 
    result = gcd(arr[i], result); 
  
    if(result == 1) 
    { 
    return 1; 
    } 
  } 
  return result; 
} 
  

int main() 
{ 
    int n,m;
     cin>>n>>m;
    int a[n],b[m],arr[n];
    
    for(int i=0;i<n;i++){
       cin>>a[i];
     }
    
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
   for(int j=0;j<m;j++){
  for(int i=0;i<n;i++){
          arr[i]=a[i]+b[j];
       }
       // int p=sizeof(arr)/sizeof(arr[0]);
        cout<<findGCD(arr,n)<<" ";
    }
    
  

  return 0; 
} 

    
    