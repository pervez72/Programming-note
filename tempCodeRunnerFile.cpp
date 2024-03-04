#include<bits/stdc++.h>
using namespace std;

int main(){

    int test,temp,x,y,sum=0;
    cin>>test;

    while (test--)
    {
        cin>>x>>y;

        if ((x>=0 && x<=pow(10,4)) &&(y>=0 && y<=pow(10,4)))
        {
            if(x>=y){
                temp=y;

                for (int i=temp+1; i<x; i++)
            {
                 if(i%2!=0)sum+=i;
            } 
            cout<<sum<<"\n";
            }
            else
                for (int i=x+1; i<y; i++)
                {
                    if(i%2!=0)sum+=i;
                        
                }
                cout<<sum<<"\n";
            }
           sum=0;
        }
        
        
    }
    