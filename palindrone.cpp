#include<bits/stdc++.h>
using namespace std;

int main(){

    char ch1[30];
    char ch2[30];

    int i=0,length=0,j;

    //cin>>ch1;
    gets(ch1);

    while (ch1[i]!='\0')
    {
        
    length++;
     i++;
    }
    
    for (j=0,i=length-1; i>=0; i--,j++)
    {
       ch2[j]=ch1[i];
    }
    ch2[j]='\0';


    cout<<ch2<<" ";

    int compair=strcmp(ch1,ch2);
    if(compair==0){
        cout<<"String in Plaindrone";
    }
    else
    cout<<"String in not Plaindrone";

}