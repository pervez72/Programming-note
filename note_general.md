**************Genaral**************
*   int m,n,sum=0;
    while (cin>>m>>n)
    {
        if(n==m){
              break;
        }
        else
            sum=m+n;
          
      cout<<sum<<endl;
    }
        // thats work a user defind loop;
* * 










**********Libray Funtion:****************
* floor(x)=banglai meanig  meje that means floatig point mumber jast count decimal number and skip other      number. // x=5.222 ans is=5 and skip 0.222
* ceil(x)= bangla meaning sad. that means after the decimal,next integar number in counted //x=5.33 ans is=6
* round(x)=when x value is 5.56 up 0.5 count=6 and x value is 5.4 less .05 count



*****Complexity Time and Others**********
* one for loop time in a 1 second=10^7 repated sate count. if number 10^7 upto not work loop.
* when create  time comlexity jast then ignor loop.and apply another algorithm.such as use law  





***********MATH******************
* when compair big number (10^12)^(10^6) >= (10^11)^(10^5) use logarithm // b* log(a)> m * log(n);[a,b=base_and_m,n=power]
* last 2 digit find outc any number: //jast modulus 100 in this number.more informaton problem no 219858
* last modifyed data


***************Array************************
* data push and specific data retrive and work then same index data push agin:
        for (i = 0; i <tcase; i++){
                cin>>num[i];
        }
        for ( i = 0; i <tcase; i++)
        {
           int a=num[i];
           num[i]=a*2;
        }
* 2D Array:
        * Diagonal Matrix= 2d Array Element is row and col value is excatly same.
        * TRANSPOSE MATRIX = row corvert is column and colmun is convert row
        * Upertaringle Element= when row index is small and colmun is big // (r < c)
        * Lowertaringle Element= inverse
        

****************STRING***************
* String is Charcter Type arry.
* string last index is null ='\0';
* char ch[]="Pervez" //size is 6 but last index is 5 so null value=6-5=1
* \ this is a line breaking tool that is   multiple string line
* string input=gets(var_name);
* string when data input do not use scanf becuse this is not work space after word so all time use gets(variale_name); function.that mean replace scanf by gets(variale_name);
 
* 
****** Libary Function:
* String Size: var_name.size(); //that is String length // or use strlen(var_name); 
* String copy a to b: strcpy(source_varname,targetvarname);
* String Concatination that means string sumation: strcat(a,b);
* String Compair: strcmp(s_var,s_var); //when string are equal return value 0 otherwise 1;
* String Reverse: strrev(str_var);
* 