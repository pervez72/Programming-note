// Liniar searce arry
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int findout=-1,n,i;
//     cin>>n;
//     int arr[10]={10,20,5,7,9,4};
    
//     for (i=0; i<6; i++)
//     {
//         if(arr[i]==n){
//             findout=((findout-i)*(-1));
//             break;
//         }
//     }
//     if(findout==-1){
//         cout<<"Not Found";
//     }
//     else
//         cout<<findout<<" "<<"No Position Detected";


// }

// // Matrix ALL :
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int i,j;
//     int a[3][3],b[3][3],c[3][3];
//     //input segment of A
//     for ( i = 0; i <3; i++)
//     {
//         for ( j =0; j<3; j++)
//         {
        
//           cout<<"A Mtrix"<<"["<<i<<"]"<<"["<<j<<"]=";
//           cin>>a[i][j];
//         }
//         cout<<"\n";
        
//     }
//     //input segment B
//     cout<<"Input B"<<'\t'<<endl;
//      for ( i = 0; i <3; i++)
//     {
//         for ( j =0; j<3; j++)
//         {
        
//           cout<<"B Mtrix"<<"["<<i<<"]"<<"["<<j<<"]=";
//           cin>>b[i][j];
//         }
//         cout<<"\n";
        
//     }
    
//   cout<<"Output"<<"\n";

//   for ( i = 0; i <3; i++)
//     {
//         for ( j =0; j<3; j++)
//         {
        
//         c[i][j]=a[i][j]+b[i][j];
          
//         }
//         cout<<"\n";
        
//     }
    
//     for ( i = 0; i <3; i++)
//     {
//         for ( j =0; j<3; j++)
//         {
        
//         cout<<c[i][j]<<" ";
          
//         }
//         cout<<"\n";
        
//     }

//}

//  MATRIX MULTIPICATION

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int i,j,ra,ca,rb,cb,mr,mc;
//     cout<<"Ener fisrt raw and col=";
//     cin>>ra>>ca;
//     cout<<"Ener second raw and col=";
//     cin>>rb>>cb;


//     if(ra==rb && ca==cb){
//         int a[ra][ca],b[rb][cb],c[ra][ca];
//     //input segment of A
//     for ( i = 0; i <ra; i++)
//     {
//         for ( j =0; j<ca; j++)
//         {
        
//           cout<<"A Mtrix"<<"["<<i<<"]"<<"["<<j<<"]=";
//           cin>>a[i][j];
//         }
//         cout<<"\n";
        
//     }
//     //input segment B
//     cout<<"Input B"<<'\t'<<endl;
//      for ( i = 0; i <rb; i++)
//     {
//         for ( j =0; j<cb; j++)
//         {
        
//           cout<<"B Mtrix"<<"["<<i<<"]"<<"["<<j<<"]=";
//           cin>>b[i][j];
//         }
//         cout<<"\n";
        
//     }
    
//   cout<<"Output"<<"\n";

//   for ( i = 0; i <rb; i++)
//     {
//         for ( j =0; j<cb; j++)
//         {
        
//         c[i][j]=a[i][j]*b[j][i];
          
//         }
//         cout<<"\n";
        
//     }
    
//     for ( i = 0; i <rb; i++)
//     {
//         for ( j =0; j<cb; j++)
//         {
        
//         cout<<c[i][j]<<" ";
          
//         }
//         cout<<"\n";
        
//     }

//     }
//     else
//         cout<<"do not multiplication please insert same raw and colum";
    
// }

// TRANSPOSE MATRIX =row corvert is column and colmun is convert row

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int a[3][3],tr[3][3];

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j= 0; j<3; j++)
//         {
//             cin>>a[i][j];
//         }
//         cout<<"\n";
//     }
    
//     cout<<"O/P"<<"\n";

//       for (int i = 0; i < 3; i++)
//         {
//         for (int j= 0; j<3; j++)
//         {
//             tr[j][i]=a[i][j];
//         }
//         cout<<"\n";
//     }


//       for (int i = 0; i < 3; i++)
//         {
//         for (int j= 0; j<3; j++)
//         {
//           cout<<tr[i][j]<<" ";
//         }
//         cout<<"\n";
//     }

// }

// DIAGONAL ELEMENT SUM 

// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//     int a[3][3],sum=0;
//      for (int i = 0; i < 3; i++)
//        {
//         for (int j= 0; j<3; j++)
//         {
//              cin>>a[i][j];
//          }
//         cout<<"\n";
//    }

//     cout<<"Diagonal value"<<endl;

//     for (int i = 0; i < 3; i++)
//        {
//         for (int j= 0; j<3; j++)
//         {
//              if(i==j)cout<<a[i][j]<<" ";
//          }
//         cout<<"\n";
//    }
//     cout<<"Diagonal element sum="<<endl;

//     for (int i = 0; i < 3; i++)
//        {
//         for (int j= 0; j<3; j++)
//         {
//              if(i==j){
//                 sum=sum+a[i][j];
//              }
//          }
       
//    }
//    cout<<sum;
// }

 // Upertaringle and Lowertrainge element

#include<bits/stdc++.h>
using namespace std;

int main(){

    int a[3][3],upertrinle=0,lowertrainle=0;
     for (int i = 0; i < 3; i++)
       {
        for (int j= 0; j<3; j++)
        {
             cin>>a[i][j];
         }
        cout<<"\n";
   }

   for (int i = 0; i < 3; i++)
       {
        for (int j= 0; j<3; j++)
        {
             if (i<j)
             {
              upertrinle=upertrinle+a[i][j];
             }
             if(i>j){
               lowertrainle=lowertrainle+a[i][j];
             }
         }
      
   }

  cout<<upertrinle<<"\n";
  cout<<lowertrainle<<"\n";
}