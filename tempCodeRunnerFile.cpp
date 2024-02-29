#include<bits/stdc++.h>
using namespace std;

int main(){
   int tcase,n,r;
   cin>>tcase;

   if(1<=tcase && tcase<=10){

    for (int i=0; i <tcase; i++)
    {
      cin>>n;
      if(n>=0 && n<=pow(10,9)){
        while (n>0)
    {
        r=n%10;
        n=n/10;
        cout<<r;
        if(n>0){
            cout<<" ";
        }
    }
      }
    
   
      cout<<"\n";
        
    }
    
    return 0;
    }

   }


