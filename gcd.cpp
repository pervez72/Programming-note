#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,gcd;
    cin>>a>>b;
    
    if((a>=1 && a<=1000) && (b>=1 && b<=1000)){

        for (int i = 1; i<=a && i<=b; i++)
        {
        if (a%i==0 && b%i==0)
        {
             gcd=i;
        }  
    }
    cout<<gcd<<"\n";
    }
    
 }
 