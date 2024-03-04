#include<bits/stdc++.h>
using namespace std;

int main(){

    int m,n,sum=0,temp;

    while (cin>>m>>n)
    {
       //if((n>=-100 && n<=100)&&(m>=-100 && m<=100)){
            if(m<=0 ||n<=0){
                
                break; //n and m = 0 value break
            }
            else 
            {
                if(n<=m){
                    temp=n;
                    for (int i=temp; i<=m; i++)
                    {
                        cout<<i<<" ";
                        sum=sum+i;

                    } 
                    cout<<"sum ="<<sum<<"\n";
                }
                else{
                    for (int i=m; i<=n; i++)
                    {
                        cout<<i<<" ";
                        sum=sum+i;
                    }
                    cout<<"sum ="<<sum<<"\n";
                }
                    
            }

             sum=0;    
        
    //    else
    //         break; // n and m input value condition
    }
}