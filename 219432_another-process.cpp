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
<<<<<<< HEAD
           num[i]=a*2;
=======
           while (a>0)
           {
            fact=fact*a;
            a--;
           }
           num[i]=fact;
            cout<<num[i]<<endl;
            fact=1;
>>>>>>> general
        }
        
    }
    

}

