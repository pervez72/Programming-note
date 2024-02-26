#include<bits/stdc++.h>
using namespace std;

int main(){

        int n,x;
        int p=0,ng=0,ev=0,od=0;
        cin>>n;
        if(n>=0 && n<=1000){
            int a[n];
            for (int i = 0; i < n; i++)
            {   
                cin>>a[i];
                if(a[i]>=-pow(10,5) && a[i]<=pow(10,5))
                {   
                if(a[i]>0)
                {
                    p++;
                    if(a[i]%2==0){
                    ev++;
                }
                else 
                    od++;
                }

                if(a[i]<0){
                    ng++;
                    x=a[i]*(-1);
                     if(a[i]%2==0){
                    ev++;
                }
                else 
                    od++;
                }
                }
                if(a[i]==0){

                    ev++;
                }
                
            }

            
        }
        cout<<"Even:"<<" "<<ev<<"\n";
        cout<<"Odd:"<<" "<<od<<"\n";
        cout<<"Positive:"<<" "<<p<<"\n";
        cout<<"Negative:"<<" "<<ng<<"\n";

        
    }
    