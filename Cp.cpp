#include<bits/stdc++.h>
using namespace std;

int main(){

    int test=1;
    //cin>>test;


    while (test--)
    {  
         int n;
        cin>>n;

        if (n>=1 && n<=99)
        {
           for (int row=1; row<=n; row++)
           {
            
            for (int col=1; col<=n-row; col++)
            {
                cout<<" ";
            }
            for (int col=1; col<=(row*2)-1; col++)
            {
                cout<<"*";
            }
            cout<<"\n";
            
           }
           
        }
        
        
    }
}
        