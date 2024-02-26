#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,tcase,fact=1;
    cin>>tcase;
    int num[tcase];
    if (tcase>=1 && tcase<=15){
        for (i = 0; i <tcase; i++){

                cin>>num[i];
        }

        for ( i = 0; i <tcase; i++)
        {
           int a=num[i];
           num[i]=a*2;
        }
        
    }
    

}

