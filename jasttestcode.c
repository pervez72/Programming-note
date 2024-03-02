#include<stdio.h>
int main(){
    int vow=0,cos=0,number=0,special=0,word=0,charc=0,len=0;
    char str[100];
    gets(str);

    int i=0;
    while (str[i]!=0)
    {   
        len++;
        i++;
    }
    
    for (i= 0; i<len-1; i++)
    {
       if(str[i]>=48 || str[i]<=57){
        number++;
       }
        else if((str[i]>=65 && str[i]<=91)||(str[i]>=97 && str[i]<=122)){
             if (str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'|str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
          vow++;
        }
            else
                cos++;
        }
        // //else if(ch[i]==){
        //   //  word++;
        // }
        else
            special++;
    }
    printf("%d vowel=",vow);
    printf("%d vowel=",cos);
    printf("%d vowel=",word);
    printf("%d vowel=",special);
    printf("%d vowel=",number);


    }
    