//Hackerearth
#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;
main()
{

char str[1000000],ch;
int tc,len,i,j;
cin>>tc;
while(tc--)
   {
       char res[1000000];
       scanf("%s",str);
       len=strlen(str);
       ch=str[0];
       j=1;
       res[0]=ch;
       for(i=1;i<len;i++)
       {
           if(ch != str[i])
           {
               ch=str[i];
               res[j]=ch;
               j++;
           }


       }
       res[j]='\0';
       printf("%s\n",res);
   }
}
