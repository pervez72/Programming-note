#include<bits/stdc++.h>
using namespace std;

int main(){
  int t,n,i,fact=1;
  cin>>t;
  if (t>=0 && t<=15)
  {
    for (int i=0; i <t; i++)
  {
    cin>>n;
    if(n>=0 && n<=20){
    for ( i=1; i<=n; i++)
    {
      fact=fact*i;
    }
    }
    cout<<fact<<endl;
    
  }
  }
  
  
  




}
 